/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/12/10 17:23:52 $
 *    $State: Exp $
 *   Purpose: Load script for Tci driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME Invertex
#define DRIVERMODULE InvertexDriver
#include <MineCare/App.h>
LD(GePtu, APPDEVICE/GePtu)
#assert module(GePtu)
