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
 *   Purpose: Load script for Siemens AC driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME SiemensACW
#include <MineCare/Config.h>

#ifdef LOADSIMULATOR
	CP(MineCare/SiemensACW/SiemensACW.cfg _LOADSIMULATOR_=yes, CFGDEVICE/siemensacw.cfg)
#endif
