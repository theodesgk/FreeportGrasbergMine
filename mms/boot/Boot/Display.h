/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Display.h,v $
 * $Revision: 1.2 $
 *   $Author: latum $
 *     $Date: 2005/04/13 19:11:39 $
 *    $State: Exp $
 *   Purpose: Define the valid color display types, based on
 *	      the display encoded in the `net arch' string.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(d1)
#	define REV_D d1
#	define DISPLAY nec-5.0
#elif #arch(d2)
#	define REV_D d2
#	define DISPLAY toshiba-6.0
#elif #arch(d3)
#	define REV_D d3
#	define DISPLAY vga-10.5
#elif #arch(d4)
#	define REV_D d4
#	define DISPLAY svga-8.4
#else
#	define REV_D d0
#endif
