/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2010/09/23 17:34:08 $
 *    $State: Exp $
 *   Purpose: Load script for Sandvik DR460 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME DR460
#define DRIVERMODULE DR460Driver
#include <MineCare/App.h>
LD(Canopen,APPDEVICE/Canopen)
LD(GenericDrill, APPDEVICE/GenericDrill)
