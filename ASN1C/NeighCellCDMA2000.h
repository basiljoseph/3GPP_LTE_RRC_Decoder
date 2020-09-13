/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_NeighCellCDMA2000_H_
#define	_NeighCellCDMA2000_H_


#include <asn_application.h>

/* Including external dependencies */
#include "BandclassCDMA2000.h"
#include "NeighCellsPerBandclassListCDMA2000.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NeighCellCDMA2000 */
typedef struct NeighCellCDMA2000 {
	BandclassCDMA2000_t	 bandClass;
	NeighCellsPerBandclassListCDMA2000_t	 neighCellsPerFreqList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NeighCellCDMA2000_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NeighCellCDMA2000;

#ifdef __cplusplus
}
#endif

#endif	/* _NeighCellCDMA2000_H_ */
#include <asn_internal.h>
