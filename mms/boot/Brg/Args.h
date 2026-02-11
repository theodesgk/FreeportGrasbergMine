/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1997
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.2 $
 *   $Author: gsousa $
 *     $Date: 2019/03/28 19:18:01 $
 *    $State: Exp $
 *   Purpose: Load script for Bit Regenerator
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * First argument selects A or B repeater on a given frequency.
 */
#ifdef ARG1
#	if #arg1(A)
#		define ID 60000
#	elif #arg1(B)
#		define ID 60001
#	else
#		undef ID
#	endif
#endif

/*
 * The optional second argument makes the repeater active
 * on power-up.
 */
#if #arg2(active)
#	define BRGACTIVE yes
#else
#	define BRGACTIVE no
#endif

/*
 * Upstream port is always Rp for now...  In the future, we may
 * want to extend this to support direct connections via the
 * SLIP or F/O ports.
 */
#ifdef ID
#	assert args(OK)
#	define CHAN 1
#	define BRGID ARG1
	echo Loading Bit Regenerator for repeater:BRGID id:ID
#else
        echo 'usage:	net/Brg/All brg [active]'
	echo '	brg	[=] Bit regenerator in pair, A or B'
	echo '	active	[=] Optionally make repeater active on power-up'
	echo '		[=] By default, repeater will be inactive on power-up'
	echo ''
	echo '	Alternately, the following commands configure the bit regenerator'
	echo '	as an MP router with a direct connection to DISPATCH.  Note that'
	echo '	you need a pair of MM fiber-optic modems to use the bit regenerator'
	echo '	as a loop router.'
	echo ''
	echo '	net/Mpr/All slip radio OPTIONS=Brg'
	echo '	net/Mpr/All loop radio OPTIONS=Brg'

#endif
