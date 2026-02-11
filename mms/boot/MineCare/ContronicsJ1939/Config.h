/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2012/12/06 06:18:07 $
 *    $State: Exp $
 *   Purpose: Load script for Contronicsj1939 driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define APPNAME ContronicsJ1939
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/ContronicsJ1939/contronics.cfg MODEL, CFGDEVICE/contronics.cfg)
