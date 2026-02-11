/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2008/08/06 15:46:53 $
 *    $State: Exp $
 *   Purpose: Load script for generic GSP interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
echo Loading object configuration...
#ifdef INCLINOMETER
#	define INCLARGS _INCLINOMETER_=INCLINOMETER
#else
#	define INCLARGS
#endif
#if defined(ISOPTION)
        CP(OPT_NAME/OPT_NAME.cfg,CFGDEVICE/OPT_NAME.cfg)
#elif #appname(Gsp)
#	include <Cfg/OMS.h>
	CP(Gsp/Main.cfg _OPTIONS_=OPTIONS INCLARGS,CFGDEVICE/Main.cfg)
	CP(Gsp/Macro.cfg _OPTIONS_=OPTIONS,CFGDEVICE/Macro.cfg)
#	include <Cfg/Options.h>
#	include <Cfg/Mainini.h>
#else
#	define OMSCLASS APPNAME
#	include <Cfg/OMS.h>
#	if #up(Rp)
	        CP(APPNAME/APPNAME.cfg _PORT_=cpu,CFGDEVICE/APPNAME.cfg)
#	else
        	CP(APPNAME/APPNAME.cfg,CFGDEVICE/APPNAME.cfg)
#	endif
#	ifdef UP
		CP(APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	else
		CP(APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#	endif
	CP(APPNAME/Macro.cfg,CFGDEVICE/Macro.cfg)
#	include <Cfg/Mainini.h>
#endif
