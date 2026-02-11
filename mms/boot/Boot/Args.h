%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.3 $
 *   $Author: latum $
 *     $Date: 2005/04/13 19:11:39 $
 *    $State: Exp $
 *   Purpose: Check command line arguments for installing
 *            boot block.
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * We're going to remove all assertions about arch() below.
 * Save the software version.
 */
#if #arch(v2.2)
#	assert savearch(v2.2)
#elif #arch(v2.3)
#	assert savearch(v2.3)
#elif #arch(v2.4)
#	assert savearch(v2.4)
#elif #arch(v2.5)
#	assert savearch(v2.5)
#else
#	assert savearch(v2.6)
#endif

/*
 * Check for specific board numbers given as first argument.
 * Assert architecture type for each of these board types.
 */
#if !defined(ARG1)
#	define ARG1
#elif #arg1(171_22)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goic)
#	assert arch(r22)
#elif #arg1(171_23)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goic)
#	assert arch(r23)
#elif #arg1(171_05xx)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goic)
#	assert arch(r5)
#elif #arg1(171_06xx)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goic)
#	assert arch(r6)
#elif #arg1(171_07xx) || #arg1(171-0702)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goic)
#	assert arch(r7)
#elif #arg1(187_22)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r22)
#elif #arg1(187_23)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r23)
#elif #arg1(187_23_stas)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r23s)
#elif #arg1(187_01xx)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r1)
#elif #arg1(187_01xx_stas)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r1s)
#elif #arg1(187_02xx)|| #arg1(187-0201)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r2)
#elif #arg1(187_02xx_stas)|| #arg1(187-0201-stas)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r2s)
#elif #arg1(187_03xx)|| #arg1(187-0301)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hub)
#	assert arch(r3)
#elif #arg1(190_02xx) || #arg1(190-0203)
#	unassert arch
#	assert arch(a29k)
#	assert arch(dsp)
#elif #arg1(205_01xx) || #arg1(205-0104)
#	unassert arch
#	assert arch(a29k)
#	assert arch(gsp)
#elif #arg1(205_01xx_stas) || #arg1(205-0104-stas)
#	unassert arch
#	assert arch(a29k)
#	assert arch(gsp)
#	assert arch(r1s)
#elif #arg1(207_01xx) || #arg1(207-0101)
#	unassert arch
#	assert arch(a29k)
#	assert arch(ssloop)
#elif #arg1(207_02xx) || #arg1(207-0201)
#	unassert arch
#	assert arch(a29k)
#	assert arch(sscan)
#elif #arg1(214_01xx) || #arg1(214-0100)
#	unassert arch
#	assert arch(a29k)
#	assert arch(hubcan)
#elif #arg1(215_01xx) || #arg1(215-0100)
#	unassert arch
#	assert arch(a29k)
#	assert arch(gspcan)
#elif #arg1(218_01xx) || #arg1(218-0100)
#	unassert arch
#	assert arch(a29k)
#	assert arch(goiccan)
#elif #arg1(219_01xx) || #arg1(219-0100)
#	unassert arch
#	assert arch(a29k)
#	assert arch(brg)
#elif #arg1(221_01xx) || #arg1(221-0100)
#	unassert arch
#	assert arch(a29k)
#	assert arch(colorgc)
#elif #arg1(225_01xx) || #arg1(225-0100)
#	unassert arch
#	assert arch(sh)
#	assert arch(shssr)
#elif #arg1(231_01xx)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r1)
#	ifndef DISPLAY
#		define DISPLAY nec-5.5
#		assert display(nec-5.5)
#	endif
#elif #arg1(231_02xx_can) || #arg1(231_02xx)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r2c)
#	ifndef DISPLAY
#		define DISPLAY nec-5.5
#		assert display(nec-5.5)
#	endif
#elif #arg1(231_02xx_loop)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r2l)
#	ifndef DISPLAY
#		define DISPLAY nec-5.5
#		assert display(nec-5.5)
#	endif
#elif #arg1(231_03xx_can)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r3c)
#	ifndef DISPLAY
#		define DISPLAY toshiba-6.0
#		assert display(toshiba-6.0)
#	endif
#elif #arg1(231_03xx_loop)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r3l)
#	ifndef DISPLAY
#		define DISPLAY toshiba-6.0
#		assert display(toshiba-6.0)
#	endif
#elif #arg1(232_01xx)
#	unassert arch
#	assert arch(sh)
#	assert arch(slope)
#elif #arg1(237_0100_can)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b100c)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(237_0100_loop)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b100l)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(237_0101_can)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b101c)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(237_0102_can)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b102c)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(237_0101_loop)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b101l)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(237_0102_loop)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(b102l)
#	ifndef DISPLAY
#		define DISPLAY vga-10.5
#		assert display(vga-10.5)
#	endif
#elif #arg1(247_02xx_cgc)
#	unassert arch
#	assert arch(arm)
#	assert arch(cgc)
#	assert arch(r2k)
#	ifndef DISPLAY
#		define DISPLAY svga-8.4
#		assert display(svga-8.4)
#	endif
#elif #arg1(247_02xx_mobile) || #arg1(247_02xx_m)
#	unassert arch
#	assert arch(arm)
#	assert arch(mlink)
#	assert arch(r2m)
#elif #arg1(247_02xx_repeater) || #arg1(247_02xx_r)
#	unassert arch
#	assert arch(arm)
#	assert arch(mlink)
#	assert arch(r2r)
#elif #arg1(251_01xx)
#	unassert arch
#	assert arch(arm)
#	assert arch(angus)
#	assert arch(r1)
#elif #arg1(251_01xx_TMp)
#	unassert arch
#	assert arch(arm)
#	assert arch(angus)
#	assert arch(r1t)
#elif #arg1(099_01xx)
#	unassert arch
#	assert arch(arm)
#	assert arch(xscale)
#	assert arch(r1)
#elif #arg1(280_01xx)
#	unassert arch
#	assert arch(arm)
#	assert arch(mlink2)
#	assert arch(r1r)
#else
	echo Unknown board architecture: ARG1
#	undef ARG1
#endif

/*
 * Determine an appropriate upstream port for running
 * the boot flash INSTALL program if none is explicitly
 * given in second argument.
 */
#ifndef ARG2
#	if #arch(goic)
#		assert arg2(Loop)
#	elif #arch(gsp)
#		assert arg2(Loop)
#	elif #arch(ssloop)
#		assert arg2(Loop)
#	elif #arch(sscan)
#		assert arg2(Can)
#	elif #arch(goiccan)
#		assert arg2(Can)
#	elif #arch(angus) && #arch(r1t)
#		assert arg2(TMp)
#	else
#		assert arg2(Slip)
#	endif
#endif

/*
 * Define the upstream port for the Install program.
 */
#ifndef UP
#	if #arg2(Slip)
#		assert up(Slip)
#		define UP Slip
#	elif #arg2(Loop)
#		assert up(Loop)
#		define UP Loop
#	elif #arg2(Can)
#		assert up(Can)
#		define UP Can
#	elif #arg2(Rp)
#		assert up(Rp)
#		define UP Rp
#	elif #arg2(Wit)
#		assert up(Wit)
#		define UP Wit
#	elif #arg2(TMp)
#		assert up(TMp)
#		define UP TMp
#	else
#		echo Unknown upstream network ARG2
#	endif
#endif
#include <Boot/Config.h>
#if #savearch(v2.2)
#	assert arch(v2.2)
#elif #savearch(v2.3)
#	assert arch(v2.3)
#elif #savearch(v2.4)
#	assert arch(v2.4)
#elif #savearch(v2.5)
#	assert arch(v2.5)
#else
#	assert arch(v2.6)
#endif
#if !defined(PRODUCT) || !defined(ARG1)
#	include <Boot/Usage.h>
#elif #arch(cgc) && !defined(DISPLAY)
	echo '>>> A color GC requires one of the following DISPLAY types <<<'
	echo '    nec-5.5'
	echo '    toshiba-6.0'
	echo '    vga-10.5'
	echo '    svga-8.4'
#else
#	include <Cfg/ModemType.h>
#	if #arch(slope)
		/*
		 * Slope monitors must have a defined ID, since
		 * we want to store a reliable value in boot FLASH.
		 */
#		if !defined(MODEM)
			echo '...Assuming ssm9600 modem configuration'
#			define MODEM ssm9600
#			define modem(ssm9600)
#			define MODEM_TYPE m16
#		endif
#		assert args(OK)
#	else
		/*
		 * For now, we'll assume a default modem of 1200 baud when
		 * loading the following products which must have a modem.
		 */
#		if !defined(MODEM) \
		&&  (#arch(hub) || #arch(hubcan) || #arch(dsp)) \
		&& !(#arch(r23s) || #arch(r1s) || #arch(r2s))
			echo 'WARNING:	You do not have a modem defined'
			echo '		Assuming tait9600 modem configuration'
#			define MODEM tait9600
#			assert modem(tait9600)
#			define MODEM_TYPE m12
#		endif
#		assert args(OK)
#	endif
#	if #args(OK)
#		include <Version.h>
#		if #arch(v2.5) || #arch(v2.6)
			net verbose:y
#		endif
#	endif
#endif
