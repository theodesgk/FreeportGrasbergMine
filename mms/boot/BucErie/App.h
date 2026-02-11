/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.2 $
 *   $Author: dcitron $
 *     $Date: 2012/07/08 07:50:23 $
 *    $State: Exp $
 *   Purpose: Generic GSP application partition load script.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#ifdef ISOPTION
#	include <App/Tty.h>
#else
	LD(Macro,APPDEVICE/Macro)
#endif
