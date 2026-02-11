/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/01/12 21:30:59 $
 *    $State: Exp $
 *   Purpose: Load script for Plm Simulator module without interface
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo PlmSim can only be an option
#else
#	include <App/Device.h>
	LD(PlmIIISim,APPDEVICE/PlmIIISim)
#endif
