/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2008/12/12 23:30:08 $
 *    $State: Exp $
 *   Purpose: Load script for Amtech RF tag interface
 *            pre-rail (underground) version.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
LD(AmtechSingle,APPDEVICE/RfTag)
#ifdef SCALE
	LD(SCALE,APPDEVICE/SCALE)
#endif
