/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/04/06 18:29:14 $
 *    $State: Exp $
 *   Purpose: Configurations load script for ASTiD interface
 * * * * * * * * * * * * * * * * * * *
 */
#include <Cfg/Device.h>
#ifndef ISOPTION
	echo Astid can only be an option
#else
#	if #arch(goic) || #arch(goiccan) || #arch(cgc)
#		include <Astid/Goic/Config.h>
#	else
		CP(OPT_NAME/OPT_NAME.cfg,CFGDEVICE/OPT_NAME.cfg)
#	endif
#endif
