/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_IRAT_ParametersUTRA_v9h0_H_
#define	_IRAT_ParametersUTRA_v9h0_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IRAT_ParametersUTRA_v9h0__mfbi_UTRA_r9 {
	IRAT_ParametersUTRA_v9h0__mfbi_UTRA_r9_supported	= 0
} e_IRAT_ParametersUTRA_v9h0__mfbi_UTRA_r9;

/* IRAT-ParametersUTRA-v9h0 */
typedef struct IRAT_ParametersUTRA_v9h0 {
	long	 mfbi_UTRA_r9;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersUTRA_v9h0_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_mfbi_UTRA_r9_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersUTRA_v9h0;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersUTRA_v9h0_H_ */
#include <asn_internal.h>
