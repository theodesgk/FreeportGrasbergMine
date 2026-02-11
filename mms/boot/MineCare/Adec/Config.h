/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2014/12/02 13:57:09 $
 *    $State: Exp $
 *   Purpose: Load script for Adec driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Adec
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/Adec/adec.cfg MODEL, CFGDEVICE/adec.cfg)

