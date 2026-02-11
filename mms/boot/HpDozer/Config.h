/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2003/02/27 20:11:04 $
 *    $State: Exp $
 *   Purpose: Load GpsHpExcav configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpDozer can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		include <HpDozer/Goic/Config.h>
#	else
#		include <HpCommon/Hub/Config.h>
#	endif
#endif
