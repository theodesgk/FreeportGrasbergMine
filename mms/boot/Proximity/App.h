/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.6 $
 *   $Author: zambetis $
 *     $Date: 2011/09/13 22:09:46 $
 *    $State: Exp $
 *   Purpose: Load script for Proximity module
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Proximity can only be an option
#elif #arch(pe.net)
	echo pe.net detected - skipping loading of objects
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
		LD(ProximityGc,APPDEVICE/ProximityGc)
#               include <HpCommon/Goic/App.h>
#	        include <math/App.h>
#	else
		LD(Proximity,APPDEVICE/Proximity)
#	endif
#endif
