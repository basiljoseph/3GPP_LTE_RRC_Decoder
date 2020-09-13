/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "SupportedBandEUTRA.h"

static int
memb_bandEUTRA_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 64)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_bandEUTRA_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  64 }	/* (1..64) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SupportedBandEUTRA_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandEUTRA, bandEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_bandEUTRA_constraint_1,
		&asn_PER_memb_bandEUTRA_constr_2,
		0,
		"bandEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SupportedBandEUTRA, halfDuplex),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"halfDuplex"
		},
};
static const ber_tlv_tag_t asn_DEF_SupportedBandEUTRA_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SupportedBandEUTRA_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* halfDuplex */
};
static asn_SEQUENCE_specifics_t asn_SPC_SupportedBandEUTRA_specs_1 = {
	sizeof(struct SupportedBandEUTRA),
	offsetof(struct SupportedBandEUTRA, _asn_ctx),
	asn_MAP_SupportedBandEUTRA_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SupportedBandEUTRA = {
	"SupportedBandEUTRA",
	"SupportedBandEUTRA",
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
	asn_DEF_SupportedBandEUTRA_tags_1,
	sizeof(asn_DEF_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_SupportedBandEUTRA_tags_1[0]), /* 1 */
	asn_DEF_SupportedBandEUTRA_tags_1,	/* Same as above */
	sizeof(asn_DEF_SupportedBandEUTRA_tags_1)
		/sizeof(asn_DEF_SupportedBandEUTRA_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SupportedBandEUTRA_1,
	2,	/* Elements count */
	&asn_SPC_SupportedBandEUTRA_specs_1	/* Additional specs */
};

