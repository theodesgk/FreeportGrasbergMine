/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2009/10/07 17:05:19 $
 *    $State: Exp $
 *   Purpose: Load script for Scania driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define DRIVERNAME Scania
#define DRIVERMODULE ScaniaDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
