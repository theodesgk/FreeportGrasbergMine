/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002,2017
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: erufino $
 *     $Date: 2017/08/18 16:30:25 $
 *    $State: Exp $
 *   Purpose: Load script for DdecJ1939 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME DdecJ1939
#define DRIVERMODULE DdecJ1939Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
