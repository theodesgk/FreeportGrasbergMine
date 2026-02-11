/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:53 $
 *    $State: Exp $
 *   Purpose: Load script for Cat TPMS interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#ifndef ISOPTION
	LD(Macro,APPDEVICE/Macro)
#endif
LD(Tpms,APPDEVICE/Tpms)
