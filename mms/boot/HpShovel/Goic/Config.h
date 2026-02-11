/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.9 $
 *   $Author: zambetis $
 *     $Date: 2009/07/13 13:58:09 $
 *    $State: Exp $
 *   Purpose: Load HpShovel configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpShovel can only be an option
#else
#	define DEV _DEVICE_=DEVICE
#       ifdef OPTIONS
#               define OPT      _OPTIONS_=OPTIONS
#       else
#               define OPT
#       endif
#	ifdef AUTO
#		define AUTO_CONFIG <HpShovel/Goic/AUTO/Config.h>
#		include AUTO_CONFIG
#	else
		CP(HpCommon/Goic/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
		CP(HpShovel/Goic/ShovelComMgr.cfg DEV OPT,CFGDEVICE/ComMgr.cfg)
#	endif
	CP(HpShovel/Goic/hp.cfg DEV OPT,CFGDEVICE/hp.cfg)
	CP(HpShovel/Goic/hp.ht.cfg DEV,CFGDEVICE/hp.ht.cfg)
	CP(HpCommon/Goic/net.cfg, CFGDEVICE/net.cfg)

#	include <math/Config.h>

#endif
