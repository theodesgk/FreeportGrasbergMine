/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/01/05 23:04:13 $
 *    $State: Exp $
 *   Purpose: Load script for generic GSP interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration...
#define MYAPP Minestar1
CP(MineStar/Plm/Macro.cfg,CFGDEVICE/Macro.cfg)
CP(MineStar/Plm/Main.cfg,CFGDEVICE/Main.cfg)
#include <Cfg/Mainini.h>
