/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: olson $
 *     $Date: 2003/06/27 22:21:40 $
 *    $State: Exp $
 *   Purpose: Load script for Amtech RF tag interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
LD(Amtech,APPDEVICE/RfTag)
#ifdef SCALE
	LD(SCALE,APPDEVICE/SCALE)
#endif
#ifndef ISOPTION
#	include <App/Options.h>
#endif
