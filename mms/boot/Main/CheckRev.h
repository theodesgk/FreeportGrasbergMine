%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1999
 *               All Rights Reserved
 *  $RCSfile: CheckRev.h,v $
 * $Revision: 1.5 $
 *   $Author: zambetis $
 *     $Date: 2011/11/30 01:23:14 $
 *    $State: Exp $
 *   Purpose: Insure that the proper boot FLASH version is
 *            loaded before loading the application.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Release/Release.h>
#undef	CONFORMING_VERSION
#if #arch(generic)
echo	"This device is running the `generic' boot ROM"
echo	"If you have already loaded the boot flash, enter"
echo	"`bootme' to run the boot flash."
echo	""
#	include <Boot/Usage.h>
#elif !#arch(pe) && !#arch(gspcan) && !RELEASE_BOOT_CHECK
echo	>>>>>>> The operating system in this device, ARCH,
echo	\	is not current.  To upgrade your operating
echo	\	system to RELEASE_MAJOR.RELEASE_BOOT, type the following command:
echo	""
echo	\	net/Boot/All
#else
#	if #arch(gspcan) && !RELEASE_BOOT_CHECK
        echo	>>>>>>> The operating system in this GSP device, ARCH,
        echo	\	is not current.  An attempt will be made to
        echo	\	load application code conforming to the
        echo	\	system version detected.
#	define	CONFORMING_VERSION PSBV
#	endif
#	if #arch(gspcan) || #arch(hubcan) || #arch(goiccan)
#		assert nomodule(Loop)
#	endif
#	assert args(OK)
#	include <Version.h>
#	include <Boot/Config.h>
#	include <Main/CheckID.h>
	net verbose:y
#endif
