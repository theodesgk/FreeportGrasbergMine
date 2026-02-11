/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2014/09/12 18:55:10 $
 *    $State: Exp $
 *   Purpose: Load script for Cummins driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME VISTJ1939
#define DRIVERMODULE VISTJ1939Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
