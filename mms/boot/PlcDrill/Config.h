/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/08/20 16:06:16 $
 *    $State: Exp $
 *   Purpose: Load script for HpLoader configuration files
 *
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo PlcDrill can only be an option
#else
#       if #arch(hub) || #arch(hubcan) || #(mlink)
#               define DEV _DEVICE_=DEVICE
	CP(PlcDrill/Vsms.cfg DEV,CFGDEVICE/Vsms.cfg)
#       endif
#endif
