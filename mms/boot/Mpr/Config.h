/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.11 $
 *   $Author: olson $
 *     $Date: 2003/06/27 22:21:40 $
 *    $State: Exp $
 *   Purpose: Load the MP Router configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
/*
 * Define networks for HDLC and CAN network routers.  If the
 * network is an downlink access point, use a zero address; if the network
 * is an uplink, use the IP address of this device.
 */
#ifdef SUBNET_C
#   define SLIPNET	PRISMNET
#   if !defined(LOOPNET) && (#module(Loop) || #module(Master))
#	if #up(Loop)
#		define LOOPNET	IPADDR/24
#	else
#   		define LOOPNET	SUBNET_C/24
#	endif
#   endif
#   if !defined(CANNET) && #module(Can)
#	if #up(Can)
#		define CANNET	IPADDR/24
#	else
#   		define CANNET	SUBNET_C/24
#	endif
#   endif
#   if !defined(TMPNET) && #module(TMp)
#	if #up(TMp)
#		define TMPNET	IPADDR/24
#	else
#		define TMPNET	SUBNET_C/24
#	endif
#   endif
#endif
#if #module(Slip)
#	include <Cfg/Slip.h>
#endif
#if (#module(Master) || #module(Loop))
#	include <Cfg/Loop.h>
#endif
#if #module(Ether) && defined(ETHERNET)
#	include <Cfg/Ether.h>
#endif
#if #module(Prism)
#	include <Cfg/Prism.h>
#endif
#if #module(Rp)
/* Set backoff slots to 0 on access points to decrease latency */
#       if !#up(Rp)
#		define RPSLOTS 0
#	endif
#	include <Cfg/Modem.h>
#endif
#if #module(Can)
#	ifndef CANID
#		define CANID 0
#	endif
#	include <Cfg/Can.h>
#endif
#if #module(TMp)
#	if #up(TMp)
#		define TMPID -1
#	else
#		define TMPID 0
#	endif
#	include <Cfg/TMp.h>
#endif

/*
 * Always add the `Brg' option for UHF bit regenerators.
 */
#if #module(Rp) && (#arch(brg) || #arch(angus))
#    ifdef OPTIONS
#	define MPR_OPTIONS _OPTIONS_=OPTIONS,Brg
#    else
#	define MPR_OPTIONS _OPTIONS_=Brg
#    endif
#    define ISOPTION
#    include <Brg/Config.h>
#else
#	define MPR_OPTIONS _OPTIONS_=OPTIONS
#endif
CP(Mpr/Main.cfg NET_0 MPR_OPTIONS,CFGDEVICE/Main.cfg)
#if #class(passive)
#	define ROUTERMODE passive
#elif #class(repeater) || #class(bridge)
#	define ROUTERMODE bridge
#elif #class(proxy)
#	define ROUTERMODE proxy
#else
#	define ROUTERMODE router
#endif
#if #up(Ether) && defined(GATEWAY)
#	define ROUTERGW _GATEWAY_=GATEWAY
#else
#	define ROUTERGW
#endif
#ifdef NET_2
	CP(Mpr/Router.cfg ROUTERMODE ROUTERGW  _BROADCAST_=BROADCAST NET_0 NET_1 NET_2,CFGDEVICE/Router.cfg)
#else
	CP(Mpr/Router.cfg ROUTERMODE ROUTERGW  _BROADCAST_=BROADCAST NET_0 NET_1,CFGDEVICE/Router.cfg)
#endif
#if defined(BRGID)
	CP(Mpr/Macro.cfg MPR_OPTIONS _BRGID_=BRGID,CFGDEVICE/Macro.cfg)
#else
	CP(Mpr/Macro.cfg MPR_OPTIONS,CFGDEVICE/Macro.cfg)
#endif
#if #arch(hubcan) || #arch(mlink) || #arch(angus)
#	include <Spooler/Config.h>
#endif
#include <Cfg/Options.h>
#include <Cfg/Mainini.h>
