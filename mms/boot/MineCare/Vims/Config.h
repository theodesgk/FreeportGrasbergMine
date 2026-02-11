/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.5 $
 *   $Author: latum $
 *     $Date: 2007/02/21 23:09:58 $
 *    $State: Exp $
 *   Purpose: Load script for Cense driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Vims
#include <MineCare/Config.h>

#ifdef LOADSIMULATOR
#	define SIM _LOADSIMULATOR_=yes
#else
#	define SIM
#endif

#ifndef MODEL
#	define MODEL
#endif

CP(MineCare/Vims/vims.cfg MODEL SIM, CFGDEVICE/vims.cfg)

#ifdef LOADSIMULATOR
	CP(MineCare/Vims/VimsSim.cfg _MODEL_=MODEL, CFGDEVICE/VimsSim.cfg)
#endif
