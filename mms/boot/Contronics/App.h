/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: AppCustom.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Load script for generic interface application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#ifdef SIM
#	define MYAPP APPNAME-Sim
#else
#	ifdef ISOPTION
#		define MYAPP OPT_NAME
#	else
#		define MYAPP APPNAME
#	endif
#endif
  LD(MYAPP,APPDEVICE/MYAPP)
#ifndef ISOPTION
	LD(Macro,APPDEVICE/Macro)
#endif
