/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2009/03/03 20:50:02 $
 *    $State: Exp $
 *   Purpose: Check arguments for microcell radio application.
 *	      The optional first argument sets a fixed radio cell
 *	      number.  If not given, the microcell radio gets its
 *	      cell number from the SSN.
 * * * * * * * * * * * * * * * * * * *
 */
#ifdef ARG1
#	define CELL ARG1
#endif
#ifndef ID
#	define ID 0
#endif
#ifndef CHAN
#	define CHAN 1
#endif
#assert module(Ucell)
#assert args(OK)
