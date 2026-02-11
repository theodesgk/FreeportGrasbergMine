/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2009/08/15 22:20:36 $
 *    $State: Exp $
 *   Purpose: Load the MP Router configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#include <Cfg/Loop.h>
CP(Ucell/Main.cfg,CFGDEVICE/Main.cfg)
CP(Cfg/Args.cfg mode bridge broadcast 172.17.255.255 downlink Rp resvIPs 16,CFGDEVICE/Router.cfg)
#include <Cfg/Modem.h>
#include <Cfg/Mainini.h>
