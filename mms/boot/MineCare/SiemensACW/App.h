/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2007/08/06 22:54:44 $
 *    $State: Exp $
 *   Purpose: Load script for Siemens AC driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME SiemensACW 
#define DRIVERMODULE SiemensACWDriver
#include <MineCare/App.h>

#ifdef LOADSIMULATOR
  LD(SiemensACWSim,APPDEVICE/SiemensACWSim)
#endif
