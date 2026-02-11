/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Load script for Cotag interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration...
#ifdef ISOPTION
        CP(OPT_NAME/OPT_NAME.cfg,CFGDEVICE/OPT_NAME.cfg)
#else
        CP(APPNAME/APPNAME.cfg,CFGDEVICE/APPNAME.cfg)
#	include <Cfg/Loop.h>
#	ifdef UP
		CP(APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	else
		CP(APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#	endif
	CP(APPNAME/Macro.cfg,CFGDEVICE/Macro.cfg)
#	include <Cfg/Mainini.h>
#endif
