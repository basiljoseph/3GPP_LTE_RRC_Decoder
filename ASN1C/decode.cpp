extern "C"
{
#include "BCCH-BCH-Message.h"
#include "BCCH-DL-SCH-Message.h"
#include "DL-CCCH-Message.h"
#include "DL-DCCH-Message.h"
#include "UL-CCCH-Message.h"
#include "UL-DCCH-Message.h"

	static int bufferIdx = 0;

	static int xer__print2buffer(const void *buffer, size_t size, void *app_key)
	{
		char *dest = (char *) app_key;
		memcpy(dest + bufferIdx, buffer, size);
		bufferIdx += size;
		return 0;
	}

	asn_TYPE_descriptor_t Get_Message_Type(int type)
	{
		switch (type)
		{
		case 0:
			return asn_DEF_BCCH_BCH_Message;
		case 1:
			return asn_DEF_BCCH_DL_SCH_Message;
		case 2:
			return asn_DEF_DL_CCCH_Message;
		case 3:
			return asn_DEF_DL_DCCH_Message;
		case 4:
			return asn_DEF_UL_CCCH_Message;
		case 5:
			return asn_DEF_UL_DCCH_Message;
		default:
			return asn_DEF_UL_CCCH_Message;
		}
	}

	__declspec(dllexport) int Decode_Message(int msgType, uint8_t *messageBuf, int size, uint8_t *dest)
	{
		bufferIdx = 0;
		void * message = 0;
		asn_TYPE_descriptor_t type = Get_Message_Type(msgType);
		const asn_dec_rval_t rval = uper_decode_complete(0, &type, &message, messageBuf, size);
		if (rval.code == RC_FAIL)
		{
			/* The decoding itself has failed */
			return -1;
		}
		else if (rval.code == RC_WMORE)
		{
			/* More data is expected */
			return -2;
		}

		if (message)
		{
			asn_enc_rval_t er = xer_encode(&type, message, XER_F_BASIC, xer__print2buffer, dest);
		}

		/* Freeing the variable */
		ASN_STRUCT_FREE(type, message);
		return rval.consumed;
	} // End of Decode_Message

}