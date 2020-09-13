/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ULHandoverPreparationTransfer_r8_IEs_H_
#define	_ULHandoverPreparationTransfer_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CDMA2000-Type.h"
#include <BIT_STRING.h>
#include "DedicatedInfoCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ULHandoverPreparationTransfer_v8a0_IEs;

/* ULHandoverPreparationTransfer-r8-IEs */
typedef struct ULHandoverPreparationTransfer_r8_IEs {
	CDMA2000_Type_t	 cdma2000_Type;
	BIT_STRING_t	*meid	/* OPTIONAL */;
	DedicatedInfoCDMA2000_t	 dedicatedInfo;
	struct ULHandoverPreparationTransfer_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ULHandoverPreparationTransfer_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ULHandoverPreparationTransfer_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ULHandoverPreparationTransfer-v8a0-IEs.h"

#endif	/* _ULHandoverPreparationTransfer_r8_IEs_H_ */
#include <asn_internal.h>
