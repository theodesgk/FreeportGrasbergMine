/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1994
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Usage script for IR interface load script.
 * * * * * * * * * * * * * * * * * * *
 */
#if defined(ARG1) && defined(ARG2)
#	assert args(OK)
	/*
	 * This is an ugly hack to avoid interrupt overflows
	 * on IR beacons with the v2.3.1 boot ROM.  IR beacon
	 * modems generate lots of interrupts that cause
	 * a panic while erasing flash EPROM.
	 */
#	if #arch(i80196-5v)
	Rp speed:600 set
#	endif
#else
	echo 'usage:	Ir/All mode side'
	echo '	mode [=] unknown, determines mode from loop master'
	echo '		 shovel or passive, for shovel'
	echo '	         truck or active, for truck'
	echo '	         loader or act/pass, for tramming loader IR'
	echo '	         tunnel, for underground IR'
	echo '	         standalone, for battery powered IR'
	echo '	side [=] right for right-side beacon, ID #1'
	echo '	         left for left-side beacon, ID #2'
	echo '	         loop to use loop-ID'
#endif
