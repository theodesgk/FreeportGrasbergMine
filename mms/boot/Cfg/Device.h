/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Device.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2009/05/01 16:01:53 $
 *    $State: Exp $
 *   Purpose: Define and initialize default memory device for
 *            configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef CFGDEVICE
#	if #arch(pe)
#		if #arch(cgc)
#			define CFGDEVICE /pfs/etc/goic
#		else
#			define CFGDEVICE /pfs/etc/hub
#		endif
#		define PECFGDEVICE /pfs/config
		mkdir PECFGDEVICE
#	else
#		define CFGDEVICE /pfs/etc
#		if !(#clean(n) || #clean(no))
			pfs unaccess:etc
#		endif
#	endif
	mkdir CFGDEVICE
	echo Loading Configuration from BOOTDIR...
#endif
