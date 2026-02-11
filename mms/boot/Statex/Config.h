/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:53 $
 *    $State: Exp $
 *   Purpose: Load the Statex configuration, including
 *	      the optional DataProvider if OPTIONS=DataProvider
 *	      was included.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef USEDP
#	define USEDP n
#endif
CP(Statex/Statex.cfg _USEDP_=USEDP,CFGDEVICE/Statex.cfg)
#ifndef ISOPTION
	CP(Statex/Macro.cfg,CFGDEVICE/Macro.cfg)
	CP(Statex/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	include <Cfg/Mainini.h>
#endif
