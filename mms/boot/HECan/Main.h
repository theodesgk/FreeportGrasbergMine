/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: Main.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:49 $
 *    $State: Exp $
 *   Purpose: Load script for Main partition.
 * * * * * * * * * * * * * * * * * * *
 */
#include <Main/Device.h>
#if #arch(i80196)
#	if #arch(12v)
		LD(flash_12v,MAINDEVICE/flash)
#	else
		LD(flash_5v,MAINDEVICE/flash)
#	endif
	LD(i2c,MAINDEVICE/i2c)
	LD(Sp,MAINDEVICE/Sp)
	LD(Slip,MAINDEVICE/Slip)
	LD(Ssn,MAINDEVICE/Ssn)
#	if #module(LoopMaster)
		LD(lc,MAINDEVICE/lc)
		LD(LoopMaster,MAINDEVICE/Loop)
#	else
		LD(lc_small,MAINDEVICE/lc)
		LD(Loop,MAINDEVICE/Loop)
#	endif
#	if #module(Rpx)
		LD(Rpx,MAINDEVICE/Rpx)
#	elif #module(Ucell)
		LD(Ucell,MAINDEVICE/Rp)
#	elif #module(Rp)
		LD(Rp,MAINDEVICE/Rp)
#	endif
#	if ! #nomodule(Adc)
		LD(Adc,MAINDEVICE/Adc)
#	endif
	LD(Main,MAINDEVICE/Main)
	LD(ObjSh,MAINDEVICE/ObjSh)
	LD(pty,MAINDEVICE/pty)
#	if ! #nomodule(float)
		LD(float,MAINDEVICE/float)
#	endif
#endif
#if #module(Macro)
	LD(Macro,MAINDEVICE/Macro)
#endif
#if #module(Tty)
	LD(Tty,MAINDEVICE/Tty)
#endif
