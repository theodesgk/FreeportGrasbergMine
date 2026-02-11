/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.4 $
 *   $Author: latum $
 *     $Date: 2006/04/28 15:28:33 $
 *    $State: Exp $
 *   Purpose: Load script for GPS rover application modules
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#assert module(rpc)
LD(GpsDev,APPDEVICE/GpsDev)
LD(GpsApp,APPDEVICE/GpsApp)
LD(GPSNAME,APPDEVICE/GPSNAME)
