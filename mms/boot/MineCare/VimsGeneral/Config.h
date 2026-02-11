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
#define APPNAME VimsGeneral
#include <MineCare/Config.h>
#ifdef VIMSCONFIG
        echo **** Using \"VIMSCONFIG\" VIMS Configuration ****
	        CP(MineCare/VimsGeneral/VIMSCONFIG.config, CFGDEVICE/vims.cfg)
#else
	        echo **** Using DEFAULT VIMS configuration ****
		        CP(MineCare/VimsGeneral/general.config, CFGDEVICE/vims.cfg)
#endif
	
