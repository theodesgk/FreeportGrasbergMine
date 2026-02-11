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
echo Loading config files...
#ifdef UP
	cp net/Goic/Main.cfg\ _CLASS_=CLASS\ _UP_=UP CFGDEVICE/Main.cfg
#else
	cp net/Goic/Main.cfg\ _CLASS_=CLASS CFGDEVICE/Main.cfg
#endif
cp net/Goic/CLASS/LANGUAGE/Macro.cfg		CFGDEVICE/Macro.cfg
cp net/Goic/CLASS/OMS.cfg			CFGDEVICE/OMS.cfg
cp net/Goic/CLASS/Can.cfg			CFGDEVICE/Can.cfg
#include <Cfg/Mainini.h>
