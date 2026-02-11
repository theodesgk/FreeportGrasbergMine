/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Autonomous truck GpsMonitor configuration.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#ifndef GPS
#	define GPS GpsGG24
#endif
LD(Macro,APPDEVICE/Macro)
LD(GpsDev,APPDEVICE/GpsDev)
LD(GpsApp,APPDEVICE/GpsApp)
LD(GpsTruck,APPDEVICE/GpsTruck)
LD(GpsMonitor,APPDEVICE/GpsMonitor)
LD(GPS,APPDEVICE/GPS)
