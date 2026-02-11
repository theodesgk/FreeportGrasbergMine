/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/08/31 17:12:26 $
 *    $State: Exp $
 *   Purpose: Load script for Komatsu PLM interface.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
LD(FuelMetrix,APPDEVICE/FuelMetrix)
#ifndef ISOPTION
	LD(Macro,APPDEVICE/Macro)
#endif
