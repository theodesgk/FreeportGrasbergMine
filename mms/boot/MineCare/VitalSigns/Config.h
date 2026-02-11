/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2012/07/08 07:50:23 $
 *    $State: Exp $
 *   Purpose: Load script for VitalSigns driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME VitalSigns
#include <MineCare/Config.h>
#ifdef VSCONFIG
	echo **** Using \"VSCONFIG\" VitalSigns configuration ****
	CP(MineCare/VitalSigns/VSCONFIG.config, CFGDEVICE/vs.cfg)
#else
	echo **** Using DEFAULT VitalSigns configuration ****
	CP(MineCare/VitalSigns/default.config, CFGDEVICE/vs.cfg)
#endif
CP(MineCare/VitalSigns/vsBus.cfg, CFGDEVICE/vsBus.cfg)
