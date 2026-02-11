/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2010/01/06 00:57:08 $
 *    $State: Exp $
 *   Purpose: Load script for Cense driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Cense
#include <MineCare/Config.h>

#ifndef ENG_NUM 
#       define ENG_NUM
#endif
#ifndef LOADSIMULATOR
#       define LOADSIMULATOR
#endif

CP(MineCare/Cense/cense.cfg ENG_NUM LOADSIMULATOR, CFGDEVICE/cense.cfg)

