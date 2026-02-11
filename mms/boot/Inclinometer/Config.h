/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.4 $
 *   $Author: zambetis $
 *     $Date: 2009/04/11 01:45:06 $
 *    $State: Exp $
 *   Purpose: Load script for RDInclinometer config
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>

#if #inclinometer(vsms)
	echo Using Vsms (analog) inclinometer...
#	define INCLINOMETER vsms
#elif #inclinometer(rieker)
	echo Using Rieker (digital) inclinometer...
#	define INCLINOMETER rieker
#endif

#ifdef INCLMOUNT
#	define MOUNTARGS _MOUNT_=INCLMOUNT
#else
#	define MOUNTARGS
#endif

#if !#inclinometer(none)
#	if #inclinometer(rieker)
#		include <Main/GspPort.h>
		CP(Inclinometer/RDIDevice.cfg _GSPPORT_=GSPPORT, CFGDEVICE/RDIDevice.cfg)
#	endif
	CP(Inclinometer/Inclinometer.cfg _OPTIONS_=OPTIONS _INCLINOMETER_=INCLINOMETER MOUNTARGS, CFGDEVICE/Inclinometer.cfg)
#endif

