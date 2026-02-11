/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2013/10/08 21:28:03 $
 *    $State: Exp $
 *   Purpose: Load script for CumminsCore2 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME CumminsCore2
#define DRIVERMODULE CumminsCore2Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
