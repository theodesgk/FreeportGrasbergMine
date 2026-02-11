/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/08/29 18:19:32 $
 *    $State: Exp $
 *   Purpose: Load script for Hitachi6 driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define DRIVERNAME Hitachi6
#define DRIVERMODULE Hitachi6Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
