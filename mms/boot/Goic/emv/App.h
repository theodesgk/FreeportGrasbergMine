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
 *   Purpose: Also load NfsSvc module for truck hub.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
echo Loading config files...
/*
 * Configure the recorder as the default `Main.cfg', and vehicle-control
 * as an alternate Main_VC interface.
 */
#include_next <App.h>
cp net/OMS				APPDEVICE/OMS
cp net/ProxyPort			APPDEVICE/ProxyPort
cp net/Awt				APPDEVICE/Awt
cp net/Java				APPDEVICE/Java
cp net/Replicator                       APPDEVICE/Replicator
cp net/Collection                       APPDEVICE/Collection
cp net/mms.sysMgr                       APPDEVICE/mms.sysMgr
cp net/mms.ats.courseBase               APPDEVICE/mms.ats.courseBase
cp net/mms.ats.courseSender             APPDEVICE/mms.ats.courseSender
cp net/mms.ats.courseDatabase           APPDEVICE/mms.ats.courseDatabase
cp net/mms.ats.courseGenerator          APPDEVICE/mms.ats.courseGenerator
cp net/mms.utilMath                     APPDEVICE/mms.utilMath
cp net/mms.utilBase                     APPDEVICE/mms.utilBase
cp net/mms.ats.utilDataProvider         APPDEVICE/mms.ats.utilDataProvider
cp net/mms.ats.interact.manualEmv       APPDEVICE/mms.ats.interact.manualEmv
cp net/mms.ats.emvIntApp                APPDEVICE/mms.ats.emvIntApp
cp net/mms.ats.emvInteract              APPDEVICE/mms.ats.emvInteract
cp net/mms.ats.emergency                APPDEVICE/mms.ats.emergency
cp net/mms.ats.messageManual            APPDEVICE/mms.ats.messageManual
cp net/mms.ats.messageVehicleControl    APPDEVICE/mms.ats.messageVehicleControl
cp net/mms.ats.messageInfoProvider      APPDEVICE/mms.ats.messageInfoProvider
cp net/mms.ats.infoprovider             APPDEVICE/mms.ats.infoprovider
cp net/mms.ats.funcIds                  APPDEVICE/mms.ats.funcIds
cp net/mms.ats.util.LogicalId		APPDEVICE/mms.ats.util.LogicalId
