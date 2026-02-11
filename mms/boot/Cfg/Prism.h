/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2001
 *               All Rights Reserved
 *  $RCSfile: Prism.h,v $
 * $Revision: 1.8 $
 *   $Author: latum $
 *     $Date: 2004/05/13 21:47:51 $
 *    $State: Exp $
 *   Purpose: Configure 802.11 Prism radio network devices.
 * * * * * * * * * * * * * * * * * * *
 */

#ifndef PRISMRADIO
#	if #arch(r2m) && (#appname(Hub) || #appname(Boot) || #appname(AhsHub))
#		define PRISMRADIO AB
#	else
#		define PRISMRADIO A
#	endif
#endif
#ifndef PRISMMODE
#	if #appname(Mpr)
#		define PRISMMODE APSERVER
#	else
#		define PRISMMODE APCLIENT
#	endif
#endif
#ifndef PRISMSSID
#	define PRISMSSID MLINK
#endif
#ifndef PRISMKEY
#	define PRISMKEY
#endif
#ifdef PRISMCHANNEL
#	define AGILITY 0
#else
#	define AGILITY
#endif
#if #class(repeater) || defined(REPEATER)
	/*
	 * For repeaters define both an uplink and downlink network.
	 */
#	ifndef PRISMNET
#		define PRISMNET	172.19.0.0
#	endif
#	if #arch(r2m) && #prismradio(AB)
		CP(Cfg/Prism.cfg PRISMNET A PRISMSSID APCLIENT PRISMKEY AGILITY _CLASS_=repeater,CFGDEVICE/wan0.cfg)
		CP(Cfg/Prism.cfg PRISMNET B PRISMSSID APSERVER PRISMKEY AGILITY,CFGDEVICE/wan1.cfg)
#	else
		CP(Cfg/Prism.cfg PRISMNET A PRISMSSID APCLIENT PRISMKEY AGILITY _CLASS_=repeater,CFGDEVICE/wan0.cfg)
		CP(Cfg/Prism.cfg PRISMNET NONE PRISMSSID APSERVER PRISMKEY AGILITY,CFGDEVICE/wan1.cfg)
#	endif
#elif #class(bridge)
	/*
	 * For ethernet bridges, always use a 32-bit netmask for the
	 * 802.11 downlink.
	 */
#	ifdef ETHER
#		define PRISMNET ETHER
#	endif
	CP(Cfg/Prism.cfg PRISMNET PRISMRADIO PRISMSSID PRISMMODE PRISMKEY AGILITY,CFGDEVICE/wan0.cfg)
#else
	/*
	 * Otherwise, were startup a standard 802.11 configuration.
	 */
#	ifndef PRISMNET
#		define PRISMNET 172.19.0.0
#	endif
	CP(Cfg/Prism.cfg PRISMNET PRISMRADIO PRISMSSID PRISMMODE PRISMKEY AGILITY,CFGDEVICE/wan0.cfg)
#endif
#if defined(PRISMDAC)
#define PRISMDACLBL dac
#endif

#if defined(PRISMCHANNEL) && defined(PRISMCCA)
	CP(Cfg/Args.cfg channel PRISMCHANNEL cca_thresh PRISMCCA PRISMDACLBL PRISMDAC,CFGDEVICE/ssra.cfg)
#	if #arch(r2m)
		  ln CFGDEVICE/ssra.cfg ssrb.cfg
#	endif
#elif defined(PRISMCHANNEL)
	CP(Cfg/Args.cfg channel PRISMCHANNEL PRISMDACLBL PRISMDAC,CFGDEVICE/ssra.cfg)
#	if #arch(r2m)
		  ln CFGDEVICE/ssra.cfg ssrb.cfg
#	endif
#elif defined(PRISMCCA)
	CP(Cfg/Args.cfg cca_thresh PRISMCCA PRISMDACLBL PRISMDAC,CFGDEVICE/ssra.cfg)
#	if #arch(r2m)
		  ln CFGDEVICE/ssra.cfg ssrb.cfg
#	endif
#elif defined(PRISMDAC)
	CP(Cfg/Args.cfg PRISMDACLBL PRISMDAC,CFGDEVICE/ssra.cfg)
#	if #arch(r2m)
		  ln CFGDEVICE/ssra.cfg ssrb.cfg
#	endif

#endif
