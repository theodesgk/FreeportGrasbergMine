/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/12/15 16:36:23 $
 *    $State: Exp $
 *   Purpose: Load script for Alstom applications
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration...
#ifndef ISOPTION
#       include <Cfg/Loop.h>
#       ifdef UP
                CP(Alstom/APPNAME/Main.cfg _UP_=UP,CFGDEVICE/Main.cfg)
#       else
	        CP(Alstom/APPNAME/Main.cfg,CFGDEVICE/Main.cfg)
#       endif
#       include <Cfg/Mainini.h>
#endif
