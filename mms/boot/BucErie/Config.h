/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2012/07/08 07:50:23 $
 *    $State: Exp $
 *   Purpose: Load script for generic GSP interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
echo Loading object configuration...
#ifdef ISOPTION
        CP(OPT_NAME/OPT_NAME.cfg,CFGDEVICE/OPT_NAME.cfg)
#elif !#gsp(Standalone)
#	if #up(Rp)
	        CP(APPNAME/APPNAME.cfg\ $PORT$=cpu,CFGDEVICE/APPNAME.cfg)
#	else
        	CP(APPNAME/APPNAME.cfg,CFGDEVICE/APPNAME.cfg)
#	endif
#	include <Cfg/Loop.h>
#	ifdef UP
	CP(APPNAME/Main.cfg $UP$=UP,CFGDEVICE/Main.cfg)
#	else
	CP(APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#	endif
#	if !#appname(Gsp)
	CP(APPNAME/Macro.cfg,CFGDEVICE/Macro.cfg)
#	endif
#	include <Cfg/Mainini.h>
	echo Initializing e2rom...
	fill e2rom
	/*mkfs e2rom*/
#else
/*
 * Load `Main.cfg' files for each of 4 configuration types.
 */
	echo Loading Main configuration files...
	CP(Gsp/MainSlip.cfg Main1 Slip,CFGDEVICE/Main1.cfg)
	CP(Gsp/MainTty.cfg Main2 Slip,CFGDEVICE/Main2.cfg)
	CP(Gsp/MainSlip.cfg Main3 Tty,CFGDEVICE/Main3.cfg)
	CP(Gsp/MainTty.cfg Main4 Tty,CFGDEVICE/Main4.cfg)
/*
 * Configure port-1 by default as 9600 bps, echo enabled, TTY port.
 */
#	ifndef PORT1_SPEED
#		define PORT1_SPEED 9600
#	endif
#	ifndef PORT1_FLAGS
#		define PORT1_FLAGS 0x21
#	endif
	echo Configuring Tty port-1 speed:PORT1_SPEED
	CP(Gsp/Port1.cfg PORT1_SPEED none PORT1_FLAGS,CFGDEVICE/Port1.cfg)
/*
 * Configure port-2 by default as 9600 bps SLIP port
 */
#	ifndef PORT2_SPEED
#		define PORT2_SPEED 9600
#	endif
#	ifndef PORT2_HDWE
#		define PORT2_HDWE rs232
#	endif
#	ifndef PORT2_FLAGS
#		define PORT2_FLAGS 0
#	endif
	echo Configuring Slip port-2 PORT2_SPEED PORT2_HDWE
	CP(Gsp/Gsp.cfg PORT2_SPEED PORT2_HDWE PORT2_FLAGS,CFGDEVICE/Port2.cfg)
/*
 * Load Macro configuration and Gsp help files.
 */
	CP(Gsp/Macro.cfg,CFGDEVICE/Macro.cfg)
	CP(Gsp/Gsp.hlp,CFGDEVICE/Gsp.hlp)
/*
 * Load  `Main.ini' boot command files for running each of the
 * configurations.
 */
	CP(Gsp/Main.ini Main1,CFGDEVICE/Main1.ini)
	CP(Gsp/Main.ini Main2,CFGDEVICE/Main2.ini)
	CP(Gsp/Main.ini Main3,CFGDEVICE/Main3.ini)
	CP(Gsp/Main.ini Main4,CFGDEVICE/Main4.ini)
/*
 * Setup default configuration as port-1 (tty) port-2 (slip).
 */
	cp CFGDEVICE/Main3.ini	CFGDEVICE/Main.ini
#endif
