/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "NeighCellSI-AcquisitionParameters-r9.h"

static int
intraFreqSI_AcquisitionForHO_r9_2_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
intraFreqSI_AcquisitionForHO_r9_2_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
intraFreqSI_AcquisitionForHO_r9_2_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
intraFreqSI_AcquisitionForHO_r9_2_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
intraFreqSI_AcquisitionForHO_r9_2_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
intraFreqSI_AcquisitionForHO_r9_2_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
intraFreqSI_AcquisitionForHO_r9_2_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
intraFreqSI_AcquisitionForHO_r9_2_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
intraFreqSI_AcquisitionForHO_r9_2_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	intraFreqSI_AcquisitionForHO_r9_2_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
interFreqSI_AcquisitionForHO_r9_4_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
interFreqSI_AcquisitionForHO_r9_4_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
interFreqSI_AcquisitionForHO_r9_4_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
interFreqSI_AcquisitionForHO_r9_4_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
interFreqSI_AcquisitionForHO_r9_4_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
interFreqSI_AcquisitionForHO_r9_4_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
interFreqSI_AcquisitionForHO_r9_4_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
interFreqSI_AcquisitionForHO_r9_4_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
interFreqSI_AcquisitionForHO_r9_4_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	interFreqSI_AcquisitionForHO_r9_4_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static int
utran_SI_AcquisitionForHO_r9_6_constraint(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	/* Replace with underlying type checker */
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	return td->check_constraints(td, sptr, ctfailcb, app_key);
}

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static void
utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(asn_TYPE_descriptor_t *td) {
	td->free_struct    = asn_DEF_NativeEnumerated.free_struct;
	td->print_struct   = asn_DEF_NativeEnumerated.print_struct;
	td->check_constraints = asn_DEF_NativeEnumerated.check_constraints;
	td->ber_decoder    = asn_DEF_NativeEnumerated.ber_decoder;
	td->der_encoder    = asn_DEF_NativeEnumerated.der_encoder;
	td->xer_decoder    = asn_DEF_NativeEnumerated.xer_decoder;
	td->xer_encoder    = asn_DEF_NativeEnumerated.xer_encoder;
	td->uper_decoder   = asn_DEF_NativeEnumerated.uper_decoder;
	td->uper_encoder   = asn_DEF_NativeEnumerated.uper_encoder;
	if(!td->per_constraints)
		td->per_constraints = asn_DEF_NativeEnumerated.per_constraints;
	td->elements       = asn_DEF_NativeEnumerated.elements;
	td->elements_count = asn_DEF_NativeEnumerated.elements_count;
     /* td->specifics      = asn_DEF_NativeEnumerated.specifics;	// Defined explicitly */
}

static void
utran_SI_AcquisitionForHO_r9_6_free(asn_TYPE_descriptor_t *td,
		void *struct_ptr, int contents_only) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	td->free_struct(td, struct_ptr, contents_only);
}

static int
utran_SI_AcquisitionForHO_r9_6_print(asn_TYPE_descriptor_t *td, const void *struct_ptr,
		int ilevel, asn_app_consume_bytes_f *cb, void *app_key) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->print_struct(td, struct_ptr, ilevel, cb, app_key);
}

static asn_dec_rval_t
utran_SI_AcquisitionForHO_r9_6_decode_ber(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const void *bufptr, size_t size, int tag_mode) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->ber_decoder(opt_codec_ctx, td, structure, bufptr, size, tag_mode);
}

static asn_enc_rval_t
utran_SI_AcquisitionForHO_r9_6_encode_der(asn_TYPE_descriptor_t *td,
		void *structure, int tag_mode, ber_tlv_tag_t tag,
		asn_app_consume_bytes_f *cb, void *app_key) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->der_encoder(td, structure, tag_mode, tag, cb, app_key);
}

static asn_dec_rval_t
utran_SI_AcquisitionForHO_r9_6_decode_xer(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		void **structure, const char *opt_mname, const void *bufptr, size_t size) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->xer_decoder(opt_codec_ctx, td, structure, opt_mname, bufptr, size);
}

static asn_enc_rval_t
utran_SI_AcquisitionForHO_r9_6_encode_xer(asn_TYPE_descriptor_t *td, void *structure,
		int ilevel, enum xer_encoder_flags_e flags,
		asn_app_consume_bytes_f *cb, void *app_key) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->xer_encoder(td, structure, ilevel, flags, cb, app_key);
}

static asn_dec_rval_t
utran_SI_AcquisitionForHO_r9_6_decode_uper(asn_codec_ctx_t *opt_codec_ctx, asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints, void **structure, asn_per_data_t *per_data) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->uper_decoder(opt_codec_ctx, td, constraints, structure, per_data);
}

static asn_enc_rval_t
utran_SI_AcquisitionForHO_r9_6_encode_uper(asn_TYPE_descriptor_t *td,
		asn_per_constraints_t *constraints,
		void *structure, asn_per_outp_t *per_out) {
	utran_SI_AcquisitionForHO_r9_6_inherit_TYPE_descriptor(td);
	return td->uper_encoder(td, constraints, structure, per_out);
}

static asn_per_constraints_t asn_PER_type_intraFreqSI_AcquisitionForHO_r9_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_interFreqSI_AcquisitionForHO_r9_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_utran_SI_AcquisitionForHO_r9_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_intraFreqSI_AcquisitionForHO_r9_value2enum_2[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_intraFreqSI_AcquisitionForHO_r9_enum2value_2[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_intraFreqSI_AcquisitionForHO_r9_specs_2 = {
	asn_MAP_intraFreqSI_AcquisitionForHO_r9_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_intraFreqSI_AcquisitionForHO_r9_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_intraFreqSI_AcquisitionForHO_r9_2 = {
	"intraFreqSI-AcquisitionForHO-r9",
	"intraFreqSI-AcquisitionForHO-r9",
	intraFreqSI_AcquisitionForHO_r9_2_free,
	intraFreqSI_AcquisitionForHO_r9_2_print,
	intraFreqSI_AcquisitionForHO_r9_2_constraint,
	intraFreqSI_AcquisitionForHO_r9_2_decode_ber,
	intraFreqSI_AcquisitionForHO_r9_2_encode_der,
	intraFreqSI_AcquisitionForHO_r9_2_decode_xer,
	intraFreqSI_AcquisitionForHO_r9_2_encode_xer,
	intraFreqSI_AcquisitionForHO_r9_2_decode_uper,
	intraFreqSI_AcquisitionForHO_r9_2_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2,
	sizeof(asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2)
		/sizeof(asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2[0]) - 1, /* 1 */
	asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2,	/* Same as above */
	sizeof(asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2)
		/sizeof(asn_DEF_intraFreqSI_AcquisitionForHO_r9_tags_2[0]), /* 2 */
	&asn_PER_type_intraFreqSI_AcquisitionForHO_r9_constr_2,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_intraFreqSI_AcquisitionForHO_r9_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_interFreqSI_AcquisitionForHO_r9_value2enum_4[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_interFreqSI_AcquisitionForHO_r9_enum2value_4[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_interFreqSI_AcquisitionForHO_r9_specs_4 = {
	asn_MAP_interFreqSI_AcquisitionForHO_r9_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_interFreqSI_AcquisitionForHO_r9_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_interFreqSI_AcquisitionForHO_r9_4 = {
	"interFreqSI-AcquisitionForHO-r9",
	"interFreqSI-AcquisitionForHO-r9",
	interFreqSI_AcquisitionForHO_r9_4_free,
	interFreqSI_AcquisitionForHO_r9_4_print,
	interFreqSI_AcquisitionForHO_r9_4_constraint,
	interFreqSI_AcquisitionForHO_r9_4_decode_ber,
	interFreqSI_AcquisitionForHO_r9_4_encode_der,
	interFreqSI_AcquisitionForHO_r9_4_decode_xer,
	interFreqSI_AcquisitionForHO_r9_4_encode_xer,
	interFreqSI_AcquisitionForHO_r9_4_decode_uper,
	interFreqSI_AcquisitionForHO_r9_4_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4,
	sizeof(asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4)
		/sizeof(asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4[0]) - 1, /* 1 */
	asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4,	/* Same as above */
	sizeof(asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4)
		/sizeof(asn_DEF_interFreqSI_AcquisitionForHO_r9_tags_4[0]), /* 2 */
	&asn_PER_type_interFreqSI_AcquisitionForHO_r9_constr_4,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_interFreqSI_AcquisitionForHO_r9_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_utran_SI_AcquisitionForHO_r9_value2enum_6[] = {
	{ 0,	9,	"supported" }
};
static const unsigned int asn_MAP_utran_SI_AcquisitionForHO_r9_enum2value_6[] = {
	0	/* supported(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_utran_SI_AcquisitionForHO_r9_specs_6 = {
	asn_MAP_utran_SI_AcquisitionForHO_r9_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_utran_SI_AcquisitionForHO_r9_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_utran_SI_AcquisitionForHO_r9_6 = {
	"utran-SI-AcquisitionForHO-r9",
	"utran-SI-AcquisitionForHO-r9",
	utran_SI_AcquisitionForHO_r9_6_free,
	utran_SI_AcquisitionForHO_r9_6_print,
	utran_SI_AcquisitionForHO_r9_6_constraint,
	utran_SI_AcquisitionForHO_r9_6_decode_ber,
	utran_SI_AcquisitionForHO_r9_6_encode_der,
	utran_SI_AcquisitionForHO_r9_6_decode_xer,
	utran_SI_AcquisitionForHO_r9_6_encode_xer,
	utran_SI_AcquisitionForHO_r9_6_decode_uper,
	utran_SI_AcquisitionForHO_r9_6_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6,
	sizeof(asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6)
		/sizeof(asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6[0]) - 1, /* 1 */
	asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6,	/* Same as above */
	sizeof(asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6)
		/sizeof(asn_DEF_utran_SI_AcquisitionForHO_r9_tags_6[0]), /* 2 */
	&asn_PER_type_utran_SI_AcquisitionForHO_r9_constr_6,
	0, 0,	/* Defined elsewhere */
	&asn_SPC_utran_SI_AcquisitionForHO_r9_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NeighCellSI_AcquisitionParameters_r9_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NeighCellSI_AcquisitionParameters_r9, intraFreqSI_AcquisitionForHO_r9),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_intraFreqSI_AcquisitionForHO_r9_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"intraFreqSI-AcquisitionForHO-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct NeighCellSI_AcquisitionParameters_r9, interFreqSI_AcquisitionForHO_r9),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_interFreqSI_AcquisitionForHO_r9_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"interFreqSI-AcquisitionForHO-r9"
		},
	{ ATF_POINTER, 1, offsetof(struct NeighCellSI_AcquisitionParameters_r9, utran_SI_AcquisitionForHO_r9),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_utran_SI_AcquisitionForHO_r9_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-SI-AcquisitionForHO-r9"
		},
};
static const int asn_MAP_NeighCellSI_AcquisitionParameters_r9_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NeighCellSI_AcquisitionParameters_r9_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqSI-AcquisitionForHO-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* interFreqSI-AcquisitionForHO-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* utran-SI-AcquisitionForHO-r9 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NeighCellSI_AcquisitionParameters_r9_specs_1 = {
	sizeof(struct NeighCellSI_AcquisitionParameters_r9),
	offsetof(struct NeighCellSI_AcquisitionParameters_r9, _asn_ctx),
	asn_MAP_NeighCellSI_AcquisitionParameters_r9_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NeighCellSI_AcquisitionParameters_r9_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_NeighCellSI_AcquisitionParameters_r9 = {
	"NeighCellSI-AcquisitionParameters-r9",
	"NeighCellSI-AcquisitionParameters-r9",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1,
	sizeof(asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1)
		/sizeof(asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1[0]), /* 1 */
	asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1,	/* Same as above */
	sizeof(asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1)
		/sizeof(asn_DEF_NeighCellSI_AcquisitionParameters_r9_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_NeighCellSI_AcquisitionParameters_r9_1,
	3,	/* Elements count */
	&asn_SPC_NeighCellSI_AcquisitionParameters_r9_specs_1	/* Additional specs */
};

