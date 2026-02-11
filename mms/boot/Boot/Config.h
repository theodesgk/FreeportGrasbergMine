/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.11 $
 *   $Author: dcitron $
 *     $Date: 2012/12/05 08:01:25 $
 *    $State: Exp $
 *   Purpose: Device specific configuration options for creating
 *	      boot FLASH images.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(Rom) || #arch(Rom_2)
#	if #arch(a29k)
#		define RESET_MEM_ADDR	0x00
#		define RESET_MEM_SIZE	0x80
#		define BOOT_MEM_ADDR	0x80
#		define BOOT_MEM_SIZE	0x1ff80
#	elif #arch(arm)
#		define RESET_MEM_ADDR	0x00000000
#		define RESET_MEM_SIZE	0x00000800
#		define BOOT_MEM_ADDR	0x00000800
#		define BOOT_MEM_SIZE	0x1f800
#		if #arch(Rom)
#		    define FLASH_TYPE	FPGA
#		else
#		    define FLASH_TYPE	GAL
#		endif
#	else
#		define RESET_MEM_ADDR	0x00
#		define RESET_MEM_SIZE	0x800
#		define BOOT_MEM_ADDR	0x800
#		define BOOT_MEM_SIZE	0x1f800
#	endif
#	define PRODUCT generic
#	assert module(pty)
#	assert module(ObjSh)
#	assert module(Slip)
#	assert module(Boot)
#elif #arch(goic)
#	define PRODUCT goic
#	if #arch(v2.2) || #arch(r22)
#		define REV	r22
#		define BOARD	171-0600
#		assert module(ObjSh)
#		assert module(Adc0808)
#	elif #arch(v2.3) || #arch(r23) || #arch(r23b)
#		define REV	r23
#		define BOARD	171-0600
#		assert module(Adc0808)
#	elif #arch(r5)
#		define REV	r5
#		define BOARD	171-0500
#		assert module(Adc0808)
#		define NO_XILINX
#	elif #arch(r6)
#		define REV	r6
#		define BOARD	171-0600
#		assert module(Adc0808)
#	elif #arch(r7)
#		define REV	r7
#		define BOARD	171-0700
#		assert module(Adc7858)
#	endif
#	assert module(Loop)
#	assert module(Vga)
#elif #arch(hub)
#	define PRODUCT hub
#	if #arch(v2.2) || #arch(r22)
#		define REV	r22
#		define BOARD	187-0100
#		assert module(ObjSh)
#		assert module(Adc0808)
#	elif #arch(v2.3) || #arch(r23)
#		define REV	r23
#		define BOARD	187-0100
#		assert module(Adc0808)
#	elif #arch(r23s)
#		define REV	r23s
#		define BOARD	187-0100
#		assert module(Adc0808)
#		assert module(Stas)
#	elif #arch(r1)
#		define REV	r1
#		define BOARD	187-0100
#		assert module(Adc0808)
#	elif #arch(r1s)
#		define REV	r1s
#		define BOARD	187-0100
#		assert module(Adc0808)
#		assert module(Stas)
#	elif #arch(r2)
#		define REV	r2
#		define BOARD	187-0200
#		assert module(Adc7858)
#	elif #arch(r2s)
#		define REV	r2s
#		define BOARD	187-0200
#		assert module(Adc7858)
#		assert module(Stas)
#	elif #arch(r3)
#		define REV	r3
#		define BOARD	187-0300
#		assert module(Adc7858)
#	endif
#	assert module(Loop)
#	if !#module(Stas)
#		assert module(Rp)
#	endif
#elif #arch(dsp)
#	define PRODUCT	dsp
#	define REV	r2
#	define BOARD	190-0200
#	assert module(Loop)
#	assert module(AdcI2C)
#	define ADC_ADDR 4
#	assert module(Rp)
#elif #arch(gsp)
#	define PRODUCT	gsp
#	define BOARD	205-0100
#	assert module(Loop)
#	if #arch(r1s)
#		define REV	r1s
#		assert module(Stas)
#	else
#		define REV	r1
#	endif
#elif #arch(ssloop)
#	define PRODUCT	ssloop
#	define REV	r1
#	define BOARD	207-0100
#	assert module(Loop)
#	assert module(Wit)
#	assert module(AdcI2C)
#	define ADC_ADDR 2
#elif #arch(sscan)
#	define PRODUCT	sscan
#	define REV	r2
#	define BOARD	207-0200
#	assert module(Can_2)
#	assert module(Wit)
#	assert module(AdcI2C)
#elif #arch(hubcan)
#	define PRODUCT	hubcan
#	define REV	r1
#	define BOARD	214-0100
#	assert module(flash)
#	assert module(Adc7858)
#	assert module(Can_2)
#	assert module(Rp)
#elif #arch(gspcan)
#	define PRODUCT	gspcan
#	define REV	r1
#	define BOARD	215-0100
#	assert module(Can_2)
#elif #arch(goiccan)
#	define PRODUCT	goiccan
#	define REV	r1
#	define BOARD	218-0100
#	assert module(Can)
#	assert module(AdcI2C)
#	define ADC_ADDR 0
#	assert module(Vga)
#elif #arch(brg)
#	define PRODUCT	brg
#	define REV	r1
#	define BOARD	219-0100
#	assert module(Loop)
#	assert module(Rp)
#	assert module(Nfs)
#	assert module(AdcI2C)
#	define ADC_ADDR 4
#elif #arch(colorgc)
#	define PRODUCT	colorgc
#	define REV	r1
#	define BOARD	221-0100
#	assert module(Vga)
#elif #arch(ssr)
#	define PRODUCT	ssr
#	define REV	r1
#	assert module(Loop)
#elif #arch(cgc)
#	define PRODUCT	cgc
#	if #display(nec-5.5)
#		define REV_D d1
#	elif #display(toshiba-6.0)
#		define REV_D d2
#	elif #display(vga-10.5)
#		define REV_D d3
#	elif #display(svga-8.4)
#		define REV_D d4
#	elif defined(DISPLAY)
#		undef DISPLAY
#	else
#		include <Boot/Display.h>
#	endif
#	if #arch(r1)
#		define REV	r1
#		define BOARD	231-0100
#		define FLASH_TYPE FPGA
#	elif #arch(r2c) || #arch(r2)
#		define REV	r2c
#		define BOARD	231-0200-can
#		define FLASH_TYPE FPGA
#		assert module(Can)
#	elif #arch(r2l)
#		define REV	r2l
#		define BOARD	231-0200-loop
#		define FLASH_TYPE FPGA
#		assert module(Loop)
#	elif #arch(r3c)
#		define REV	r3c
#		define BOARD	231-0300-can
#		define FLASH_TYPE FPGA
#		assert module(Can)
#	elif #arch(r3l)
#		define REV	r3l
#		define BOARD	231-0300-loop
#		define FLASH_TYPE FPGA
#		assert module(Loop)
#	elif #arch(b1c) || #arch(b100c)
#		define REV	b100c
#		define BOARD	237-0100-can
#		define FLASH_TYPE FPGA
#		assert module(Can)
#	elif #arch(b101c)
#		define REV	b101c
#		define BOARD	237-0101-can
#		define FLASH_TYPE FPGA
#		assert module(Can)
#	elif #arch(b102c)
#		define REV	b102c
#		define BOARD	237-0102-can
#		define FLASH_TYPE FPGA
#		assert module(Can)
#	elif #arch(b1l) || #arch(b100l)
#		define REV	b100l
#		define BOARD	237-0100-loop
#		define FLASH_TYPE FPGA
#		assert module(Loop)
#	elif #arch(b101l)
#		define REV	b101l
#		define BOARD	237-0101-loop
#		define FLASH_TYPE FPGA
#		assert module(Loop)
#	elif #arch(b102l)
#		define REV	b102l
#		define BOARD	237-0102-loop
#		define FLASH_TYPE FPGA
#		assert module(Loop)
#	elif #arch(r2k)
#	        define REV	r2k
#	        define BOARD	247-1200
#	        assert module(CanDual)
#	endif
#	assert module(Vga)
#	if !#arch(r2k)
#		assert module(Mcp)
#       endif
#elif #arch(slope)
#	define REV	r1
#	define BOARD	232-0100
#	define PRODUCT	slope
#	define NO_XILINX
#	assert module(Adc)
#	assert module(Rp)
#elif #arch(shssr)
#	define REV	r1
#	define BOARD	225-0100
#	define PRODUCT	shssr
#	define NO_XILINX
#elif #arch(mlink)
	/*
	 * Distinguish between mobile and repeater versions of the
	 * Masterlink using board revision.  The PowerManager object
	 * uses the board revision number to select designs which
	 * have power management hardware.
	 */
#	define PRODUCT	mlink
#	assert module(Ether)
#	if !#prismradio(NONE)
#		assert module(Prism)
#	endif
#	if #arch(r2m)
#		define REV	r2m
#		define BOARD	247-1200
#		assert module(CanDual)
#	else
#		define REV	r2r
#		define BOARD	247-0200
#	endif
#elif #arch(mlx)
#	define PRODUCT	mlx
#	define REV	r1
#	assert module(Ether)
#	assert module(Prism)
#	assert module(Can)
#elif #arch(ptx)
#	define PRODUCT	ptx
#	define REV	r1
#	assert module(Prism)
#	assert module(Can)
#elif #arch(ptxb) || #arch(ptxbhub)
#	define PRODUCT	ptx
#	define REV	r2
#	assert module(Ether)
#	assert module(Can)
/* For underground mines that use SlipMp we don't want to force ether */
#   ifndef UP
#	assert up(Ether)
#	define UP	Ether
#   endif
#elif #arch(angus)
#   if #arch(r1t)
#	define REV	r1t
#	assert module(TMp)
#   else
#	define REV	r1
#   endif
#	define BOARD	251-0100
#	define PRODUCT	angus
#	assert module(Ether)
#	assert module(Mcp)
#	assert module(Rp)
#elif #arch(xscale)
#	define REV	r1
#	define BOARD	099-0100
#	define PRODUCT	xscale
#	define FLASH_TYPE 5v
#	define NO_XILINX
#elif #arch(mlink2)
#	define REV r1r
#	define BOARD 280-0100
#	define PRODUCT	mlink2
#	assert module(Ether)
#	assert module(Prism)
#endif
#ifndef FLASH_TYPE
#	if #arch(arm)
#		define FLASH_TYPE GAL
#	else
#		define FLASH_TYPE 5v
#	endif
#endif
#if #arch(hubcan) || #arch(goic)
#	define RAM0_ADDR	0x40080000
#	define RAM0_SIZE	0x00040000
#	define RAM1_ADDR	0x400c0000
#	define RAM1_SIZE	0x00010000
#	define DRAM_SIZE	0x00200000
#elif #arch(a29k)
#	define RAM0_ADDR	0x40030000
#	define RAM0_SIZE	0x00040000
#	define RAM1_ADDR	0x40070000
#	define RAM1_SIZE	0x00010000
#	define DRAM_SIZE	0x00080000
#elif #arch(arm)
#	define RAM0_ADDR	0x00100000
#	define RAM0_SIZE	0x00040000
#	define RAM1_ADDR	0x00140000
#	define RAM1_SIZE	0x00010000
#	define DRAM_SIZE	0x00400000
#elif #arch(sh)
#	define RAM0_ADDR	0x00140000
#	define RAM0_SIZE	0x00030000
#	define RAM1_ADDR	0x00170000
#	define RAM1_SIZE	0x00010000
#	define DRAM_SIZE	0x00080000
#endif
#define BOOT_ARCH CPU-PRODUCT-bVERSION
