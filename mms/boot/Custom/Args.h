/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/01/05 23:21:11 $
 *    $State: Exp $
 *   Purpose: Check command line arguments for Null application.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef UP
#	echo You must define an upstream port using UP for the Null application
#else
#	assert args(OK)
#	ifndef CHAN
#		define CHAN 1
#	endif
#endif
