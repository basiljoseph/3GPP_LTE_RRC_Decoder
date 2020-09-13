/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SystemInformationBlockType10_H_
#define	_SystemInformationBlockType10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemInformationBlockType10 */
typedef struct SystemInformationBlockType10 {
	BIT_STRING_t	 messageIdentifier;
	BIT_STRING_t	 serialNumber;
	OCTET_STRING_t	 warningType;
	OCTET_STRING_t	*dummy	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType10;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemInformationBlockType10_H_ */
#include <asn_internal.h>
