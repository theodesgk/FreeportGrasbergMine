/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.8 $
 *   $Author: latum $
 *     $Date: 2007/10/18 22:33:44 $
 *    $State: Exp $
 *   Purpose: Load HpDrill configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpDrill can only be an option
#else
#	define DEV _DEVICE_=DEVICE
#       ifdef OPTIONS
#               define OPT      _OPTIONS_=OPTIONS
#       else
#               define OPT
#       endif
#	ifdef AUTO
		CP(HpDrill/Goic/AUTO/autoscript.dat,CFGDEVICE/autoscript.dat)
		CP(HpDrill/Goic/AUTO/patternPATTERN,CFGDEVICE/patternPATTERN)
		CP(HpDrill/Goic/AUTO/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpDrill/Goic/AUTO/DrillComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
#	else
		CP(HpCommon/Goic/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpDrill/Goic/DrillComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
#	endif

	CP(HpDrill/Goic/hp.ht.cfg DEV,CFGDEVICE/hp.ht.cfg)
	CP(HpDrill/Goic/hp.cfg DEV OPT,CFGDEVICE/hp.cfg)
	CP(HpCommon/Goic/net.cfg, CFGDEVICE/net.cfg)

#	include <math/Config.h>

#endif
