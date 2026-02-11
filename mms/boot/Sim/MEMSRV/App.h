/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/11/18 23:04:47 $
 *    $State: Exp $
 *   Purpose: Load script for Vims Simulator module without interface
 * * * * * * * * * * * * * * * * * * *
 */
 echo in App.h
#ifndef ISOPTION
	echo MEMSVRSim can only be an option
#else
#	include <App/Device.h>
	LD(MEMSRVSim,APPDEVICE/MEMSRVSim)
#endif
