/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_ReleaseCause_H_
#define	_ReleaseCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ReleaseCause {
	ReleaseCause_loadBalancingTAUrequired	= 0,
	ReleaseCause_other	= 1,
	ReleaseCause_cs_FallbackHighPriority_v1020	= 2,
	ReleaseCause_spare1	= 3
} e_ReleaseCause;

/* ReleaseCause */
typedef long	 ReleaseCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReleaseCause;
asn_struct_free_f ReleaseCause_free;
asn_struct_print_f ReleaseCause_print;
asn_constr_check_f ReleaseCause_constraint;
ber_type_decoder_f ReleaseCause_decode_ber;
der_type_encoder_f ReleaseCause_encode_der;
xer_type_decoder_f ReleaseCause_decode_xer;
xer_type_encoder_f ReleaseCause_encode_xer;
per_type_decoder_f ReleaseCause_decode_uper;
per_type_encoder_f ReleaseCause_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ReleaseCause_H_ */
#include <asn_internal.h>
