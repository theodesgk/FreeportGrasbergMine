/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2008/07/09 19:04:59 $
 *    $State: Exp $
 *   Purpose: Load the GpsTruck module only if no other
 *	      GpsTruck module has been loaded.
 * * * * * * * * * * * * * * * * * * *
 */
#if #module(GpsDev) && !#module(GpsApp)
#	include <Cfg/Device.h>
#	assert module(GpsApp)
#	if #option(Proximity)
		CP(Proximity/Hub/GpsTruck.cfg,CFGDEVICE/GpsTruck.cfg)
#	else
		CP(Gps/GpsTruck.cfg,CFGDEVICE/GpsTruck.cfg)
#	endif
	CP(Gps/BeaconDB.cfg arrive,CFGDEVICE/BeaconDB.cfg)
#endif
