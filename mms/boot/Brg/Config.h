/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Load the MP Router configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef _Brg_Config_h_
#define _Brg_Config_h_
#include <Cfg/Device.h>
#ifndef BRGID
#	define BRGID A
#endif
#ifndef BRGACTIVE
#	define BRGACTIVE yes
#endif
#ifdef ISOPTION
	CP(Cfg/Args.cfg active BRGACTIVE,CFGDEVICE/Brg.cfg)
#else
#	include <Cfg/Slip.h>
	CP(Cfg/Args.cfg active BRGACTIVE,CFGDEVICE/Brg.cfg)
	CP(Brg/Macro.cfg _BRGID_=BRGID,CFGDEVICE/Macro.cfg)
	CP(Brg/Main.cfg,CFGDEVICE/Main.cfg)
#	include <Cfg/Modem.h>
#	include <Cfg/Mainini.h>
#endif
#endif
