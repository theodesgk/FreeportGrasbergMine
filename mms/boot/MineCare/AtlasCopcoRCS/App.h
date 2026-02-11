/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2007
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2009/06/22 22:46:41 $
 *    $State: Exp $
 *   Purpose: Load script for AtlasCopcoRCS driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME AtlasCopcoRCS
#define DRIVERMODULE AtlasCopcoRCSDriver
#include <MineCare/App.h>
LD(GenericDrill, APPDEVICE/GenericDrill)
