/*
 * * * * * * * * * * * * * * * * * * *
 *	DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *				 All Rights Reserved
 *	$RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *	 $Author: olson $
 *	   $Date: 2002/05/17 18:56:46 $
 *	  $State: Exp $
 *	 Purpose: Load configuration files for Graphical operator interface
 * * * * * * * * * * * * * * * * * * *
 */

#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#define OMSCLASS Goic/truck
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
echo Loading config files...
/*
 * Configure the recorder as the default `Main.cfg', and vehicle-control
 * as an alternate Main_VC interface.
 */
#ifdef UP
	cp net/ADTCGC/Main_VC.cfg\ _UP_=UP CFGDEVICE/Main_VC.cfg
        cp net/ADTCGC/MainVC_SP.cfg\ _UP_=UP CFGDEVICE/MainVC_SP.cfg
	cp net/ADTCGC/MainRecorder.cfg\ _UP_=UP CFGDEVICE/MainRecorder.cfg
#else
	cp net/ADTCGC/Main_VC.cfg CFGDEVICE/Main_VC.cfg
        cp net/ADTCGC/MainVC_SP.cfg CFGDEVICE/MainVC_SP.cfg
	cp net/ADTCGC/MainRecorder.cfg CFGDEVICE/MainRecorder.cfg
#endif
cp net/ADTCGC/LANGUAGE/ADTruck.cfg	        CFGDEVICE/ADTruck.cfg
cp net/ADTCGC/LANGUAGE/Kp.cfg			CFGDEVICE/Kp.cfg
cp net/ADTCGC/LANGUAGE/Macro.cfg		CFGDEVICE/Macro.cfg
cp net/ADTCGC/LANGUAGE/WinMgr.cfg		CFGDEVICE/WinMgr.cfg
cp net/ADTCGC/LANGUAGE/w0.cfg			CFGDEVICE/w0.cfg
cp net/ADTCGC/LANGUAGE/w0.Icon.cfg		CFGDEVICE/w0.Icon.cfg
cp net/ADTCGC/LANGUAGE/w0.Text.cfg		CFGDEVICE/w0.Text.cfg
cp net/ADTCGC/LANGUAGE/w0.Sl1.cfg		CFGDEVICE/w0.Sl1.cfg
cp net/ADTCGC/LANGUAGE/w0.Sl2.cfg		CFGDEVICE/w0.Sl2.cfg
cp net/ADTCGC/LANGUAGE/w0.JAVA_PAGE.cfg		CFGDEVICE/w0.JAVA_PAGE.cfg
cp net/ADTCGC/LANGUAGE/w0.Maintainance.cfg	CFGDEVICE/w0.Maintainance.cfg
cp net/ADTCGC/LANGUAGE/w1.cfg			CFGDEVICE/w1.cfg
cp net/ADTCGC/LANGUAGE/w2.cfg			CFGDEVICE/w2.cfg
cp net/ADTCGC/LANGUAGE/w3.cfg			CFGDEVICE/w3.cfg
cp net/ADTCGC/LANGUAGE/w4.cfg			CFGDEVICE/w4.cfg
cp net/ADTCGC/LANGUAGE/w4.mb.cfg		CFGDEVICE/w4.mb.cfg
cp net/ADTCGC/LANGUAGE/w5.cfg			CFGDEVICE/w5.cfg
cp net/ADTCGC/LANGUAGE/w5.mb.cfg		CFGDEVICE/w5.mb.cfg
cp net/ADTCGC/LANGUAGE/w5.send_data.cfg		CFGDEVICE/w5.send_data.cfg
cp net/ADTCGC/LANGUAGE/w6.cfg			CFGDEVICE/w6.cfg
cp net/ADTCGC/LANGUAGE/GAIN_TEST.cfg		CFGDEVICE/GAIN_TEST.cfg
cp net/ADTCGC/LANGUAGE/SAFETY_TEST.cfg		CFGDEVICE/SAFETY_TEST.cfg
cp net/icons/640x480/truck/ready.icon		CFGDEVICE/ready.icon
#include <Cfg/Mainini.h>

