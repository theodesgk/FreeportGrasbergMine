/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2010/02/01 17:54:12 $
 *    $State: Exp $
 *   Purpose: Load script for Adec driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME Adec
#define DRIVERMODULE AdecDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
