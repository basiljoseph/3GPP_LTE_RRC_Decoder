/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_UE_EUTRA_Capability_v9e0_IEs_H_
#define	_UE_EUTRA_Capability_v9e0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RF_Parameters_v9e0;
struct UE_EUTRA_Capability_v9h0_IEs;

/* UE-EUTRA-Capability-v9e0-IEs */
typedef struct UE_EUTRA_Capability_v9e0_IEs {
	struct RF_Parameters_v9e0	*rf_Parameters_v9e0	/* OPTIONAL */;
	struct UE_EUTRA_Capability_v9h0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_EUTRA_Capability_v9e0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_EUTRA_Capability_v9e0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RF-Parameters-v9e0.h"
#include "UE-EUTRA-Capability-v9h0-IEs.h"

#endif	/* _UE_EUTRA_Capability_v9e0_IEs_H_ */
#include <asn_internal.h>
