namespace _3GPP_LTE_RRC_Decoder
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            this.menuStrip1 = new System.Windows.Forms.MenuStrip();
            this.filwToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.exitToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.helpToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.aboutToolStripMenuItem = new System.Windows.Forms.ToolStripMenuItem();
            this.comboBox_message_type = new System.Windows.Forms.ComboBox();
            this.button_decode = new System.Windows.Forms.Button();
            this.statusStrip1 = new System.Windows.Forms.StatusStrip();
            this.toolStripStatusLabel1 = new System.Windows.Forms.ToolStripStatusLabel();
            this.toolTip_textbox_encoded = new System.Windows.Forms.ToolTip(this.components);
            this.textBox_encoded = new System.Windows.Forms.RichTextBox();
            this.textBox_decoded = new System.Windows.Forms.TextBox();
            this.menuStrip1.SuspendLayout();
            this.statusStrip1.SuspendLayout();
            this.SuspendLayout();
            // 
            // menuStrip1
            // 
            this.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.filwToolStripMenuItem,
            this.helpToolStripMenuItem});
            this.menuStrip1.Location = new System.Drawing.Point(0, 0);
            this.menuStrip1.Name = "menuStrip1";
            this.menuStrip1.Size = new System.Drawing.Size(784, 24);
            this.menuStrip1.TabIndex = 1;
            this.menuStrip1.Text = "menuStrip1";
            // 
            // filwToolStripMenuItem
            // 
            this.filwToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.exitToolStripMenuItem});
            this.filwToolStripMenuItem.Name = "filwToolStripMenuItem";
            this.filwToolStripMenuItem.Size = new System.Drawing.Size(37, 20);
            this.filwToolStripMenuItem.Text = "File";
            // 
            // exitToolStripMenuItem
            // 
            this.exitToolStripMenuItem.Name = "exitToolStripMenuItem";
            this.exitToolStripMenuItem.Size = new System.Drawing.Size(92, 22);
            this.exitToolStripMenuItem.Text = "Exit";
            this.exitToolStripMenuItem.Click += new System.EventHandler(this.exitToolStripMenuItem_Click);
            // 
            // helpToolStripMenuItem
            // 
            this.helpToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.aboutToolStripMenuItem});
            this.helpToolStripMenuItem.Name = "helpToolStripMenuItem";
            this.helpToolStripMenuItem.Size = new System.Drawing.Size(44, 20);
            this.helpToolStripMenuItem.Text = "Help";
            // 
            // aboutToolStripMenuItem
            // 
            this.aboutToolStripMenuItem.Name = "aboutToolStripMenuItem";
            this.aboutToolStripMenuItem.Size = new System.Drawing.Size(107, 22);
            this.aboutToolStripMenuItem.Text = "About";
            this.aboutToolStripMenuItem.Click += new System.EventHandler(this.aboutToolStripMenuItem_Click);
            // 
            // comboBox_message_type
            // 
            this.comboBox_message_type.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.comboBox_message_type.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox_message_type.FormattingEnabled = true;
            this.comboBox_message_type.Items.AddRange(new object[] {
            "RRC BCCH-BCH-Message (3GPP TS 36.331 V10.12.0)",
            "RRC BCCH-DL-SCH-Message (3GPP TS 36.331 V10.12.0)",
            "RRC DL-CCCH-Message (3GPP TS 36.331 V10.12.0)",
            "RRC DL-DCCH-Message (3GPP TS 36.331 V10.12.0)",
            "RRC UL-CCCH-Message (3GPP TS 36.331 V10.12.0)",
            "RRC UL-DCCH-Message (3GPP TS 36.331 V10.12.0)"});
            this.comboBox_message_type.Location = new System.Drawing.Point(13, 127);
            this.comboBox_message_type.Name = "comboBox_message_type";
            this.comboBox_message_type.Size = new System.Drawing.Size(678, 21);
            this.comboBox_message_type.TabIndex = 2;
            // 
            // button_decode
            // 
            this.button_decode.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.button_decode.Location = new System.Drawing.Point(697, 125);
            this.button_decode.Name = "button_decode";
            this.button_decode.Size = new System.Drawing.Size(75, 23);
            this.button_decode.TabIndex = 3;
            this.button_decode.Text = "Decode";
            this.button_decode.UseVisualStyleBackColor = true;
            this.button_decode.Click += new System.EventHandler(this.button_decode_Click);
            // 
            // statusStrip1
            // 
            this.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[] {
            this.toolStripStatusLabel1});
            this.statusStrip1.Location = new System.Drawing.Point(0, 539);
            this.statusStrip1.Name = "statusStrip1";
            this.statusStrip1.Size = new System.Drawing.Size(784, 22);
            this.statusStrip1.TabIndex = 5;
            this.statusStrip1.Text = "statusStrip1";
            // 
            // toolStripStatusLabel1
            // 
            this.toolStripStatusLabel1.Name = "toolStripStatusLabel1";
            this.toolStripStatusLabel1.Size = new System.Drawing.Size(118, 17);
            this.toolStripStatusLabel1.Text = "toolStripStatusLabel1";
            // 
            // toolTip_textbox_encoded
            // 
            this.toolTip_textbox_encoded.ShowAlways = true;
            this.toolTip_textbox_encoded.ToolTipIcon = System.Windows.Forms.ToolTipIcon.Info;
            this.toolTip_textbox_encoded.ToolTipTitle = "Copy and paste data directly from Wireshark";
            // 
            // textBox_encoded
            // 
            this.textBox_encoded.Font = new System.Drawing.Font("Consolas", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_encoded.Location = new System.Drawing.Point(13, 28);
            this.textBox_encoded.Name = "textBox_encoded";
            this.textBox_encoded.Size = new System.Drawing.Size(759, 91);
            this.textBox_encoded.TabIndex = 8;
            this.textBox_encoded.Text = "0000   a0 10 00 ";
            this.toolTip_textbox_encoded.SetToolTip(this.textBox_encoded, "Right click on the data to be copied.\r\nSelext either of the following methods\r\n1." +
        " Copy > Bytes > Offset Hex\r\n2. Copy > Bytes > Hex stream");
            this.textBox_encoded.Click += new System.EventHandler(this.textBox_encoded_Click);
            // 
            // textBox_decoded
            // 
            this.textBox_decoded.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.textBox_decoded.Font = new System.Drawing.Font("Consolas", 8.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.textBox_decoded.Location = new System.Drawing.Point(13, 155);
            this.textBox_decoded.Multiline = true;
            this.textBox_decoded.Name = "textBox_decoded";
            this.textBox_decoded.ReadOnly = true;
            this.textBox_decoded.Size = new System.Drawing.Size(759, 381);
            this.textBox_decoded.TabIndex = 7;
            // 
            // Form1
            // 
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.None;
            this.ClientSize = new System.Drawing.Size(784, 561);
            this.Controls.Add(this.textBox_encoded);
            this.Controls.Add(this.textBox_decoded);
            this.Controls.Add(this.statusStrip1);
            this.Controls.Add(this.button_decode);
            this.Controls.Add(this.comboBox_message_type);
            this.Controls.Add(this.menuStrip1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MainMenuStrip = this.menuStrip1;
            this.MinimumSize = new System.Drawing.Size(800, 600);
            this.Name = "Form1";
            this.Text = "3GPP LTE RRC ASN.1 Decoder";
            this.menuStrip1.ResumeLayout(false);
            this.menuStrip1.PerformLayout();
            this.statusStrip1.ResumeLayout(false);
            this.statusStrip1.PerformLayout();
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.MenuStrip menuStrip1;
        private System.Windows.Forms.ToolStripMenuItem filwToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem exitToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem helpToolStripMenuItem;
        private System.Windows.Forms.ToolStripMenuItem aboutToolStripMenuItem;
        private System.Windows.Forms.ComboBox comboBox_message_type;
        private System.Windows.Forms.Button button_decode;
        private System.Windows.Forms.StatusStrip statusStrip1;
        private System.Windows.Forms.ToolStripStatusLabel toolStripStatusLabel1;
        private System.Windows.Forms.ToolTip toolTip_textbox_encoded;
        private System.Windows.Forms.TextBox textBox_decoded;
        private System.Windows.Forms.RichTextBox textBox_encoded;
    }
}

