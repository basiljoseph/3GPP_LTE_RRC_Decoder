/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_SystemInformation_r8_IEs_H_
#define	_SystemInformation_r8_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SystemInformation_v8a0_IEs;
struct Sib_TypeAndInfo;

/* SystemInformation-r8-IEs */
typedef struct SystemInformation_r8_IEs {
	struct SystemInformation_r8_IEs__sib_TypeAndInfo {
		A_SEQUENCE_OF(struct Sib_TypeAndInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} sib_TypeAndInfo;
	struct SystemInformation_v8a0_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemInformation_r8_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemInformation_r8_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SystemInformation-v8a0-IEs.h"
#include "Sib-TypeAndInfo.h"

#endif	/* _SystemInformation_r8_IEs_H_ */
#include <asn_internal.h>
