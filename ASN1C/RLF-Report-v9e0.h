/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_RLF_Report_v9e0_H_
#define	_RLF_Report_v9e0_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasResultList2EUTRA-v9e0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RLF-Report-v9e0 */
typedef struct RLF_Report_v9e0 {
	MeasResultList2EUTRA_v9e0_t	 measResultListEUTRA_v9e0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RLF_Report_v9e0_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RLF_Report_v9e0;

#ifdef __cplusplus
}
#endif

#endif	/* _RLF_Report_v9e0_H_ */
#include <asn_internal.h>