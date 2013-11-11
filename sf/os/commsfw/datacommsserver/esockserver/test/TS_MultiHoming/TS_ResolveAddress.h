// Copyright (c) 2002-2009 Nokia Corporation and/or its subsidiary(-ies).
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
// CTS_ResolveAddress.h 
// This is the header file for MultiHoming ResolveAddress step    
// 
//

/**
 @file
*/
 
#if !defined (__TS_RESOLVEADDRESS_H__)
#define __TS_RESOLVEADDRESS_H__

#include "TS_MultiHomingStep.h"
#include "TS_MultiHomingSuite.h"

/******************************************************
 * Resolves an ip address to hostname
 */
class CTS_ResolveAddress : public CTS_MultiHomingStep
	{
	public:
		CTS_ResolveAddress();
		virtual ~CTS_ResolveAddress();	// final
		virtual enum TVerdict doTestStepL();

	private:

		enum TVerdict doTestStepPreambleL();
	};


#endif 
		// __TS_RESOLVEADDRESS_H__

