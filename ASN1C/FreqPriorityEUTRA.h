/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_FreqPriorityEUTRA_H_
#define	_FreqPriorityEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ARFCN-ValueEUTRA.h"
#include "CellReselectionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* FreqPriorityEUTRA */
typedef struct FreqPriorityEUTRA {
	ARFCN_ValueEUTRA_t	 carrierFreq;
	CellReselectionPriority_t	 cellReselectionPriority;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FreqPriorityEUTRA_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FreqPriorityEUTRA;

#ifdef __cplusplus
}
#endif

#endif	/* _FreqPriorityEUTRA_H_ */
#include <asn_internal.h>
