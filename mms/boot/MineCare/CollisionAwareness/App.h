/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: erufino $
 *     $Date: 2017/01/06 13:09:57 $
 *    $State: Exp $
 *   Purpose:
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME CollisionAwareness 
#define DRIVERMODULE CollisionAwarenessDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
