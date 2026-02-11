/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: dcitron $
 *     $Date: 2015/02/24 19:28:16 $
 *    $State: Exp $
 *   Purpose: Load script for BCS driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME BCS
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/BCS/bcs.cfg MODEL, CFGDEVICE/bcs.cfg)
