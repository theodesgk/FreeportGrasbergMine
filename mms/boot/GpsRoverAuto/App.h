/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2010/05/12 22:10:14 $
 *    $State: Exp $
 *   Purpose: 

 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
CP(GpsTruck,APPDEVICE/GpsTruck)
CP(GpsRoverAuto,APPDEVICE/GpsRover)
#if !#arch(a29k)
	CP(GpsStat,APPDEVICE/GpsStat)
#endif
