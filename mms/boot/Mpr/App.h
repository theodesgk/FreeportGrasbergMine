/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.4 $
 *   $Author: olson $
 *     $Date: 2002/10/23 19:42:10 $
 *    $State: Exp $
 *   Purpose: Load script for MP Router application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#if #arch(a29k) || #arch(sh)
	LD(Ethernet,APPDEVICE/Ethernet)
#endif
#if #module(SlipMp)
	LD(SlipMp,APPDEVICE/SlipMp)
#endif
#if #module(Ucell)
	LD(Ucell,APPDEVICE/Ucell)
#endif
#if #module(TMp) && !#arch(r1t)
	LD(TMp,APPDEVICE/TMp)
#endif
#if (#module(Master) || #module(Loop)) && #arch(arm)
	LD(Loop,APPDEVICE/Loop)
#endif
LD(Router,APPDEVICE/Router)
#if #module(Rp) && (#arch(brg) || #arch(angus))
#	include <Brg/App.h>
#endif
#include <App/Options.h>
#if #module(rpc)
	LD(rpc,APPDEVICE/rpc)
#endif
#if #arch(hubcan) || #arch(mlink) || #arch(angus)
#	include <Spooler/App.h>
#endif
