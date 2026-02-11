/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: imascarenhas $
 *     $Date: 2014/12/05 14:37:51 $
 *    $State: Exp $
 *   Purpose: Load script for HoursMeter driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME HoursMeter
#include <MineCare/Config.h>

#ifndef MODEL
#       define MODEL
#endif

#ifndef TIMER_RANGE
#       define TIMER_RANGE
#endif

#ifndef NODE_ADDRESS
#       define NODE_ADDRESS
#endif


CP(MineCare/HoursMeter/hoursmeter.cfg MODEL TIMER_RANGE NODE_ADDRESS, CFGDEVICE/HoursMeter.cfg)
