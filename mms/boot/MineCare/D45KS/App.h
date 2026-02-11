/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2010/03/30 21:57:16 $
 *    $State: Exp $
 *   Purpose: Load script for Sandvik D45KS driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME D45KS
#define DRIVERMODULE D45KSDriver
#include <MineCare/App.h>
LD(Canopen,APPDEVICE/Canopen)
LD(GenericDrill, APPDEVICE/GenericDrill)
