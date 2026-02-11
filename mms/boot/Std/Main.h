/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: Main.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Load script for Main partition.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Main/Device.h>
#if #module(Macro)
	LD(Macro,MAINDEVICE/Macro)
#endif
#if #module(rpc)
	LD(rpc,MAINDEVICE/rpc)
#endif
#if #module(Tty)
	LD(Tty,MAINDEVICE/Tty)
#endif
