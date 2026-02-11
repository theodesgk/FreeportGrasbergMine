/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2014/09/12 05:47:57 $
 *    $State: Exp $
 *   Purpose:
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME CollisionAvoidance 
#define DRIVERMODULE CollisionAvoidanceDriver
#include <MineCare/App.h>
LD(SAEJ1939, APPDEVICE/SAEJ1939)
#assert module(SAEJ1939)
