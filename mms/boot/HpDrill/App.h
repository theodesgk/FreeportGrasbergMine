/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2003/02/27 20:11:04 $
 *    $State: Exp $
 *   Purpose: Load script for HpDrill application files
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo HpDrill can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		include <HpDrill/Goic/App.h>
#	else
#		include <HpCommon/Hub/App.h>
#	endif
#endif
