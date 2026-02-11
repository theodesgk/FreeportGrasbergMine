/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Device.h,v $
 * $Revision: 1.6 $
 *   $Author: zambetis $
 *     $Date: 2010/04/27 05:30:13 $
 *    $State: Exp $
 *   Purpose: Define and initialize default memory device icon
 *            and font storage.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ICONDEVICE
#	define ICONDEVICE /pfs/icons
	pfs unaccess:icons
	mkdir ICONDEVICE
#endif

/*
 * Define QVGA screens for nec-5.5 and toshiba-6.0 screens.
 * 640x480 screens otherwise.
 */
#if #arch(d1) || #arch(d2)
#	define SCREEN 320x240
#elif #arch(r2k) || #arch(pe)
#	define SCREEN 800x600
#else
#	define SCREEN 640x480
#endif
