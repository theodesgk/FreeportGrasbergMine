/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2007
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: imascarenhas $
 *     $Date: 2015/07/24 14:12:09 $
 *    $State: Exp $
 *   Purpose: Load script for Vist driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME Vist

#include <MineCare/Config.h>

#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/Vist/vist.cfg _MODEL_=MODEL, CFGDEVICE/vist.cfg)
CP(MineCare/APPNAME/Main.cfg _MODEL_=MODEL _UP_=UP,CFGDEVICE/Main.cfg)
