%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Usage.h,v $
 * $Revision: 1.3 $
 *   $Author: latum $
 *     $Date: 2005/04/13 19:11:39 $
 *    $State: Exp $
 *   Purpose: Output boot FLASH usage message.
 * * * * * * * * * * * * * * * * * * *
 */
	echo '	To load the boot FLASH, type the following:'
	echo ''
	echo '	net/Boot/All BOARD NET'
	echo ''
	echo '	BOARD	Board type, one the following'
#if #arch(a29k)
	echo '		171_05xx	Mono GC, rev 0500'
	echo '		171_06xx	Mono GC, rev 0600'
	echo '		171_07xx	Mono GC, rev 0700'
	echo '		171_22		Mono GC, v2.2 boot ROM'
	echo '		171_23		Mono GC, v2.3 boot ROM'
	echo '		187_01xx	HUB, rev 0100'
	echo '		187_02xx	HUB, rev 0200'
	echo '		187_03xx	HUB, rev 0300 (with GpsRTCM support)'
	echo '		187_22		HUB, v2.2 boot ROM'
	echo '		187_23		HUB, v2.3 boot ROM'
	echo '		190_02xx	DSP Platform'
	echo '		205_01xx	GSP, rev 0100'
	echo '		207_01xx	Wit SSR, loop interface'
	echo '		207_02xx	Wit SSR, dual CAN interface'
	echo '		214_01xx	HUB II, dual CAN interface'
	echo '		215_01xx	GSP, dual CAN interface'
	echo '		218_01xx	Mono GC, CAN interface'
	echo '		219_01xx	Bit regenerator'
#endif
#if #arch(arm)
	echo '		231_02xx_can		QVGA CGC, CAN interface'
	echo '		231_02xx_loop		QVGA CGC, loop interface'
	echo '		231_03xx_can		QVGA CGC, CAN interface'
	echo '		231_03xx_loop		QVGA CGC, loop interface'
	echo '		237_0100_can		Proto VGA CGC, CAN interface'
	echo '		237_0100_loop		Proto VGA CGC, loop interface'
	echo '		237_0101_can		VGA 500 NIT CGC, CAN interface'
	echo '		237_0101_loop		VGA 500 NIT CGC, loop interface'
	echo '		237_0102_can		VGA 1000 NIT CGC, CAN interface'
	echo '		237_0102_loop		VGA 1000 NIT CGC, loop interface'
	echo '		247_02xx_mobile		Masterlink mobile hub'
	echo '		247_02xx_repeater	Masterlink repeater hub'
	echo '		247_02xx_cgc		Graphics application processor pod'
	echo '		251_01xx		Angus BRG-II'
	echo '		251_01xx_TMp		Angus BRG-II, with Paradyne TMp interface'
	echo '		099_01xx		XScale test platform'
	echo '		280_01xx		Masterlink II repeater
#endif
#if #arch(sh)
	echo '		225_01xx	Super-H Proto SSR'
	echo '		232_01xx	Super-H Slope Monitor'
#endif
	echo '	NET	Optional upstream network'
	echo '		Slip		Serial port SLIP network'
	echo '		Loop		Token ring LOOP network'
	echo '		Can		CAN bus network'
	echo '		Rp		Narrow band radio network'
