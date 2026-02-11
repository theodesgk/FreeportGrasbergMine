/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2015/11/16 18:18:55 $
 *    $State: Exp $
 *   Purpose: Load script for CumminsCore2 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME CumminsCore2
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

#ifndef ENG2_DUAL_ENGINE_BUS
#       define ENG2_DUAL_ENGINE_BUS
#endif

CP(MineCare/CumminsCore2/cumcore2.cfg MODEL ENG2_DUAL_ENGINE_BUS, CFGDEVICE/cumcore2.cfg)

