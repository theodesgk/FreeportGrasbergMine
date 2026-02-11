/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2014/05/30 05:17:30 $
 *    $State: Exp $
 *   Purpose: Load script for Ecs driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Ecs

#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration MODEL...

#ifndef MODEL
#	define MODEL 12072
#endif

#ifndef SPEED
#  define SPEED 19200
#endif
echo before if ISOPTION
echo model is MODEL
# include <Cfg/Loop.h>
#ifdef MODEL
	echo MODEL SPEED
	CP(MineCare/APPNAME/Main.cfg _MODEL_=MODEL _SPEED_=SPEED,CFGDEVICE/Main.cfg)
#endif
#   include <Cfg/Mainini.h>
#if !#arch(pe)
        CP(MineCare/EqmtInfo.cfg,CFGDEVICE/EqmtInfo.cfg)
#endif

