/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-ac0.asn"
 * 	`asn1c -fcompound-names -gen-PER`
 */

#include "CQI-ReportConfig.h"

static int
memb_nomPDSCH_RS_EPRE_Offset_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -1 && value <= 6)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3, -1,  6 }	/* (-1..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_CQI_ReportConfig_1[] = {
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig, cqi_ReportModeAperiodic),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CQI_ReportModeAperiodic,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportModeAperiodic"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CQI_ReportConfig, nomPDSCH_RS_EPRE_Offset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_nomPDSCH_RS_EPRE_Offset_constraint_1,
		&asn_PER_memb_nomPDSCH_RS_EPRE_Offset_constr_3,
		0,
		"nomPDSCH-RS-EPRE-Offset"
		},
	{ ATF_POINTER, 1, offsetof(struct CQI_ReportConfig, cqi_ReportPeriodic),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_CQI_ReportPeriodic,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cqi-ReportPeriodic"
		},
};
static const int asn_MAP_CQI_ReportConfig_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_CQI_ReportConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CQI_ReportConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cqi-ReportModeAperiodic */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* nomPDSCH-RS-EPRE-Offset */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cqi-ReportPeriodic */
};
static asn_SEQUENCE_specifics_t asn_SPC_CQI_ReportConfig_specs_1 = {
	sizeof(struct CQI_ReportConfig),
	offsetof(struct CQI_ReportConfig, _asn_ctx),
	asn_MAP_CQI_ReportConfig_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_CQI_ReportConfig_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CQI_ReportConfig = {
	"CQI-ReportConfig",
	"CQI-ReportConfig",
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
	asn_DEF_CQI_ReportConfig_tags_1,
	sizeof(asn_DEF_CQI_ReportConfig_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_tags_1[0]), /* 1 */
	asn_DEF_CQI_ReportConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_CQI_ReportConfig_tags_1)
		/sizeof(asn_DEF_CQI_ReportConfig_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CQI_ReportConfig_1,
	3,	/* Elements count */
	&asn_SPC_CQI_ReportConfig_specs_1	/* Additional specs */
};

