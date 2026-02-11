/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/06/19 15:49:30 $
 *    $State: Exp $
 *   Purpose: Load script for Dataforth vital signs modules.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#if ! #module(GenericDriver)
#	assert module(GenericDriver)
	LD(GenericDriver,APPDEVICE/GenericDriver)
#endif
LD(VitalSigns,APPDEVICE/VitalSigns)
