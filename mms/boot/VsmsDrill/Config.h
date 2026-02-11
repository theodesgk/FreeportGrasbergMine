/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2003/10/27 13:07:47 $
 *    $State: Exp $
 *   Purpose: Load script for HpLoader configuration files
 *
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo VsmsDrill can only be an option
#else
#	if #arch(hub) || #arch(hubcan)
#		define DEV _DEVICE_=DEVICE
		CP(VsmsDrill/Vsms.cfg DEV,CFGDEVICE/Vsms.cfg)
#	endif
#endif
