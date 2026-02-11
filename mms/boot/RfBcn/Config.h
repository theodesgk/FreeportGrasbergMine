/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Load RF beacon configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#ifndef CLASS
#	define CLASS truck
#endif
#ifdef RFBCNID
#	define SETID _ID_=RFBCNID
#else
#	define SETID
#endif
#ifndef ISOPTION
	CP(RfBcn/Main.cfg _CLASS_=CLASS SETID,CFGDEVICE/Main.cfg)
	CP(RfBcn/Macro.cfg _CLASS_=CLASS SETID,CFGDEVICE/Macro.cfg)
#	include <Cfg/Mainini.h>
#endif
CP(RfBcn/RfBcn.cfg _CLASS_=CLASS SETID,CFGDEVICE/RfBcn.cfg)
