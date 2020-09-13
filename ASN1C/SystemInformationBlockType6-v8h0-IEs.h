/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SystemInformationBlockType6_v8h0_IEs_H_
#define	_SystemInformationBlockType6_v8h0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CarrierFreqInfoUTRA_FDD_v8h0;

/* SystemInformationBlockType6-v8h0-IEs */
typedef struct SystemInformationBlockType6_v8h0_IEs {
	struct SystemInformationBlockType6_v8h0_IEs__carrierFreqListUTRA_FDD_v8h0 {
		A_SEQUENCE_OF(struct CarrierFreqInfoUTRA_FDD_v8h0) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *carrierFreqListUTRA_FDD_v8h0;
	struct SystemInformationBlockType6_v8h0_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformationBlockType6_v8h0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformationBlockType6_v8h0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CarrierFreqInfoUTRA-FDD-v8h0.h"

#endif	/* _SystemInformationBlockType6_v8h0_IEs_H_ */
#include <asn_internal.h>
