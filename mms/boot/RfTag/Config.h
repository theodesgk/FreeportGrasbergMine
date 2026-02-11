/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: olson $
 *     $Date: 2003/06/27 22:21:40 $
 *    $State: Exp $
 *   Purpose: Load Amtech RF tag configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef ISOPTION
#	ifdef UP
#		define UPARG _UP_=UP
#	else
#		define UPARG
#	endif
#	ifdef SCALE
#		define SCALEARG _SCALE_=SCALE
#	else
#		define SCALEARG
#	endif
#	ifdef OPTIONS
#		define OPTIONSARG _OPTIONS_=OPTIONS
#	else
#		define OPTIONS_ARG
#	endif
	CP(RfTag/Main.cfg UPARG _ID_=ID SCALEARG OPTIONSARG,CFGDEVICE/Main.cfg)
	CP(RfTag/Macro.cfg ID,CFGDEVICE/Macro.cfg)
#	include <Cfg/Options.h>
#	include <Cfg/Mainini.h>
#endif
#ifdef MAXTAGS
	  CP(RfTag/RfTag.cfg ID _MAXTAGS_=MAXTAGS,CFGDEVICE/RfTag.cfg)
#else
	  CP(RfTag/RfTag.cfg ID,CFGDEVICE/RfTag.cfg)
#endif
#ifdef SCALE
	CP(RfTag/WeighScale.cfg,CFGDEVICE/WeighScale.cfg)
#endif
