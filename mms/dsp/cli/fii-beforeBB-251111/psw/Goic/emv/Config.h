/*
 * * * * * * * * * * * * * * * * * * *
 *	DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *				 All Rights Reserved
 *	$RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *	 $Author: olson $
 *	   $Date: 2002/05/17 18:56:46 $
 *	  $State: Exp $
 *	 Purpose: Load configuration files for Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
#ifdef OPTIONS
#	define OPT	_OPTIONS_=OPTIONS
#else
#	define OPT
#endif
echo Loading config files...
/*
 * Configure the recorder as the default `Main.cfg', and vehicle-control
 * as an alternate Main_VC interface.
 */
#ifdef UP
	cp net/Goic/Main.cfg\ _CLASS_=CLASS\ _UP_=UP\ _MAIN_=Main CFGDEVICE/Main.cfg
#else
	cp net/Goic/Main.cfg\ _CLASS_=CLASS\ _MAIN_=Main  CFGDEVICE/Main.cfg
#endif
CP(Goic/CLASS/Macro.cfg OPT,CFGDEVICE/Macro.cfg)
CP(Goic/CLASS/Can.cfg OPT,CFGDEVICE/Can.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/OMS.cfg OPT,CFGDEVICE/OMS.cfg)
cp net/icons/640x480/truck/ready.icon		CFGDEVICE/ready.icon
#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
