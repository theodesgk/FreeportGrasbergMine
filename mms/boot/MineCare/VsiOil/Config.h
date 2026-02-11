/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2007
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: imascarenhas $
 *     $Date: 2014/10/24 21:51:34 $
 *    $State: Exp $
 *   Purpose: Load script for VsiOil driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME VsiOil
#include <MineCare/Config.h>

#ifndef MODEL
#	define MODEL
#endif

#ifndef POLLINTERVAL 
#       define POLLINTERVAL
#endif

CP(MineCare/VsiOil/vsioil.cfg MODEL POLLINTERVAL, CFGDEVICE/vsioil.cfg)
