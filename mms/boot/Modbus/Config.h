/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/01/05 23:04:13 $
 *    $State: Exp $
 *   Purpose: Load the Modbus configurations
 *
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifdef MODBUSCONFIG
	echo **** Using \"MODBUSCONFIG\" Modbus configuration ****
	CP(Modbus/MODBUSCONFIG.config, CFGDEVICE/mdbs.cfg)
#else
	echo **** Using DEFAULT Modbus configuration ****
	CP(Modbus/master.config, CFGDEVICE/mdbs.cfg)
#endif
#ifndef ISOPTION
	CP(Modbus/Macro.cfg,CFGDEVICE/Macro.cfg)
	CP(Modbus/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#	include <Cfg/Mainini.h>
#endif
