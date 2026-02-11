/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: erufino $
 *     $Date: 2018/03/19 21:18:16 $
 *    $State: Exp $
 *   Purpose: Load script for liebExcav driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME LiebExcav
#include <MineCare/Config.h>
#ifndef MODEL
#       define MODEL
#endif

CP(MineCare/APPNAME/Main.cfg _MODEL_=MODEL,CFGDEVICE/Main.cfg)
CP(MineCare/LiebExcav/lieb.cfg MODEL, CFGDEVICE/lieb.cfg)
