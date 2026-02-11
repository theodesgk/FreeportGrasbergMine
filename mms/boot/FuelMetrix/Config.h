/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/08/31 17:12:26 $
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
        echo s
#elif #appname(Gsp)
#	include <Cfg/OMS.h>
	CP(Gsp/Main.cfg _OPTIONS_=OPTIONS INCLARGS,CFGDEVICE/Main.cfg)
	CP(Gsp/Macro.cfg _OPTIONS_=OPTIONS,CFGDEVICE/Macro.cfg)
#	include <Cfg/Options.h>
#	include <Cfg/Mainini.h>
#else
#	define OMSCLASS APPNAME
#	include <Cfg/OMS.h>



#	ifdef UP
		CP(APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	else
		CP(APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#	endif
	CP(APPNAME/Macro.cfg,CFGDEVICE/Macro.cfg)
#	include <Cfg/Mainini.h>
#endif
