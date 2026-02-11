%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: CheckID.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/08/13 15:18:31 $
 *    $State: Exp $
 *   Purpose: Insure any device with a wireless interface has its ID
 *	      properly specified.
 * * * * * * * * * * * * * * * * * * *
 */
#if #module(Prism) || #module(Rp) || #module(Wit)
#   ifndef ID
#	unassert args(OK)
	echo You must specify an ID for wireless devices.
#   else
#	assert args(OK)
#   endif
#endif
