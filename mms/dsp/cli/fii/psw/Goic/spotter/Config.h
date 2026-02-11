/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2013/10/03 07:03:29 $
 *    $State: Exp $
 *   Purpose: Load configuration files for Graphical operator interface
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
#ifdef DEVICE
#	define DEV	_DEVICE_=DEVICE
#else
#	define DEV
#endif
echo Loading config files...
#ifdef UP
	CP(Goic/Main.cfg _CLASS_=CLASS _UP_=UP DEV OPT,CFGDEVICE/Main.cfg)
#else
	CP(Goic/Main.cfg _CLASS_=CLASS DEV OPT,CFGDEVICE/Main.cfg)
#endif

CP(Goic/English/MsgBox.cfg OPT,CFGDEVICE/MsgBox.cfg)
CP(Goic/CLASS/LANGUAGE/WinMgr.cfg OPT,CFGDEVICE/WinMgr.cfg)
CP(Goic/CLASS/LANGUAGE/Macro.cfg OPT,CFGDEVICE/Macro.cfg)
#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
