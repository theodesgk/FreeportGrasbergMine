/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: jesionowski $
 *     $Date: 2016/10/19 23:05:02 $
 *    $State: Exp $
 *   Purpose: Load script for FlandersShovel Modbus Adapter driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME FlandersShovel
#include <MineCare/Config.h>

LD(Modbus, APPDEVICE/Modbus)

#ifndef SLAVE
#	define SLAVE
#endif

CP(MineCare/FlandersShovel/moddev.cfg SLAVE, CFGDEVICE/moddev.cfg)

