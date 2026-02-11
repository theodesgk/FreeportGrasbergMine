/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2010/12/03 01:03:51 $
 *    $State: Exp $
 *   Purpose: Load script for Contronicsj1939 driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define DRIVERNAME ContronicsJ1939
#define DRIVERMODULE ContronicsJ1939Driver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
