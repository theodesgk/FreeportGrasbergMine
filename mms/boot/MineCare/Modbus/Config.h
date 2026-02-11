/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: latum $
 *     $Date: 2007/09/12 21:20:19 $
 *    $State: Exp $
 *   Purpose: Load script for Modbus driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Modbus
#include <MineCare/Config.h>
#ifdef MODBUSCONFIG
	echo **** Using \"MODBUSCONFIG\" Modbus configuration ****
	CP(MineCare/Modbus/MODBUSCONFIG.config, CFGDEVICE/mdbs.cfg)
#else
	echo **** Using DEFAULT Modbus configuration ****
	CP(MineCare/Modbus/master.config, CFGDEVICE/mdbs.cfg)
#endif
#ifdef VSCONFIG
	echo **** Using \"VSCONFIG\" VitalSigns configuration ****
	CP(MineCare/Modbus/VSCONFIG.config, CFGDEVICE/vs.cfg)
#else
	echo **** Using DEFAULT VitalSigns configuration ****
	CP(MineCare/Modbus/vitalsigns.config, CFGDEVICE/vs.cfg)
#endif
