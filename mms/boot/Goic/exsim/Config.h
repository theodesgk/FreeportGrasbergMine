/*
 * * * * * * * * * * * * * * * * * * *
 *	DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *				 All Rights Reserved
 *	$RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *	 $Author: olson $
 *	   $Date: 2002/05/17 18:56:47 $
 *	  $State: Exp $
 *	 Purpose: Load configuration files for Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
echo Loading config files...
/*
 * Configure the recorder as the default `Main.cfg', and vehicle-control
 * as an alternate Main_VC interface.
 */
#ifdef UP
	cp net/Goic/Main.cfg\ _CLASS_=CLASS\ _UP_=UP CFGDEVICE/Main.cfg
#else
	cp net/Goic/Main.cfg\ _CLASS_=CLASS CFGDEVICE/Main.cfg
#endif
cp net/Goic/CLASS/LANGUAGE/WinMgr.cfg	CFGDEVICE/WinMgr.cfg
cp net/Goic/CLASS/LANGUAGE/w0.cfg		CFGDEVICE/w0.cfg
cp net/Goic/CLASS/OMS.cfg				CFGDEVICE/OMS.cfg
cp net/Goic/CLASS/ExSim.cfg				CFGDEVICE/ExSim.cfg
#include <Cfg/Mainini.h>
