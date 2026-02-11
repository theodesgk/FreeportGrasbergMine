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
 *   Purpose: 
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpGrader can only be an option
#else
	LD(rpc,APPDEVICE/rpc) 
	LD(HpGpsDatabase,APPDEVICE/HpGpsDatabase)
	LD(QuadTree,APPDEVICE/QuadTree)
	LD(ElevationMap,APPDEVICE/ElevationMap)
	LD(HpGpsUtilities,APPDEVICE/HpGpsUtilities)
	LD(HpGpsGraderUtilities,APPDEVICE/HpGpsGraderUtilities)
	LD(HpGpsCoordinator,APPDEVICE/HpGpsCoordinator)
	LD(HpGpsGraderCoordinator,APPDEVICE/HpGpsGraderCoordinator)
	LD(HpGpsCADCanvas,APPDEVICE/HpGpsCADCanvas)
#       include <HpCommon/Goic/App.h>
# 	include <math/App.h>

#endif  
