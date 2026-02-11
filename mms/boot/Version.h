%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Version.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Define the current software version level and some macros
 *            to deal with old boot ROMs.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef _Version_h_
#define _Version_h_
#	include <Release/Release.h>
#	define VERSION 2.6
#	if !defined(RELEASE_MAJOR)
#		define vVERSION	v2.6.000
#		define bVERSION v2.6
#	elif defined(REV)
#		define vVERSION RELEASE_MAJOR.RELEASE_MINOR-REV
#		define bVERSION RELEASE_MAJOR.RELEASE_BOOT-REV
#	else
#		define vVERSION RELEASE_MAJOR.RELEASE_MINOR
#		define bVERSION RELEASE_MAJOR.RELEASE_BOOT
#	endif
#	if #arch(v2.2) || #arch(v2.3) || #arch(v2.4)
#		define LD(module,file)	echo Loading module...\;cp net/module file
#		define CP(module,file)	echo Loading module...\;cp \'net/module\' file
#	else
#		define LD(module,file)	cp net/module file
#		define CP(module,file)	cp \'net/module\' file
#	endif
#endif
