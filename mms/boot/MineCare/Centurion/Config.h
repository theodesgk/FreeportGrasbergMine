/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2010/07/09 23:21:43 $
 *    $State: Exp $
 *   Purpose: Load script for Centurion interface
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Centurion
#include <MineCare/Config.h>

#ifdef LOADSIMULATOR
	CP(MineCare/Centurion/Centurion.cfg _LOADSIMULATOR_=yes, CFGDEVICE/centurion.cfg)
#endif
