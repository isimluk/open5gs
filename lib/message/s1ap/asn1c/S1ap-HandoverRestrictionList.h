/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_HandoverRestrictionList_H_
#define	_S1ap_HandoverRestrictionList_H_


#include "asn_application.h"

/* Including external dependencies */
#include "S1ap-PLMNidentity.h"
#include "S1ap-ForbiddenInterRATs.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_EPLMNs;
struct S1ap_ForbiddenTAs;
struct S1ap_ForbiddenLAs;
struct ProtocolExtensionContainer;

/* S1ap-HandoverRestrictionList */
typedef struct S1ap_HandoverRestrictionList {
	S1ap_PLMNidentity_t	 servingPLMN;
	struct S1ap_EPLMNs	*equivalentPLMNs	/* OPTIONAL */;
	struct S1ap_ForbiddenTAs	*forbiddenTAs	/* OPTIONAL */;
	struct S1ap_ForbiddenLAs	*forbiddenLAs	/* OPTIONAL */;
	S1ap_ForbiddenInterRATs_t	*forbiddenInterRATs	/* OPTIONAL */;
	struct ProtocolExtensionContainer	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_HandoverRestrictionList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_HandoverRestrictionList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-EPLMNs.h"
#include "S1ap-ForbiddenTAs.h"
#include "S1ap-ForbiddenLAs.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _S1ap_HandoverRestrictionList_H_ */
#include "asn_internal.h"
