/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2002/10/23 22:45:05 $
 *    $State: Exp $
 *   Purpose: Load GPS ground station configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>

/*
 * GpsGs.cfg contains the ground station antenna location and
 * quite obviously is site specific.  There are currently two
 * different ways that it gets configured:
 *
 * 1) /dsp/client/psw/GpsGs/XFACE/GpsGs.cfg
 *
 *    Most of the Moto ground stations are currently configured
 *    this way.  Such configurations look something like this:
 *
 *    #include_next <GpsGs/Moto/GpsGs.cfg>
 *    gps     initLat=32:39:34.253N,initLong=108:21:10.412W,initElev=182964,initElevMSL=0
 *
 * 2) /dsp/client/psw/GpsGs/antenna.h
 *
 *    #define BASELAT  32:39:34.253N
 *    #define BASELON  108:21:10.412W
 *    #define BASEELEV 182964
 *
 * The latter is somewhat more flexible since it allows you to reload
 * the ground station with different antennas.  In addition, it allows
 * you to load any ground station using any antenna location without
 * having to setup a special GpsGs.cfg just for that ground station type.
 * For example, to test out a Moto ground station using the lab antenna,
 * you can do the following:
 *
 *    net/Mpr/All slip loop OPTIONS=GpsGs/Moto ANTENNA=lab
 *
 * These antenna files should be located in either the client specific
 * directory or standard GpsGs directories.
 *
 * There are a couple of wrinkles to this new configuration.
 *
 * First, the GpsGG24 and GpsMoto currently require different formats for
 * the base station location.  GpsGG24 wants a funky NMEA format in decimal
 * degrees something like `3208.141840,N'.  GpsMoto uses a more standard
 * dd:mm:ss.msecs format.  The GpsGG24 object is now being fixed to accept
 * the standard format.
 *
 * Second, all the current GpsMoto configurations use the old configuration
 * mechanism.  For compatibility, I check for <GpsGs/antenna.h>.  If it
 * exists, I'll use it; if not, I'll do it the old way.
 */
#ifndef ANTENNA
#	ifdef DEVICE
#		define ANTENNA DEVICE
#	else
#		define ANTENNA antenna
#	endif
#endif
#ifdef ANTENNA
#define CAT3(A,B,C)	A/**/B/**/C
#define ANTENNA_FILE	CAT3(<GpsGs/,ANTENNA,.h>)
#include ANTENNA_FILE

#if defined(BASELAT)
#	define GPSLAT(D,M,S,MS,NS) D:M:S.MS NS
#	define GPSLON(D,M,S,MS,EW) D:M:S.MS EW
#	define GPSELEV(M,CM) M.CM
	echo Configuring base station coordinates at:
	echo \'	BASELAT,BASELON,BASEELEV\'
	CP(GpsGs/GpsGs.cfg GPSNAME ANTENNA_FILE,CFGDEVICE/GpsGs.cfg)
#elif defined(ISOPTION)
	CP(OPT_NAME/GpsGs.cfg GPSNAME,CFGDEVICE/GpsGs.cfg)
#else
	CP(APPNAME/GpsGs.cfg GPSNAME,CFGDEVICE/GpsGs.cfg)
#endif
#ifdef GPSGROUND
#	if #module(Rp)
#		define SENDTO Rp.-1
#	elif #module(Prism)
#		define SENDTO wan0.-1
#	else
#		define SENDTO none
#	endif
	echo Differential corrections will be sent to SENDTO...
        CP(GpsGs/GpsGround.cfg GPSNAME SENDTO,CFGDEVICE/GpsGround.cfg)
#endif
#ifndef ISOPTION
	CP(APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	include <Cfg/Mainini.h>
#	include <Cfg/Modem.h>
#endif
#endif
