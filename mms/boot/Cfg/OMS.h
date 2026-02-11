%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: OMS.h,v $
 * $Revision: 1.13 $
 *   $Author: dcitron $
 *     $Date: 2014/07/15 16:03:15 $
 *    $State: Exp $
 *   Purpose: Load the OMS.cfg file, setting `OMS host' as DEVICE
 *	      and `OMS domain' as DOMAIN.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef _Cfg_OMS_h_
#define _Cfg_OMS_h_
#ifndef OMSIDENTITY
#	ifdef ID
#		define OMSIDENTITY ID
#	else
#		define OMSIDENTITY -1
#	endif
#endif
/*
 * Use `DEVICE' for our OMS host name IFF we're an Mpr or Hub, since
 * devices loaded via a Mpr or Hub will normally be proxied via a Hub.
 */
#if defined(DEVICE) && (#up(Rp) || #up(Prism) || #appname(Hub) || #appname(Mpr) || #appname(AhsHub) )
#	define OMSHOST _HOST_=DEVICE
#elif defined(APPNAME)
#	define OMSHOST _HOST_=APPNAME
#else
#	define OMSHOST
#endif
#if defined(PROXY)
#	define OMSPROXY _PROXY_=PROXY
#elif (#up(Rp) || #up(Prism) || #up(Ether) || #appname(Mpr) || #appname(Hub) || #appname(AhsHub) || #module(Prism))
#	define OMSPROXY
#else
#	define OMSPROXY _PROXY_=default
#endif
#if defined(DOMAIN) && (#up(Ether) || #module(Prism) || #up(SlipMp) || #up(Dual))
#	define OMSDOMAIN _DOMAIN_=DOMAIN
#else
#	define OMSDOMAIN _DOMAIN_=default
#endif
#if defined(DEFAULTROUTE)
#	define OMSDEFAULT _DEFAULTROUTE_=DEFAULTROUTE
#else
#	define OMSDEFAULT _DEFAULTROUTE_=none
#endif
#if defined(KEEPALIVE)
#	define OMSKEEPALIVE _KEEPALIVE_=KEEPALIVE
#else
#	define OMSKEEPALIVE
#endif
#if #appname(AhsHub)
#if 	#up(Ether)
#      		define BCASTDEVSTR _BCASTDEV_=eth0
#	else
#      		define BCASTDEVSTR _BCASTDEV_=wan0
#	endif
#else
#      define BCASTDEVSTR
#endif
#ifdef OMSCLASS
	CP(Cfg/OMS.cfg OMSHOST OMSPROXY OMSDOMAIN OMSDEFAULT OMSKEEPALIVE BCASTDEVSTR OMSAPP=APPNAME _IDENTITY_=OMSIDENTITY _OMSCLASS_=OMSCLASS _OPTIONS_=OPTIONS,CFGDEVICE/OMS.cfg)
#else
	CP(Cfg/OMS.cfg OMSHOST OMSPROXY OMSDOMAIN OMSDEFAULT OMSKEEPALIVE BCASTDEVSTR OMSAPP=APPNAME _IDENTITY_=OMSIDENTITY _OPTIONS_=OPTIONS,CFGDEVICE/OMS.cfg)
#endif
#endif
