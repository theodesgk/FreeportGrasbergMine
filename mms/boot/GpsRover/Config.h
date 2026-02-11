/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2003/02/26 16:58:40 $
 *    $State: Exp $
 *   Purpose: Load configuration files for the GpsRover
 *            dual-receiver application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#assert module(GpsApp)

#ifdef OPTIONS
#       define OPT      _OPTIONS_=OPTIONS
#else
#       define OPT
#endif

#ifdef SINGLEANTENNA
#	define SINGLE	_SINGLEANTENNA_=SINGLEANTENNA
#else
#	define SINGLE
#endif

CP(GpsRover/GpsRover.cfg OPT SINGLE,CFGDEVICE/GpsRover.cfg)
CP(Gps/BeaconDB.cfg beacon,CFGDEVICE/BeaconDB.cfg)

#ifndef SINGLEANTENNA
#	include <Main/GspPort.h>
	CP(GpsRover/Gps2.cfg GPSNAME _GSPPORT_=GSPPORT,CFGDEVICE/Gps2.cfg)
	CP(Gps/GG24/gg24.rover,CFGDEVICE/gg24.rover2)
#endif
