/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.7 $
 *   $Author: dcitron $
 *     $Date: 2016/03/08 17:06:52 $
 *    $State: Exp $
 *   Purpose: Load script for MineCare applications
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration...
#ifndef ISOPTION
#	include <Cfg/Loop.h>
#	ifdef UP
		CP(MineCare/APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	else
		CP(MineCare/APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#	endif
#	include <Cfg/Mainini.h>
#endif
#if !#arch(pe)
        CP(MineCare/EqmtInfo.cfg,CFGDEVICE/EqmtInfo.cfg)
#endif
#ifdef LOADCAN2
	LD(Can2 , pfs/boot/Can)
#endif
#if #arch(arm)
	CP(Gps/ConvMgr.cfg, pfs/etc/ConvMgr.cfg)
#endif
