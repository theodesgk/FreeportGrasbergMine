/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2002/12/11 20:55:47 $
 *    $State: Exp $
 *   Purpose: Load script for Dispatch - MineCare interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <MineCare/Config.h>
#ifdef DISPCONFIG
	echo **** Using \"DISPCONFIG\" Dispatch Interface configuration ****
	CP(MineCare/Disp/DISPCONFIG.config, CFGDEVICE/disp.cfg)
#endif
