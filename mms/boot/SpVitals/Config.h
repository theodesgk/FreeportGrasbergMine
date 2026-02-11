/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2002/11/27 23:01:12 $
 *    $State: Exp $
 *   Purpose: Load the Statex configuration, including
 *	      the optional DataProvider if OPTIONS=DataProvider
 *	      was included.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Cfg/OMS.h>
CP(SpVitals/vs.cfg, CFGDEVICE/vs.cfg)
CP(SpVitals/vsBus.cfg, CFGDEVICE/vsBus.cfg)
