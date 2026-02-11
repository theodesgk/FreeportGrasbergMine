/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Options.h,v $
 * $Revision: 1.2 $
 *   $Author: olson $
 *     $Date: 2002/10/23 05:27:02 $
 *    $State: Exp $
 *   Purpose: Include the `Config.h' files for all options specified
 *            in the `OPTIONS' command line variable.
 * * * * * * * * * * * * * * * * * * *
 */
#define ISOPTION
#ifdef OPT1
#	define OPT_FILE	<OPT1/Config.h>
#	define OPT_NAME OPT1
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT2
#	define OPT_FILE	<OPT2/Config.h>
#	define OPT_NAME OPT2
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT3
#	define OPT_FILE	<OPT3/Config.h>
#	define OPT_NAME OPT3
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT4
#	define OPT_FILE	<OPT4/Config.h>
#	define OPT_NAME OPT4
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT5
#	define OPT_FILE	<OPT5/Config.h>
#	define OPT_NAME OPT5
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT6
#	define OPT_FILE	<OPT6/Config.h>
#	define OPT_NAME OPT6
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT7
#	define OPT_FILE	<OPT7/Config.h>
#	define OPT_NAME OPT7
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT8
#	define OPT_FILE	<OPT8/Config.h>
#	define OPT_NAME OPT8
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#undef ISOPTION
