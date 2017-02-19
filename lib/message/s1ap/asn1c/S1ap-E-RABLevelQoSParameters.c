/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#include "S1ap-E-RABLevelQoSParameters.h"

static asn_TYPE_member_t asn_MBR_S1ap_E_RABLevelQoSParameters_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABLevelQoSParameters, qCI),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_QCI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"qCI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABLevelQoSParameters, allocationRetentionPriority),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_AllocationAndRetentionPriority,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"allocationRetentionPriority"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_E_RABLevelQoSParameters, gbrQosInformation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GBR_QosInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gbrQosInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_E_RABLevelQoSParameters, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_5954P36,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_S1ap_E_RABLevelQoSParameters_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_E_RABLevelQoSParameters_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* qCI */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* allocationRetentionPriority */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gbrQosInformation */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_E_RABLevelQoSParameters_specs_1 = {
	sizeof(struct S1ap_E_RABLevelQoSParameters),
	offsetof(struct S1ap_E_RABLevelQoSParameters, _asn_ctx),
	asn_MAP_S1ap_E_RABLevelQoSParameters_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1ap_E_RABLevelQoSParameters_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* Start extensions */
	5	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABLevelQoSParameters = {
	"S1ap-E-RABLevelQoSParameters",
	"S1ap-E-RABLevelQoSParameters",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1,
	sizeof(asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1[0]), /* 1 */
	asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABLevelQoSParameters_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_E_RABLevelQoSParameters_1,
	4,	/* Elements count */
	&asn_SPC_S1ap_E_RABLevelQoSParameters_specs_1	/* Additional specs */
};

