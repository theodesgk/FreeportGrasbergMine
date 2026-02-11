/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.7 $
 *   $Author: imascarenhas $
 *     $Date: 2015/12/17 22:24:16 $
 *    $State: Exp $
 *   Purpose: Load script for MineCare applications
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#ifdef LAZYINTERFACESLOAD
echo Interface Schematic Mechanism Applied.
#endif

#ifdef DRIVERMODULE
#	if !#module(GenericDriver) && !LAZYINTERFACESLOAD
		LD(GenericDriver,APPDEVICE/GenericDriver)
#	assert module(GenericDriver)
#	endif
#	ifndef DRIVERMODULEFILE
#		define	DRIVERMODULEFILE DRIVERMODULE
#	endif
	LD(DRIVERMODULEFILE,APPDEVICE/DRIVERMODULE)
	#ifdef LAZYINTERFACELOAD
		LD(GenericDriver,APPDEVICE/GenericDriver)
	#endif
#	undef DRIVERMODULEFILE
#	undef DRIVERMODULE
#endif
#if #arch(arm) && !#module(MineCare)
  LD(MineCare,APPDEVICE/MineCare)
  LD(ConvMgr, pfs/lib/ConvMgr)
#assert module(MineCare)
#endif
