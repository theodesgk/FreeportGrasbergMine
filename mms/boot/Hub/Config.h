/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.24 $
 *   $Author: dcitron $
 *     $Date: 2018/06/22 21:46:16 $
 *    $State: Exp $
 *   Purpose: Load script for a29k hub router application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#if !#arch(pe)
#       include <Cfg/Slip.h>
#endif
#ifdef UP
#	define UPPORT _UP_=UP
#elif #module(Prism)
#	define UPPORT _UP_=Prism
#elif #module(Rp)
#	define UPPORT _UP_=Rp
#elif (#arch(r23s) || #arch(r1s) || #arch(r2s)) && !#up(Stas)
#	define UPPORT _UP_=Stas
#else
#	define UPPORT _UP_=Slip
#endif
#ifdef REPEATER
#	define REPEATER_ARGS _REPEATER_=yes
#else
#	define REPEATER_ARGS
#endif
#ifdef BRIDGE
#	define BRIDGE_ARGS _BRIDGE_=BRIDGE
#else
#	define BRIDGE_ARGS
#endif
#if #prismradio(NONE)
#    define PRISMARGS _PRISMRADIO_=NONE
#else
#    define PRISMARGS
#endif
#ifdef INCLINOMETER
#	define INCLARGS _INCLINOMETER_=INCLINOMETER
#else
#	define INCLARGS
#endif
#ifdef NOSLIP
#	define SLIPARGS _NOSLIP_=yes
#else
#	define SLIPARGS
#endif
#ifdef NOCAN
#	define CANARGS _NOCAN_=yes
#else
#	define CANARGS
#endif
#ifdef DEMAJOR
#	define MAJVER _DEMAJOR_=DEMAJOR
#else
#	define MAJVER
#endif
#ifdef DEMINOR
#	define MINVER _DEMINOR_=DEMINOR
#else
#	define MINVER
#endif
#ifdef DEMAINT
#	define MAINTVER _DEMAINT_=DEMAINT
#else
#	define MAINTVER
#endif
#ifdef DELITE
#	define DEVER _DELITE_=yes
#else
#	define DEVER
#endif

#define TSKMN
#if defined TASKMAN && !DEFINED DELITE
#       if (DEMAJOR == 6 && DEMINOR == 6 && DEMAINT >= 3) || (DEMAJOR > 6 || DEMINOR > 6)
#               define TSKMN _TASKMAN_=TASKMAN
#       endif
#endif

#ifdef NORTCM
#	define RTCM _NORTCM_=yes
#else
#	define RTCM
#endif

#if #arch(pe)
#	include <PortEmbedded/PE.h>
#endif

CP(Hub/Main.cfg _DEVICE_=DEVICE _CLASS_=CLASS UPPORT _OPTIONS_=OPTIONS INCLARGS MAJVER MINVER MAINTVER DEVER PEARGS TSKMN RTCM,CFGDEVICE/Main.cfg)
CP(Hub/Router.cfg _DEVICE_=DEVICE _CLASS_=CLASS UPPORT _OPTIONS_=OPTIONS PRISMARGS REPEATER_ARGS BRIDGE_ARGS SLIPARGS CANARGS,CFGDEVICE/Router.cfg)
CP(Hub/CLASS/Macro.cfg _OPTIONS_=OPTIONS MAJVER MINVER MAINTVER DEVER,CFGDEVICE/Macro.cfg)
CP(Hub/CLASS/Vsms.cfg _OPTIONS_=OPTIONS,CFGDEVICE/Vsms.cfg)

#if !#arch(pe)
#	include <Cfg/Ether.h>
#endif

#if #module(Can) || #module(Can_2) || #module(CanDual)
#	ifndef CANID
#		define CANID 0
#	endif
#	include <Cfg/Can.h>
#endif

#if #module(Loop)
#	include <Cfg/Loop.h>
	CP(Hub/Master.cfg,CFGDEVICE/Master.cfg) 
#endif

#if #module(Prism) && !#arch(pe)
#	if !#prismradio(NONE)
#		include <Cfg/Prism.h>
		CP(Cfg/Args.cfg ipaddr PRISMNET,CFGDEVICE/vn0.cfg)
#	endif
#endif

#if #module(Rp)
#	include <Cfg/Modem.h>
#endif

#if #arch(hubcan) || #arch(mlink) || #arch(pe)
#	include <Spooler/Config.h>
#endif

#include <Cfg/Options.h>

#if !#arch(pe)
#       include <Cfg/Mainini.h>
#endif

