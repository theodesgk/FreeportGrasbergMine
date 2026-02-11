/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2010/06/11 04:40:02 $
 *    $State: Exp $
 *   Purpose: Load script for Liebherr Mdec driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME Mdec
#define DRIVERMODULE MdecDriver
#include <MineCare/App.h>
LD(Canopen,APPDEVICE/Canopen)
