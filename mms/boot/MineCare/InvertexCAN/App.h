/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002,2018
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: bailey $
 *     $Date: 2018/01/31 23:34:12 $
 *    $State: Exp $
 *   Purpose: Load script for InvertexCAN driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME InvertexCAN
#define DRIVERMODULE InvertexCANDriver
#include <MineCare/App.h>

#ifndef MODEL
echo No model defined. Loading Legacy
LD(InvertexCANLegacyEventIds,APPDEVICE/InvertexCANEventIds)
#endif

#if defined(MODEL) && #model(Legacy)
echo Loading Legacy model
LD(InvertexCANLegacyEventIds,APPDEVICE/InvertexCANEventIds)
#endif

#if defined(MODEL) && #model(GE554a)
echo Loading GE554a model
LD(InvertexCANge554aEventIds,APPDEVICE/InvertexCANEventIds)
#endif