/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/01/05 23:21:11 $
 *    $State: Exp $
 *   Purpose: Load script for the custom application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#if #up(Slip)
#	include <Cfg/Slip.h>
#elif #up(Loop)
#	include <Cfg/Loop.h>
#elif #up(Can)
#	include <Cfg/Can.h>
#endif
CP(Custom/Main.cfg _OPTIONS_=OPTIONS _UP_=UP,CFGDEVICE/Main.cfg)
CP(Custom/Macro.cfg _OPTIONS_=OPTIONS,CFGDEVICE/Macro.cfg)
#include <Cfg/Modem.h>
#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
