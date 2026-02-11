/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.6 $
 *   $Author: zambetis $
 *     $Date: 2009/05/01 16:01:53 $
 *    $State: Exp $
 *   Purpose: Load script for Hub's application partition.
 * * * * * * * * * * * * * * * * * * *
 */
#include <App/Device.h>
#if #arch(pe)
#	include <PortEmbedded/App.h>
#else
#	if #arch(a29k)
		LD(RouterNobridge,APPDEVICE/Router)
#	else
		LD(Router,APPDEVICE/Router)
#	endif
	LD(Vsms,APPDEVICE/Vsms)
#	include <App/Options.h>
#	if #arch(hubcan) || #arch(mlink)
#		include <Spooler/App.h>
#	endif
#	if #module(rpc)
		LD(rpc,APPDEVICE/rpc)
#	endif
#endif
