/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: Can.h,v $
 * $Revision: 1.6 $
 *   $Author: latum $
 *     $Date: 2007/01/15 23:43:46 $
 *    $State: Exp $
 *   Purpose: CAN bus configuration file
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef CANNET
#	ifdef CANID
#		define CANNET 192.168.203.@CANID@
#		if #module(Can_2)
#			define CANBNET 192.168.204.@CANID@
#		endif
#	else
#		define CANNET 192.168.203.0
#		if #module(Can_2)
#			define CANBNET 192.168.204.0
#		endif
#		define CANID -1
#	endif
#endif
#if CANID == 0 
#	ifdef CANPROMISCUOUS
#		define CANCFG yes CANPROMISCUOUS
#	else
#		define CANCFG yes
#	endif
#else
#	ifdef CANPROMISCUOUS
#		define CANCFG no CANPROMISCUOUS
#	else
#		define CANCFG
#	endif
#endif
#ifndef CANSPEED
#	define CANSPEED 250k
#endif
#if defined(CANBNET)
#	ifndef CANSPEEDB
#		define CANSPEEDB 250k
#	endif
	echo Configuring dual CAN bus id:CANID
	CP(Cfg/Can.cfg CANNET _CANID_=CANID _CANPORT_=cana _CANSPEED_=CANSPEED CANCFG,CFGDEVICE/CanA.cfg)
	CP(Cfg/Can.cfg CANBNET _CANID_=CANID _CANPORT_=canb _CANSPEED_=CANSPEEDB CANCFG,CFGDEVICE/CanB.cfg)
	ln CFGDEVICE/CanA.cfg Can.cfg
#elif defined(CANPORT)
	echo Configuring CAN bus id:CANID port:CANPORT
	CP(Cfg/Can.cfg CANNET _CANID_=CANID _CANPORT_=CANPORT _CANSPEED_=CANSPEED CANCFG,CFGDEVICE/Can.cfg)
#else
	echo Configuring CAN bus id:CANID
	CP(Cfg/Can.cfg CANNET _CANID_=CANID _CANSPEED_=CANSPEED CANCFG,CFGDEVICE/Can.cfg)
#endif
