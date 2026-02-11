/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Load script for ImproDevice Appliation
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef ISOPTION
#	include <Cfg/Slip.h>
#	include <Cfg/Modem.h>
#	include <Cfg/Mainini.h>
	CP(HECan/Main.cfg _OPTIONS_=OPTIONS _UP_=UP,CFGDEVICE/Main.cfg)
	CP(HECan/Macro.cfg _OPTIONS_=OPTIONS,CFGDEVICE/Macro.cfg)
#endif
CP(HECan/HECan.cfg ,CFGDEVICE/HECan.cfg)
CP(HECan/CanA.cfg ,CFGDEVICE/CanA.cfg)
