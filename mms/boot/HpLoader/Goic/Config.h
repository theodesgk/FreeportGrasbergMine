/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.6 $
 *   $Author: latum $
 *     $Date: 2007/10/18 22:33:44 $
 *    $State: Exp $
 *   Purpose: Load GpsHpShovel configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpLoader can only be an option
#else
#	define DEV _DEVICE_=DEVICE
#       ifdef OPTIONS
#               define OPT      _OPTIONS_=OPTIONS
#       else
#               define OPT
#       endif
#	ifdef AUTO
		CP(HpLoader/Goic/AUTO/autoscript.dat,CFGDEVICE/autoscript.dat)
		CP(HpLoader/Goic/AUTO/matpolygonsMATL,CFGDEVICE/matpolygonsMATL)
		CP(HpLoader/Goic/AUTO/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpLoader/Goic/AUTO/LoaderComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
#	else
		CP(HpCommon/Goic/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpLoader/Goic/LoaderComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
#	endif
	CP(HpShovel/Goic/hp.cfg DEV OPT,CFGDEVICE/hp.cfg)
	CP(HpShovel/Goic/hp.ht.cfg DEV,CFGDEVICE/hp.ht.cfg)
        CP(HpCommon/Goic/net.cfg, CFGDEVICE/net.cfg)

#	include <math/Config.h>

#endif
