using System;
using System.Linq;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Metadata.W3cXsd2001; // hex to byte conversion
using System.Text.RegularExpressions;
using System.Windows.Forms;

namespace _3GPP_LTE_RRC_Decoder
{
    public partial class Form1 : Form
    {
        [DllImport("asn1c.dll", CallingConvention = CallingConvention.Cdecl)]
        public static extern int Decode_Message(
            [In] int type,
            [In] byte[] encoded,
            [In] int size,
            [Out] byte[] xml);

        private bool first_time_click;
        public Form1()
        {
            InitializeComponent();
            toolStripStatusLabel1.Text = "";
            statusStrip1.Refresh();
            first_time_click = true;
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private byte[] parse_input()
        {

            /* Identify whether the input string is 
             * 1. Hex String - A long string with no spaces in between
             * 2. Offset Hex - A neatly formatted hex code with spaces after every hex code
             */
            string input = textBox_encoded.Text.Trim();
            if (input.Contains(" "))
            {
                /* Looks like Offset hex
                 * Offset hex string will contain the offset markers like "0000    "
                 * They are to be removed from every line.
                 * Use the regex pattern to remove them
                 */
                string pattern = @"\d\d\d\d\s+";
                Regex regex = new Regex(pattern);
                input = regex.Replace(input, "");
                byte[] test = input.Split().Select(s => Convert.ToByte(s, 16)).ToArray();
                return test;
            }
            else
            {
                /* No spaces. Just a long hex stream */
                SoapHexBinary shb = SoapHexBinary.Parse(input);
                return shb.Value;
            }

        }

        private void button_decode_Click(object sender, EventArgs e)
        {
            textBox_decoded.Clear();

            if (comboBox_message_type.SelectedIndex == -1)
            {
                MessageBox.Show("Select a proper decoder");
                comboBox_message_type.DroppedDown = true;
                return;
            }

            try
            {
                byte[] per_encoded = parse_input();
                byte[] per_decoded = new byte[32768]; // 32K byte buffer for output string
                int consumed = Decode_Message(comboBox_message_type.SelectedIndex, per_encoded, per_encoded.Length, per_decoded);
                if (consumed > 0)
                {
                    string xml = System.Text.Encoding.ASCII.GetString(per_decoded);
                    xml = xml.Replace("\n", "\r\n");
                    textBox_decoded.AppendText(xml);

                    toolStripStatusLabel1.Text = "Decoded successfully. Sent Data : " + per_encoded.Length + " bytes, Consumed Data: " + consumed + " bytes";
                    if (consumed < per_encoded.Length)
                        MessageBox.Show("There are trailing data at the end of message");
                }
                else if (consumed == -2)
                {
                    throw new Exception("More data is required for decoding");
                }
                else
                {
                    throw new Exception("Decoding Failed");
                }
            }
            catch (Exception exp)
            {
                toolStripStatusLabel1.Text = exp.Message;
                MessageBox.Show(exp.Message);
            }
            finally
            {
                statusStrip1.Refresh();
            }
        }

        private void textBox_encoded_Click(object sender, EventArgs e)
        {
            if(first_time_click)
            {
                textBox_encoded.Clear();
                first_time_click = false;
            }
        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form aboutForm = new AboutBox1();
            aboutForm.Show(this);
        }

    }
}
