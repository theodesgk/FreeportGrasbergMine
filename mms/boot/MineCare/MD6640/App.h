/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2007
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2013/11/11 06:45:51 $
 *    $State: Exp $
 *   Purpose: Load script for MD6640 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME MD6640
#define DRIVERMODULE MD6640Driver
#include <MineCare/App.h>
LD(GenericDrill, APPDEVICE/GenericDrill)
