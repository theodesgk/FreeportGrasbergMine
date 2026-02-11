/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2014/06/17 19:05:34 $
 *    $State: Exp $
 *   Purpose: Load script for Cummins driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME CenseJ1939Quantum
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/CenseJ1939Quantum/censequantum.cfg MODEL, CFGDEVICE/censequantum.cfg)

