/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2006/04/06 23:05:05 $
 *    $State: Exp $
 *   Purpose: Load script for DDEC interface application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
LD(EdiDisplay,APPDEVICE/EdiDisplay)
#ifndef ISOPTION
	LD(Macro,APPDEVICE/Macro)
#endif
