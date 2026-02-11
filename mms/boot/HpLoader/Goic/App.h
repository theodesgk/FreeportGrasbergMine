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
 *   Purpose: Load script for GpsHpLoader module
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
   echo GpsHpLoader can only be an option
#else
   echo Loading GpsHpApp

  LD(rpc,APPDEVICE/rpc) 
  LD(HpGpsDatabase,APPDEVICE/HpGpsDatabase)
  LD(QuadTree,APPDEVICE/QuadTree)
  LD(ElevationMap,APPDEVICE/ElevationMap)
  LD(HpGpsUtilities,APPDEVICE/HpGpsUtilities)
  LD(HpGpsLoaderUtilities,APPDEVICE/HpGpsLoaderUtilities)
  LD(HpGpsCoordinator,APPDEVICE/HpGpsCoordinator)
  LD(HpGpsLoaderCoordinator,APPDEVICE/HpGpsLoaderCoordinator)
  LD(HpGpsCADCanvas,APPDEVICE/HpGpsCADCanvas)
# include <HpCommon/Goic/App.h>
# include <math/App.h>

#endif  
