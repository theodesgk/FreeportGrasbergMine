/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2001
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Load the GpsRail coniguration
 * * * * * * * * * * * * * * * * * * *
 */
#if #module(GpsDev) && !#module(GpsApp)
#	include <Cfg/Device.h>
#	assert module(GpsApp)
	CP(Gps/GpsRail.cfg,CFGDEVICE/GpsRail.cfg)
#endif
