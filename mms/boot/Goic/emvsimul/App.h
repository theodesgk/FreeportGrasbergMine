%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:46 $
 *    $State: Exp $
 *   Purpose: Loads modules for LH controllers simulator
 * * * * * * * * * * * * * * * * * * *
 */
#include_next <App.h>
cp net/OMS				APPDEVICE/OMS
cp net/Awt				APPDEVICE/Awt
cp net/Java				APPDEVICE/Java
cp net/Collection			APPDEVICE/Collection
cp net/mms.sysMgr			APPDEVICE/mms.sysMgr
cp net/mms.utilBase			APPDEVICE/mms.utilBase
cp net/mms.utilMath			APPDEVICE/mms.utilMath
cp net/mms.ats.courseBase               APPDEVICE/mms.ats.courseBase
cp net/mms.ats.courseDatabase	        APPDEVICE/mms.ats.courseDatabase
cp net/mms.ats.courseSender             APPDEVICE/mms.ats.courseSender
cp net/mms.ats.courseGenerator          APPDEVICE/mms.ats.courseGenerator
cp net/mms.ats.messageInfoProvider      APPDEVICE/mms.ats.messageInfoProvider
cp net/mms.ats.simulEMV                 APPDEVICE/mms.ats.simulEMV
