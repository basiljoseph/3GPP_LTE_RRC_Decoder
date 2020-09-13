/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_CSG_AllowedReportingCells_r9_H_
#define	_CSG_AllowedReportingCells_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct PhysCellIdRangeUTRA_FDDList_r9;

/* CSG-AllowedReportingCells-r9 */
typedef struct CSG_AllowedReportingCells_r9 {
	struct PhysCellIdRangeUTRA_FDDList_r9	*physCellIdRangeUTRA_FDDList_r9	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CSG_AllowedReportingCells_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSG_AllowedReportingCells_r9;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PhysCellIdRangeUTRA-FDDList-r9.h"

#endif	/* _CSG_AllowedReportingCells_r9_H_ */
#include <asn_internal.h>