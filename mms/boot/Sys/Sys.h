/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Sys.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:53 $
 *    $State: Exp $
 *   Purpose: Load script for basic a29k operating system support.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Sys/Device.h>
#if #arch(i80196)
	LD(stdio,SYSDEVICE/stdio)
	LD(rpc,SYSDEVICE/rpc)
#	if #arch(v2.1)
		echo Copying reset from ROM...
		cp rom0/1	SYSDEVICE/1
#	elif #arch(i80196-12v)
		echo Loading reset (12-volt)...
		cp reset_12v	SYSDEVICE/1
#	elif #arch(i80196)
		echo Loading reset (5-volt)...
		cp reset	SYSDEVICE/1
#	endif
	LD(sys,SYSDEVICE/sys)
	LD(Object,SYSDEVICE/Object)
	LD(msg,SYSDEVICE/msg)
	install SYSDEVICE/sys
#endif
