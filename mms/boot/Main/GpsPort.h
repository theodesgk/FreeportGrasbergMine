%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: GpsPort.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Check GPS port to insure it's used only once.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(hub) || #arch(hubcan)
#	define GPSPORT	scc1b
#	define RTCMPORT	xil0
#	if #port(scc1b)
#		assert GPSPORT(busy)
#	else
#		assert port(scc1b)
#	endif
#elif #arch(mlink)
#	define GPSPORT	xil1
#	define RTCMPORT	xil0
#	if #port(xil1)
#		assert GPSPORT(busy)
#	else
#		assert port(xil1)
#	endif
#elif #arch(angus)
#	define GPSPORT	cpu3
#	define RTCMPORT	cpu2
#	if #port(cpu3)
#		assert GPSPORT(busy)
#	else
#		assert port(cpu3)
#	endif
#else
#	assert GPSPORT(busy)
#endif
