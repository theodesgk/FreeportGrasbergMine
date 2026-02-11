/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2008/08/29 18:15:27 $
 *    $State: Exp $
 *   Purpose: Load script for SmartTire driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define DRIVERNAME SmartTire
#define DRIVERMODULE SmartTireDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
