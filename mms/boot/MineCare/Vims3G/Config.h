/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2015/04/06 16:55:02 $
 *    $State: Exp $
 *   Purpose: Load script for Cense driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Vims3G
#include <MineCare/Config.h>

#ifdef LOADSIMULATOR
#	define SIM _LOADSIMULATOR_=yes
#else
#	define SIM
#endif

#ifndef MODEL
#	define MODEL
#endif

CP(MineCare/Vims3G/vims3g.cfg MODEL, CFGDEVICE/vims3g.cfg)
CP(Slip, pfs/boot/Slip)
