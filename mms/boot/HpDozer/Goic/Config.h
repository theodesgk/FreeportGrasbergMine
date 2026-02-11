/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.7 $
 *   $Author: zambetis $
 *     $Date: 2008/09/11 00:43:07 $
 *    $State: Exp $
 *   Purpose: Load GpsHpShovel configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
        echo HpDozer can only be an option
#else
#	define DEV _DEVICE_=DEVICE
#	ifdef OPTIONS
#		define OPT      _OPTIONS_=OPTIONS
#	else
#		define OPT
#	endif
#	ifdef AUTO
		CP(HpDozer/Goic/AUTO/autoscript.dat,CFGDEVICE/autoscript.dat)
		CP(HpDozer/Goic/AUTO/projectDEMO,CFGDEVICE/projectDEMO)
		CP(HpDozer/Goic/AUTO/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpDozer/Goic/AUTO/DozerComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
                CP(HpShovel/Goic/AUTO/Status.cfg DEV,CFGDEVICE/Status.cfg)
#	else
		CP(HpCommon/Goic/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpDozer/Goic/DozerComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
#	endif
	CP(HpDozer/Goic/hp.cfg DEV OPT,CFGDEVICE/hp.cfg)
	CP(HpDozer/Goic/hp.ht.cfg DEV,CFGDEVICE/hp.ht.cfg)
        CP(HpCommon/Goic/net.cfg, CFGDEVICE/net.cfg)

#	include <math/Config.h>

#endif
