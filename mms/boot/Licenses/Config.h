%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.3 $
 *   $Author: dcitron $
 *     $Date: 2014/12/17 22:08:41 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */

/*
 * Please note that the default functionality only attempts to load a license
 * file if it is defined in cli_lic_config.h as CLIENT_LICENSE_1. By default 
 * this variable is not defined and no attempt to load a license will be made. 
 */

#include <Licenses/cli_lic_config.h> 

/*
 * Source folder for licenses
 * Default is /mms/boot/Licenses
 * File path here is relative to client/psw folder
 */
#define SLICFOLDER  Licenses

/* 
 * Destination Folder for licenses
 * Default is SDCard/DispatchPtxb/mms/pfs/etc/Licenses
 * File path here is relative to /SDCard/DispatchPTXB/ folder
 */
#define DLICFOLDER /pfs/etc/Licenses

/*
 * Make Licenses directory on mobile device
 */
#if defined CLIENT_LICENSE_1
	mkdir   DLICFOLDER
#endif

/*
 * Copy licenses to mobile device
 */
#if defined CLIENT_LICENSE_1
	CP(SLICFOLDER/CLIENT_LICENSE_1, DLICFOLDER/CLIENT_LICENSE_1)
#endif

