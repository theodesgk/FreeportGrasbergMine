/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2002/12/18 17:58:21 $
 *    $State: Exp $
 *   Purpose: Load script for generic GSP interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration...
#define MYAPP Minestar1
CP(MineStar/Gsp1/Macro.cfg,CFGDEVICE/Macro.cfg)
CP(MineStar/Gsp1/Main.cfg,CFGDEVICE/Main.cfg)
#include <Cfg/Mainini.h>
