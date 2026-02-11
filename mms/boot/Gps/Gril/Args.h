/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:48 $
 *    $State: Exp $
 *   Purpose: All GPS interfaces must define the type of device
 *            being loaded.
 * * * * * * * * * * * * * * * * * * *
 */
#if #class(nil) || #class(psw)
	echo _CLASS_ is required for GPS interface
#else
#	assert args(OK)
#endif
