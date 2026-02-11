/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2006/04/28 15:28:33 $
 *    $State: Exp $
 *   Purpose: 

 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
CP(GpsTruck,APPDEVICE/GpsTruck)
CP(GpsRover,APPDEVICE/GpsRover)
#if !#arch(a29k)
	CP(GpsStat,APPDEVICE/GpsStat)
#endif
