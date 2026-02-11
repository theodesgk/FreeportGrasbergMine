/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: erufino $
 *     $Date: 2018/03/26 22:47:37 $
 *    $State: Exp $
 *   Purpose: Load script for Radiation Scanner interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#include <Main/GspPort.h>

#ifndef SCNRID
#define SCNRID
#ifndef ARG1
  echo SCANNER ID NOT PROVIDED,USING DEFAULT SCANNER ID:1!!!!
#endif
#endif

CP(RadiationScnr/scnr.cfg _GSPPORT_=GSPPORT SCNRID, CFGDEVICE/scnr.cfg)
