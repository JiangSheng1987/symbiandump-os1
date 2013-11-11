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
// This file was generated automatically from the template commandheader.tmpl
// on Wed, 25 Jul 2007 17:00:41 (time stamp)
// 
//

/**
 @file
 @publishedPartner
 @released
*/

#ifndef WRITELOCALNAMECOMMAND_H
#define WRITELOCALNAMECOMMAND_H

#include <bluetooth/hci/command.h>
#include <bluetooth/hci/hcitypes.h> // in case the generated class uses Bluetooth types

/**
This class represents the WriteLocalName HCI Command
*/

class CWriteLocalNameCommand : public CHCICommandBase
	{
public:
	// Construction
	IMPORT_C static CWriteLocalNameCommand* NewL(const TDesC8& aLocalName);
	IMPORT_C static CWriteLocalNameCommand* NewL();
	// Destructor
	~CWriteLocalNameCommand();

	

	// Assign new values to the parameters of this command
	IMPORT_C void Reset(const TDesC8& aLocalName);

	// Accessor methods for the parameters of the command
	IMPORT_C TPtrC8 LocalName() const;
	
	// Extension function
	virtual TInt Extension_(TUint aExtensionId, TAny*& aInterface, TAny* aData);

private:
	CWriteLocalNameCommand(const TDesC8& aLocalName);
	CWriteLocalNameCommand();
	
	// From CHCICommandBase - knows how to format the parameters of this specific command
	// into the HCTL frame
	virtual void Format(CHctlCommandFrame& aCommandFrame) const;
  
private:
	TBuf8<248> iLocalName;
	
	};

#endif // WRITELOCALNAMECOMMAND_H
