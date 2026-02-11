%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:48 $
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
cp net/mms.ats.messageVehicleControl    APPDEVICE/mms.ats.messageVehicleControl
cp net/mms.ats.adtVC	                APPDEVICE/mms.ats.adtVC
cp net/mms.ats.simulLHController        APPDEVICE/mms.ats.simulLHController
