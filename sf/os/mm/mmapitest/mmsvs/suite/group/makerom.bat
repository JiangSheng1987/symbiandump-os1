@rem
@rem Copyright (c) 2005-2009 Nokia Corporation and/or its subsidiary(-ies).
@rem All rights reserved.
@rem This component and the accompanying materials are made available
@rem under the terms of "Eclipse Public License v1.0"
@rem which accompanies this distribution, and is available
@rem at the URL "http://www.eclipse.org/legal/epl-v10.html".
@rem
@rem Initial Contributors:
@rem Nokia Corporation - initial contribution.
@rem
@rem Contributors:
@rem
@rem Description: 
@rem
if "%1" == "" GOTO ERR
buildrom -D_STARTUPMODE2 -D_EABI=ARMV5 -DRVCT -DUSE_STRONG_CRYPTOGRAPHY %1 techview_statapi platsec t_multimedia
GOTO EXIT

:ERR
REM target parameter missing

:EXIT
