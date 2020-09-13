/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RRCConnectionReestablishmentComplete_v8a0_IEs_H_
#define	_RRCConnectionReestablishmentComplete_v8a0_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RRCConnectionReestablishmentComplete_v1020_IEs;

/* RRCConnectionReestablishmentComplete-v8a0-IEs */
typedef struct RRCConnectionReestablishmentComplete_v8a0_IEs {
	OCTET_STRING_t	*lateNonCriticalExtension	/* OPTIONAL */;
	struct RRCConnectionReestablishmentComplete_v1020_IEs	*nonCriticalExtension	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReestablishmentComplete_v8a0_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReestablishmentComplete_v8a0_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RRCConnectionReestablishmentComplete-v1020-IEs.h"

#endif	/* _RRCConnectionReestablishmentComplete_v8a0_IEs_H_ */
#include <asn_internal.h>
