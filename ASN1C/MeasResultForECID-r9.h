/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_MeasResultForECID_r9_H_
#define	_MeasResultForECID_r9_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MeasResultForECID-r9 */
typedef struct MeasResultForECID_r9 {
	long	 ue_RxTxTimeDiffResult_r9;
	BIT_STRING_t	 currentSFN_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasResultForECID_r9_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasResultForECID_r9;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasResultForECID_r9_H_ */
#include <asn_internal.h>
