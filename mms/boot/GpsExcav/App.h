/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2014/03/07 07:36:38 $
 *    $State: Exp $
 *   Purpose: Load the GpsTruck application module.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
CP(GpsTruck,APPDEVICE/GpsTruck)
#if #option(Proximity)
        CP(GpsRover,APPDEVICE/GpsRover)
#endif
