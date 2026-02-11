/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2015/05/05 17:23:45 $
 *    $State: Exp $
 *   Purpose: 
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME CenseJ1939CM2330
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/CenseJ1939CM2330/censecm2330.cfg MODEL, CFGDEVICE/cense.cfg)

