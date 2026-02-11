/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002,2018
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: bailey $
 *     $Date: 2018/01/31 23:34:12 $
 *    $State: Exp $
 *   Purpose: Load script for InvertexCAN driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME InvertexCAN
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL Legacy
#endif
#ifdef MODEL
	CP(MineCare/APPNAME/Main.cfg _MODEL_=MODEL,CFGDEVICE/Main.cfg)
#endif
CP(MineCare/InvertexCAN/invertexcan.cfg MODEL, CFGDEVICE/invertexcan.cfg)
