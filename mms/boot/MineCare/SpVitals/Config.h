/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/10/19 00:20:07 $
 *    $State: Exp $
 *   Purpose: Load script for VitalSigns driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME SpVitals
#include <MineCare/Config.h>
#ifdef VSCONFIG
	echo **** Using \"VSCONFIG\" VitalSigns configuration ****
	CP(MineCare/SpVitals/VSCONFIG.config, CFGDEVICE/vs.cfg)
#else
	echo **** Using DEFAULT VitalSigns configuration ****
	CP(MineCare/SpVitals/default.config, CFGDEVICE/vs.cfg)
#endif
CP(MineCare/SpVitals/vsBus.cfg, CFGDEVICE/vsBus.cfg)
