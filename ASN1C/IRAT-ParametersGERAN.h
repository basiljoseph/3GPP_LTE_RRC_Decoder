/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_IRAT_ParametersGERAN_H_
#define	_IRAT_ParametersGERAN_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SupportedBandListGERAN.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* IRAT-ParametersGERAN */
typedef struct IRAT_ParametersGERAN {
	SupportedBandListGERAN_t	 supportedBandListGERAN;
	BOOLEAN_t	 interRAT_PS_HO_ToGERAN;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IRAT_ParametersGERAN_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IRAT_ParametersGERAN;

#ifdef __cplusplus
}
#endif

#endif	/* _IRAT_ParametersGERAN_H_ */
#include <asn_internal.h>
