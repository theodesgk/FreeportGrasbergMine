/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2009/08/14 17:45:38 $
 *    $State: Exp $
 *   Purpose: Load script for Microcell manager module
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
	echo UcellMgr can only be an option
#else
	LD(UcellMgr,APPDEVICE/UcellMgr)
#endif
