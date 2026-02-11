/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2001
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: olson $
 *     $Date: 2002/10/11 19:30:05 $
 *    $State: Exp $
 *   Purpose: Signaling System configuration.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifdef STDSTATIONS
	CP(Std/Std.cfg STDSTATIONS,CFGDEVICE/Std.cfg)
#else
	CP(Std/Std.cfg,CFGDEVICE/Std.cfg)
#endif
CP(Dsp/brg2-std.dsp,CFGDEVICE/brg2-std.dsp)
#ifndef ISOPTION
#  ifdef UP
     CP(Std/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#  else
     CP(Std/Main.cfg,CFGDEVICE/Main.cfg)
#  endif
#include <Cfg/Mainini.h>
#endif
