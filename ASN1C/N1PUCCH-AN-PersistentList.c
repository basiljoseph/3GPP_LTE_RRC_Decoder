/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "N1PUCCH-AN-PersistentList.h"

static int
memb_NativeInteger_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 2047)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_Member_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 11,  11,  0,  2047 }	/* (0..2047) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_N1PUCCH_AN_PersistentList_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (SIZE(1..4)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_N1PUCCH_AN_PersistentList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_NativeInteger_constraint_1,
		&asn_PER_memb_Member_constr_2,
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_N1PUCCH_AN_PersistentList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_N1PUCCH_AN_PersistentList_specs_1 = {
	sizeof(struct N1PUCCH_AN_PersistentList),
	offsetof(struct N1PUCCH_AN_PersistentList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_N1PUCCH_AN_PersistentList = {
	"N1PUCCH-AN-PersistentList",
	"N1PUCCH-AN-PersistentList",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_N1PUCCH_AN_PersistentList_tags_1,
	sizeof(asn_DEF_N1PUCCH_AN_PersistentList_tags_1)
		/sizeof(asn_DEF_N1PUCCH_AN_PersistentList_tags_1[0]), /* 1 */
	asn_DEF_N1PUCCH_AN_PersistentList_tags_1,	/* Same as above */
	sizeof(asn_DEF_N1PUCCH_AN_PersistentList_tags_1)
		/sizeof(asn_DEF_N1PUCCH_AN_PersistentList_tags_1[0]), /* 1 */
	&asn_PER_type_N1PUCCH_AN_PersistentList_constr_1,
	asn_MBR_N1PUCCH_AN_PersistentList_1,
	1,	/* Single element */
	&asn_SPC_N1PUCCH_AN_PersistentList_specs_1	/* Additional specs */
};

