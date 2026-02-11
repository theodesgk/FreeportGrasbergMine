/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/12/15 16:36:23 $
 *    $State: Exp $
 *   Purpose: Load script for Vims driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME VimsModel
#include <MineCare/Config.h>
#ifdef VIMSCONFIG
        echo **** Using \"VIMSCONFIG\" VIMS Configuration ****
	        CP(MineCare/VimsModel/VIMSCONFIG.config, CFGDEVICE/vims.cfg)
#else
	        echo **** Using DEFAULT VIMS configuration ****
		        CP(MineCare/VimsModel/785B.config, CFGDEVICE/vims.cfg)
#endif
	
