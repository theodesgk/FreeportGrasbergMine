/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.3 $
 *   $Author: imascarenhas $
 *     $Date: 2015/05/25 13:45:14 $
 *    $State: Exp $
 *   Purpose: Load script for Rimex interface
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME Centurion 
#define DRIVERMODULE CenturionDriver
#define LAZYINTERFACESLOAD

#include <MineCare/App.h>

#ifdef LOADSIMULATOR
  LD(CenturionSim,APPDEVICE/CenturionSim)
#endif
