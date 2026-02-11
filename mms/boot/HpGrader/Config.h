/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2003/04/04 18:57:11 $
 *    $State: Exp $
 *   Purpose: 
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpGrader can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		include <HpGrader/Goic/Config.h>
#	else
#		include <HpCommon/Hub/Config.h>
#	endif
#endif
