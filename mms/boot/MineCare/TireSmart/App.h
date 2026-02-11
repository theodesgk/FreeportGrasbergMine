/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2011/04/15 00:05:25 $
 *    $State: Exp $
 *   Purpose: Load script for TireSmart driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define DRIVERNAME TireSmart
#define DRIVERMODULE TireSmartDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
