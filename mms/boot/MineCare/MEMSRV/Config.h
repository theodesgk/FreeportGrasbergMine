/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: imascarenhas $
 *     $Date: 2015/12/01 17:44:52 $
 *    $State: Exp $
 *   Purpose: Load script for MEMSRV driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME MEMSRV
#include <MineCare/Config.h>

#ifndef MODEL
#	define MODEL
#endif

CP(MineCare/MEMSRV/memsrv.cfg MODEL, CFGDEVICE/memsrv.cfg)
