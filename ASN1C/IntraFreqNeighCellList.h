/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_IntraFreqNeighCellList_H_
#define	_IntraFreqNeighCellList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqNeighCellInfo;

/* IntraFreqNeighCellList */
typedef struct IntraFreqNeighCellList {
	A_SEQUENCE_OF(struct IntraFreqNeighCellInfo) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqNeighCellList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqNeighCellList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqNeighCellInfo.h"

#endif	/* _IntraFreqNeighCellList_H_ */
#include <asn_internal.h>
