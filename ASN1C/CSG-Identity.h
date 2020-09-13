/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#ifndef	_CSG_Identity_H_
#define	_CSG_Identity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CSG-Identity */
typedef BIT_STRING_t	 CSG_Identity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CSG_Identity;
asn_struct_free_f CSG_Identity_free;
asn_struct_print_f CSG_Identity_print;
asn_constr_check_f CSG_Identity_constraint;
ber_type_decoder_f CSG_Identity_decode_ber;
der_type_encoder_f CSG_Identity_encode_der;
xer_type_decoder_f CSG_Identity_decode_xer;
xer_type_encoder_f CSG_Identity_encode_xer;
per_type_decoder_f CSG_Identity_decode_uper;
per_type_encoder_f CSG_Identity_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CSG_Identity_H_ */
#include <asn_internal.h>
