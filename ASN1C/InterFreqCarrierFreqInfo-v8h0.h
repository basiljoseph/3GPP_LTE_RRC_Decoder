/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_InterFreqCarrierFreqInfo_v8h0_H_
#define	_InterFreqCarrierFreqInfo_v8h0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MultiBandInfoList;

/* InterFreqCarrierFreqInfo-v8h0 */
typedef struct InterFreqCarrierFreqInfo_v8h0 {
	struct MultiBandInfoList	*multiBandInfoList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqCarrierFreqInfo_v8h0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqCarrierFreqInfo_v8h0;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MultiBandInfoList.h"

#endif	/* _InterFreqCarrierFreqInfo_v8h0_H_ */
#include <asn_internal.h>
