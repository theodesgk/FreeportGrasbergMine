/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.6 $
 *   $Author: dcitron $
 *     $Date: 2015/08/28 17:44:29 $
 *    $State: Exp $
 *   Purpose: Configuration script for embedded object spooler.
 * * * * * * * * * * * * * * * * * * *
 */

#ifndef _Spooler_Config_h_
#define _Spooler_Config_h_
#if #module(MineCare)
#	define	MCARE	MINECARE
#else
#	define	MCARE
#endif
#if #option(StoreForward) && #arch(pe.net)
#	define	SF	STOREFORWARD
#else
#	define	SF
#endif
#define SPOOLOPT	MCARE SF
#if defined(PRISMRADIO)
        CP(Spooler/Spooler.cfg APPNAME SPOOLOPT _PRISMRADIO_=PRISMRADIO,CFGDEVICE/Spooler.cfg)
#else
        CP(Spooler/Spooler.cfg APPNAME SPOOLOPT,CFGDEVICE/Spooler.cfg)
#endif
#endif

