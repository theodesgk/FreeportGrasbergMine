%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2008/06/11 00:37:46 $
 *    $State: Exp $
 *   Purpose: Load script for HpDrill modules
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo GpsHpDrill can only be an option
#else
	LD(rpc,APPDEVICE/rpc) 
	LD(HpGpsDatabase,APPDEVICE/HpGpsDatabase)
	LD(QuadTree,APPDEVICE/QuadTree)
	LD(ElevationMap,APPDEVICE/ElevationMap)
	LD(HpGpsUtilities,APPDEVICE/HpGpsUtilities)
	LD(HpGpsDrillUtilities,APPDEVICE/HpGpsDrillUtilities)
	LD(HpGpsCoordinator,APPDEVICE/HpGpsCoordinator)
	LD(HpGpsDrillCoordinator,APPDEVICE/HpGpsDrillCoordinator)
	LD(HpGpsCADCanvas,APPDEVICE/HpGpsCADCanvas)
#       include <HpCommon/Goic/App.h>
#	include <math/App.h>

#endif  
