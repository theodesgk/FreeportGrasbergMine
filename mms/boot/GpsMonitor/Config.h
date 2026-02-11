/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Autonomous truck GpsMonitor configuration.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef GPS
#	define GPS GpsGG24
#endif
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#include <Main/Config.h>
CP(Gps/Gps.cfg GpsMonitor,CFGDEVICE/Gps.cfg)
#ifdef ANTENNA
  CP(GpsMonitor/GpsMonitor.cfg _ANTENNA_=ANTENNA,CFGDEVICE/GpsMonitor.cfg)
#else
  CP(GpsMonitor/GpsMonitor.cfg,CFGDEVICE/GpsMonitor.cfg)
#endif
CP(Gps/BeaconDB.cfg,CFGDEVICE/BeaconDB.cfg)
CP(Gps/GG24/gg24.monitor,CFGDEVICE/gg24.monitor)
CP(GpsMonitor/Main.ini,CFGDEVICE/Main.ini)
CP(Gps/GG24/gg24.capture,CFGDEVICE/gg24.capture)
#ifndef ISOPTION
	CP(APPNAME/Main.cfg _GPS_=GPS _UP_=UP,CFGDEVICE/Main.cfg)
#       include <Cfg/Mainini.h>
#       include <Cfg/Modem.h>
#endif
