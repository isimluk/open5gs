/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../../support/S1AP-PDU.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted`
 */

#ifndef	_S1ap_LastVisitedGERANCellInformation_H_
#define	_S1ap_LastVisitedGERANCellInformation_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NULL.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_LastVisitedGERANCellInformation_PR {
	S1ap_LastVisitedGERANCellInformation_PR_NOTHING,	/* No components present */
	S1ap_LastVisitedGERANCellInformation_PR_undefined,
	/* Extensions may appear below */
	
} S1ap_LastVisitedGERANCellInformation_PR;

/* S1ap-LastVisitedGERANCellInformation */
typedef struct S1ap_LastVisitedGERANCellInformation {
	S1ap_LastVisitedGERANCellInformation_PR present;
	union S1ap_LastVisitedGERANCellInformation_u {
		NULL_t	 undefined;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_LastVisitedGERANCellInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_LastVisitedGERANCellInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_LastVisitedGERANCellInformation_H_ */
#include "asn_internal.h"
