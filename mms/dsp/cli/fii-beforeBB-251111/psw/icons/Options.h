/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Options.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:55 $
 *    $State: Exp $
 *   Purpose: Include the `Icon.h' files for all options specified
 *            in the `OPTIONS' command line variable.
 * * * * * * * * * * * * * * * * * * *
 */
#define ISOPTION
#ifdef OPT1
#	define OPT_FILE	<OPT1/Icon.h>
#	define OPT_NAME OPT1
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT2
#	define OPT_FILE	<OPT2/Icon.h>
#	define OPT_NAME OPT2
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT3
#	define OPT_FILE	<OPT3/Icon.h>
#	define OPT_NAME OPT3
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT4
#	define OPT_FILE	<OPT4/Icon.h>
#	define OPT_NAME OPT4
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT5
#	define OPT_FILE	<OPT5/Icon.h>
#	define OPT_NAME OPT5
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT6
#	define OPT_FILE	<OPT6/Icon.h>
#	define OPT_NAME OPT6
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT7
#	define OPT_FILE	<OPT7/Icon.h>
#	define OPT_NAME OPT7
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
#ifdef OPT8
#	define OPT_FILE	<OPT8/Icon.h>
#	define OPT_NAME OPT8
#	include OPT_FILE
#	undef OPT_FILE
#	undef OPT_NAME
#endif
