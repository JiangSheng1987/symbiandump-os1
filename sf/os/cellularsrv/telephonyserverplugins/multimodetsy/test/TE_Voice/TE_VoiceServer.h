// Copyright (c) 2005-2009 Nokia Corporation and/or its subsidiary(-ies).
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
// Voice API Test server header file.
// 
//

/**
 @file
*/

#ifndef __TE_VOICESERVER_H__
#define __TE_VOICESERVER_H__

#include <test/testexecuteserverbase.h>


class CVoiceTestServer : public CTestServer
	{
public:
	static CVoiceTestServer* NewL();
	virtual CTestStep* CreateTestStep(const TDesC& aStepName);

	};

#endif // __TE_VOICESERVER_H__
