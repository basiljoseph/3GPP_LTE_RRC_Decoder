/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SystemInformationBlockType5_v9e0_IEs_H_
#define	_SystemInformationBlockType5_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqCarrierFreqInfo_v9e0;

/* SystemInformationBlockType5-v9e0-IEs */
typedef struct SystemInformationBlockType5_v9e0_IEs {
	struct SystemInformationBlockType5_v9e0_IEs__interFreqCarrierFreqList_v9e0 {
		A_SEQUENCE_OF(struct InterFreqCarrierFreqInfo_v9e0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqCarrierFreqList_v9e0;
	struct SystemInformationBlockType5_v9e0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType5_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType5_v9e0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqCarrierFreqInfo-v9e0.h"

#endif	/* _SystemInformationBlockType5_v9e0_IEs_H_ */
#include <asn_internal.h>
