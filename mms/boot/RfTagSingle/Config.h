/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2008/12/12 23:30:08 $
 *    $State: Exp $
 *   Purpose: Load Amtech RF tag configuration files,
 *            pre-rail (underground) version.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#ifndef ISOPTION
#	ifndef RFTAGID
#		define RFTAGID 1
#	endif
#	ifdef SCALE
	CP(RfTagSingle/Main.cfg RFTAGID _SCALE_=SCALE,CFGDEVICE/Main.cfg)
#	else
	CP(RfTagSingle/Main.cfg RFTAGID,CFGDEVICE/Main.cfg)
#	endif
	CP(RfTagSingle/Macro.cfg RFTAGID,CFGDEVICE/Macro.cfg)
#	include <Cfg/Mainini.h>
#endif
#ifdef RFTAGID
	CP(RfTagSingle/RfTag.cfg RFTAGID,CFGDEVICE/RfTag.cfg)
#else
	CP(RfTagSingle/RfTag.cfg,CFGDEVICE/RfTag.cfg)
#endif
#ifdef SCALE
	CP(RfTagSingle/WeighScale.cfg,CFGDEVICE/WeighScale.cfg)
#endif
