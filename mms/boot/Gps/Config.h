/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.5 $
 *   $Author: dcitron $
 *     $Date: 2013/12/04 23:17:15 $
 *    $State: Exp $
 *   Purpose: Load Moto GPS configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef ANTENNA
#	define ANTENNA antenna
#endif
CP(Gps/Gps.cfg GPSNAME _CLASS_=CLASS,CFGDEVICE/Gps.cfg)
#if #arch(pe.net)
	CP(Gps/GpsRTCM.cfg,CFGDEVICE/GpsRTCM.cfg)
#	if defined DELITE
		CP(Gps/ConvMgr.cfg,CFGDEVICE/ConvMgr.cfg)
#	endif
#endif
#assert module(GpsDev)
#ifndef ISOPTION
#	include <Cfg/Loop.h>
        CP(Gps/Macro.cfg,CFGDEVICE/Macro.cfg)
	CP(Gps/Main.cfg,CFGDEVICE/Main.cfg)
#	include <Cfg/Mainini.h>
#endif
