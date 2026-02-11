/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Device.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Define and initialize default memory device for
 *            embedded driver and mainline support.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef MAINDEVICE
#	define MAINDEVICE /pfs/lib
	mkdir MAINDEVICE
#	if !(#clean(n) || #clean(no))
		pfs unaccess:lib
#	endif
#endif
CP(Release/Rev,/pfs/Rev)
