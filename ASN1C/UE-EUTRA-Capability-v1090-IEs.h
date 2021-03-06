/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v1090_IEs_H_
#define	_UE_EUTRA_Capability_v1090_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RF_Parameters_v1090;

/* UE-EUTRA-Capability-v1090-IEs */
typedef struct UE_EUTRA_Capability_v1090_IEs {
	struct RF_Parameters_v1090	*rf_Parameters_v1090	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v1090_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v1090_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v1090_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RF-Parameters-v1090.h"

#endif	/* _UE_EUTRA_Capability_v1090_IEs_H_ */
#include <asn_internal.h>
