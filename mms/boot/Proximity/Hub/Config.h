/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2015/04/23 05:26:50 $
 *    $State: Exp $
 *   Purpose: Load Proximity configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Proximity can only be an option
#else
#	ifndef DELITE
		CP(Proximity/Hub/Proximity.cfg, CFGDEVICE/Prox.cfg)
#	endif
#endif
