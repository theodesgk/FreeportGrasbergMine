/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2007
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/04/06 18:29:14 $
 *    $State: Exp $
 *   Purpose: Load script for SKL20 driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME SKL20
#define DRIVERMODULE SKL20Driver
#include <MineCare/App.h>
LD(GenericDrill, APPDEVICE/GenericDrill)
