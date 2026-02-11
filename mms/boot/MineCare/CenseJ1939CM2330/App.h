/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: imascarenhas $
 *     $Date: 2015/04/30 13:07:19 $
 *    $State: Exp $
 *   Purpose: 
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME CenseJ1939CM2330 
#define DRIVERMODULE CenseJ1939CM2330Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
