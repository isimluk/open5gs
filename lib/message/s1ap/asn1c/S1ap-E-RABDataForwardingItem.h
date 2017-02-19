/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "../../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_E_RABDataForwardingItem_H_
#define	_S1ap_E_RABDataForwardingItem_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S1ap-E-RAB-ID.h"
#include "S1ap-TransportLayerAddress.h"
#include "S1ap-GTP-TEID.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* S1ap-E-RABDataForwardingItem */
typedef struct S1ap_E_RABDataForwardingItem {
	S1ap_E_RAB_ID_t	 e_RAB_ID;
	S1ap_TransportLayerAddress_t	*dL_transportLayerAddress	/* OPTIONAL */;
	S1ap_GTP_TEID_t	*dL_gTP_TEID	/* OPTIONAL */;
	S1ap_TransportLayerAddress_t	*uL_S1ap_TransportLayerAddress	/* OPTIONAL */;
	S1ap_GTP_TEID_t	*uL_S1ap_GTP_TEID	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_E_RABDataForwardingItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABDataForwardingItem;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _S1ap_E_RABDataForwardingItem_H_ */
#include "asn_internal.h"
