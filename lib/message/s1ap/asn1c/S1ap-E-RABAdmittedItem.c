/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#include "S1ap-E-RABAdmittedItem.h"

static asn_TYPE_member_t asn_MBR_S1ap_E_RABAdmittedItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABAdmittedItem, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_E_RAB_ID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABAdmittedItem, transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transportLayerAddress"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_E_RABAdmittedItem, gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"gTP-TEID"
		},
	{ ATF_POINTER, 5, offsetof(struct S1ap_E_RABAdmittedItem, dL_transportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-transportLayerAddress"
		},
	{ ATF_POINTER, 4, offsetof(struct S1ap_E_RABAdmittedItem, dL_gTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dL-gTP-TEID"
		},
	{ ATF_POINTER, 3, offsetof(struct S1ap_E_RABAdmittedItem, uL_S1ap_TransportLayerAddress),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_TransportLayerAddress,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-S1ap-TransportLayerAddress"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_E_RABAdmittedItem, uL_S1ap_GTP_TEID),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_GTP_TEID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"uL-S1ap-GTP-TEID"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_E_RABAdmittedItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_5954P2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"iE-Extensions"
		},
};
static const int asn_MAP_S1ap_E_RABAdmittedItem_oms_1[] = { 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_S1ap_E_RABAdmittedItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_E_RABAdmittedItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dL-transportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dL-gTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* uL-S1ap-TransportLayerAddress */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uL-S1ap-GTP-TEID */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_S1ap_E_RABAdmittedItem_specs_1 = {
	sizeof(struct S1ap_E_RABAdmittedItem),
	offsetof(struct S1ap_E_RABAdmittedItem, _asn_ctx),
	asn_MAP_S1ap_E_RABAdmittedItem_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_S1ap_E_RABAdmittedItem_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	7,	/* Start extensions */
	9	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABAdmittedItem = {
	"S1ap-E-RABAdmittedItem",
	"S1ap-E-RABAdmittedItem",
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
	asn_DEF_S1ap_E_RABAdmittedItem_tags_1,
	sizeof(asn_DEF_S1ap_E_RABAdmittedItem_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABAdmittedItem_tags_1[0]), /* 1 */
	asn_DEF_S1ap_E_RABAdmittedItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_E_RABAdmittedItem_tags_1)
		/sizeof(asn_DEF_S1ap_E_RABAdmittedItem_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_S1ap_E_RABAdmittedItem_1,
	8,	/* Elements count */
	&asn_SPC_S1ap_E_RABAdmittedItem_specs_1	/* Additional specs */
};

