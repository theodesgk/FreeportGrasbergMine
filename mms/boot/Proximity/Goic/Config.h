/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.12 $
 *   $Author: dcitron $
 *     $Date: 2013/12/04 23:17:15 $
 *    $State: Exp $
 *   Purpose: Load Proximity configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Proximity can only be an option
#else
#	define PLSTR _DEVICE_=DEVICE _CLASS_=CLASS

	CP(Proximity/Goic/Proximity.cfg PLSTR,CFGDEVICE/Prox.cfg)
	CP(Proximity/Goic/onOff.cfg PLSTR,CFGDEVICE/onOff.cfg)
#   if !defined(SMALLUI) && !defined(LARGEUI)
       CP(Proximity/Goic/w0.Clock.cfg PLSTR, CFGDEVICE/w0.Clock.cfg)
#      if #option(HpShovel) || #option(HpLoader) || #option(HpDozer) || #option(HpDrill) || #option(HpGrader)
          CP(Proximity/Goic/w0.ProxGps.hp.cfg PLSTR, CFGDEVICE/w0.ProxGps.cfg)
#      else
          CP(Proximity/Goic/w0.ProxGps.lp.cfg PLSTR, CFGDEVICE/w0.ProxGps.cfg)
#      endif
       CP(Proximity/Goic/w0.ProxGpsLight.cfg PLSTR, CFGDEVICE/w0.ProxGpsLight.cfg)
#      if !(#option(HpDozer) || #option(HpDrill) || #option(HpGrader) || #option(HpLoader) || #option(HpShovel) || defined DELITE)
             CP(HpCommon/Goic/ConvMgr.cfg PLSTR,CFGDEVICE/ConvMgr.cfg)
#      endif
#   endif
#endif
