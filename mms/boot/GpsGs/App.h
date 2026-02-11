/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:48 $
 *    $State: Exp $
 *   Purpose: Load script for GPS ground station application modules.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#assert module(rpc)
LD(GpsDev,APPDEVICE/GpsDev)
LD(GpsApp,APPDEVICE/GpsApp)
#ifdef GPSGROUND
        LD(GpsGround,APPDEVICE/GpsGround)
#endif
LD(GPSNAME,APPDEVICE/GPSNAME)
