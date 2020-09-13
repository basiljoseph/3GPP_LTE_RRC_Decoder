/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_MeasSubframePatternPCell_r10_H_
#define	_MeasSubframePatternPCell_r10_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include "MeasSubframePattern-r10.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasSubframePatternPCell_r10_PR {
	MeasSubframePatternPCell_r10_PR_NOTHING,	/* No components present */
	MeasSubframePatternPCell_r10_PR_release,
	MeasSubframePatternPCell_r10_PR_setup
} MeasSubframePatternPCell_r10_PR;

/* MeasSubframePatternPCell-r10 */
typedef struct MeasSubframePatternPCell_r10 {
	MeasSubframePatternPCell_r10_PR present;
	union MeasSubframePatternPCell_r10_u {
		NULL_t	 release;
		MeasSubframePattern_r10_t	 setup;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasSubframePatternPCell_r10_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasSubframePatternPCell_r10;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasSubframePatternPCell_r10_H_ */
#include <asn_internal.h>
