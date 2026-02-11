/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Load configuration files for IR beacon.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
echo Loading object configuration...
#if #arg2(right)
#	define MINOR 1
#elif #arg2(left)
#	define MINOR 2
#else
#	define MINOR 0
#endif
CP(Ir/Ir.cfg ARG1 MINOR.0,CFGDEVICE/Ir.cfg)
#ifndef ISOPTION
#	include <Cfg/Loop.h>
	CP(Ir/Main.cfg ARG2,CFGDEVICE/Main.cfg)
#	include <Cfg/Mainini.h>
#endif
