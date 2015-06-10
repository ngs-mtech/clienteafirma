/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "SIGNEDDATA"
 * 	found in "SIGNEDDATA.asn1"
 * 	`asn1c -S/skeletons`
 */

#ifndef	_SignaturePolicyId_H_
#define	_SignaturePolicyId_H_


#include "asn_application.h"

/* Including external dependencies */
#include "SigPolicyId.h"
#include "SigPolicyHash.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SigPolicyQualifierInfo;

/* SignaturePolicyId */
typedef struct SignaturePolicyId {
	SigPolicyId_t	 sigPolicyId;
	SigPolicyHash_t	 sigPolicyHash;
	struct sigPolicyQualifiers {
		A_SEQUENCE_OF(struct SigPolicyQualifierInfo) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sigPolicyQualifiers;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignaturePolicyId_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignaturePolicyId;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SigPolicyQualifierInfo.h"

#endif	/* _SignaturePolicyId_H_ */