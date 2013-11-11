// Copyright (c) 2009 Nokia Corporation and/or its subsidiary(-ies).
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
//
// mectest003step.h
//

/**
@file
*/


#ifndef MECTEST003STEP_H
#define MECTEST003STEP_H

#include "mecunitteststepbase.h"


_LIT(KMecTest003Step, "MecTest003");


class CMecTest003Step : public CMecUnitTestStepBase
	{
public:
	virtual ~CMecTest003Step();

public:
    explicit CMecTest003Step()
        : CMecUnitTestStepBase(KMecTest003Step)
        {
        }

    virtual TVerdict RunTestStepL();
    };
  
#endif
// MECTEST003STEP_H


