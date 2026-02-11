/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.4 $
 *   $Author: latum $
 *     $Date: 2008/03/18 23:25:16 $
 *    $State: Exp $
 *   Purpose: Load script for General Inclinometer libraries
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#include <math/App.h>

#ifndef INCLINOMETER
#       if #arch(hub) || #arch(hubcan)
#		assert inclinometer(vsms)
#	else
#		assert inclinometer(rieker)
#	endif
#endif

#if !#inclinometer(none)
	LD(Inclinometer,APPDEVICE/Inclinometer)
#endif
