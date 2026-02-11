/*
 *
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/08/29 18:19:32 $
 *    $State: Exp $
 *   Purpose: Load script for Hitachi6 driver
 * * * * * * * * * * * * * * * * * * *
 *
 */
#define APPNAME Hitachi6
#include <MineCare/Config.h>

#ifndef MODEL
#	define MODEL
#endif

CP(MineCare/Hitachi6/hitachi6.cfg MODEL, CFGDEVICE/hitachi6.cfg)