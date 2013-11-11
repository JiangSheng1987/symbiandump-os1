// Copyright (c) 2006-2009 Nokia Corporation and/or its subsidiary(-ies).
// All rights reserved.
// This component and the accompanying materials are made available
// under the terms of "Eclipse Public License v1.0"
// which accompanies this distribution, and is available
// at the URL "http://www.eclipse.org/legal/epl-v10.html".
//
// Initial Contributors:
// Nokia Corporation - initial contribution.
//
// Contributors:
//
// Description:
// @file ctlbsprivfwstepverifybadstrings.h
// This contains the header file for an LBS privacy handler test
// 
//

#ifndef __CT_LBS_PRIVFW_STEP_VERIFYBADSTRINGS_H__
#define __CT_LBS_PRIVFW_STEP_VERIFYBADSTRINGS_H__

#include "ctlbsprivfwserver.h"
#include "ctlbsprivfwstepbase.h"
#include "ctlbsprivfwbaserequest.h"
#include "ctlbsprivfwnotifierdataobserver.h"
#include "ctlbsprivfwapidataobserver.h"
#include "ctlbsprivfwapiwrapper.h"

#include "epos_cposgsmprivacyrequestinfo.h"
#include "epos_cposnetworkprivacy.h"

//Literals Used

_LIT(KLbsPrivFwStep_VerifyBadStrings, "KLbsPrivFwStep_VerifyBadStrings");

class CT_LbsPrivFwStepVerifyBadStrings : public CT_LbsPrivFwStepBase
{

public:
	virtual ~CT_LbsPrivFwStepVerifyBadStrings();
	static CT_LbsPrivFwStepVerifyBadStrings* New(CT_LbsPrivFwServer& aParent);

	virtual TVerdict doTestStepPreambleL();
	virtual TVerdict doTestStepPostambleL();

protected:

	void ConstructL();
	virtual TVerdict doTestStepL();
	CT_LbsPrivFwStepVerifyBadStrings(CT_LbsPrivFwServer& aParent);
	void SubmitVerifyLocationRequest(CPosGSMPrivacyRequestInfo* aReqInfo, 
			TPosNetworkPrivacyRequestInfoType aPrivacyInfoType,
			CT_LbsPrivFwApiDataObserver* aPrivObserver, 
			CPrivFwApiWrapper* aNetPrivacy, 
			CPosNetworkPrivacy::TRequestDecision aDecision,
			TResponseType aIntendedDecision,
			TUint aResponseDelay = 0);


};

#endif // __CT_LBS_PRIVFW_STEP_VERIFYBADSTRINGS_H__
