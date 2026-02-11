/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2008/11/04 01:29:02 $
 *    $State: Exp $
 *   Purpose: Load script for Backhoe module
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo Backhoe can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
		LD(Backhoe,APPDEVICE/Backhoe)
#	else
		echo Backhoe option is only valid on the CGC
#	endif
#endif
