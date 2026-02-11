/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: erufino $
 *     $Date: 2018/12/12 15:15:53 $
 *    $State: Exp $
 *   Purpose: Load script for Cummins driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME CenseJ1939
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/CenseJ1939/cense.cfg MODEL, CFGDEVICE/cense.cfg)
CP(MineCare/CenseJ1939/CenseJ1939MsgInfo.csv, CFGDEVICE/CenseJ1939MsgInfo.csv)
