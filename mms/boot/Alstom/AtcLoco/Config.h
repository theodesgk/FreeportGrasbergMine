/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2006/04/26 16:27:08 $
 *    $State: Exp $
 *   Purpose: Load script for AtcLoco driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME AtcLoco
LD(Macro,APPDEVICE/Macro)
#include <Alstom/Config.h>
CP(Alstom/AtcLoco/AtcLoco.cfg, CFGDEVICE/AtcLoco.cfg)
CP(Alstom/AtcLoco/Macro.cfg, CFGDEVICE/Macro.cfg)
