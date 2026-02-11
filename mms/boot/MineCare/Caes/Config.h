/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: imascarenhas $
 *     $Date: 2015/02/10 16:48:49 $
 *    $State: Exp $
 *   Purpose: Load script for Cense driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Caes
#include <MineCare/Config.h>

#ifndef TRUCK_NAME
#       define TRUCK_NAME
#endif

CP(MineCare/Caes/caes.cfg TRUCK_NAME, CFGDEVICE/caes.cfg)
