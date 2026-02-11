/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2003/02/05 00:21:33 $
 *    $State: Exp $
 *   Purpose: Load script for Bucyrus driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Bucyrus
#include <MineCare/Config.h>
echo **** copying Bucyrus config for DEVICE ****
CP(MineCare/Bucyrus/DEVICE.cfg,CFGDEVICE/buc.cfg)
