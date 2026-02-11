/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2010/02/22 16:57:16 $
 *    $State: Exp $
 *   Purpose: Load script for Cummins driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Cummins
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/Cummins/cummins.cfg MODEL, CFGDEVICE/cummins.cfg)

