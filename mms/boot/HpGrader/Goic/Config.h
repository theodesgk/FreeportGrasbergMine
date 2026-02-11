/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.5 $
 *   $Author: dcitron $
 *     $Date: 2015/05/21 07:46:40 $
 *    $State: Exp $
 *   Purpose: Load GpsHpShovel configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
        echo HpGrader can only be an option
#else
#	define DEV _DEVICE_=DEVICE
	CP(HpCommon/Goic/ConvMgr.cfg DEV,CFGDEVICE/ConvMgr.cfg)
	CP(HpGrader/Goic/hp.cfg DEV OPT,CFGDEVICE/hp.cfg)
	CP(HpGrader/Goic/hp.ht.cfg DEV,CFGDEVICE/hp.ht.cfg)
	CP(HpGrader/Goic/GraderComMgr.cfg DEV,CFGDEVICE/ComMgr.cfg)
        CP(HpCommon/Goic/net.cfg, CFGDEVICE/net.cfg)

#	include <math/Config.h>

#endif
