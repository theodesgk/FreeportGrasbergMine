/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2008/06/11 00:37:46 $
 *    $State: Exp $
 *   Purpose: Load Proximity configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Proximity can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		include <Proximity/Goic/Config.h>
#	        include <math/Config.h>
#	else
#		include <Proximity/Hub/Config.h>
#	endif
#endif
