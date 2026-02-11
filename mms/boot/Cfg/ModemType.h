/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: ModemType.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Determine appropriate modem for this device.
 * * * * * * * * * * * * * * * * * * *
 */
#if #arch(gsp) || #arch(gspcan) || #arch(ssloop) || #arch(sscan) || #arch(r23s) || #arch(r1s) || #arch(r2s)
#	define NO_MODEM
#else
#if !defined(MODEM) \
	&&  (#arch(hub) || #arch(hubcan) || #arch(dsp) || #arch(brg) || #arch(slope) || #arch(angus))
#	define HAS_BOOT_MODEM
#	if #arch(m0)
#		define MODEM tait1200
#		assert modem(tait1200)
#	elif #arch(m1)
#		define MODEM efj1200
#		assert modem(efj1200)
#	elif #arch(m2)
#		define MODEM efj1200v
#		assert modem(efj1200v)
#	elif #arch(m3)
#		define MODEM efj9600
#		assert modem(efj9600)
#	elif #arch(m4)
#		define MODEM rnet1200
#		assert modem(rnet1200)
#	elif #arch(m5)
#		define MODEM ge1200
#		assert modem(ge1200)
#	elif #arch(m6)
#		define MODEM moto1200
#		assert modem(moto1200)
#	elif #arch(m7)
#		define MODEM tait3840
#		assert modem(tait3840)
#	elif #arch(m8)
#		define MODEM rnet3840
#		assert modem(rnet3840)
#	elif #arch(m9)
#		define MODEM efj3840r
#		assert modem(efj3840r)
#	elif #arch(m10)
#		define MODEM spec1200
#		assert modem(spec1200)
#	elif #arch(m11)
#		define MODEM pp9600
#		assert modem(pp9600)
#	elif #arch(m12)
#		define MODEM tait9600
#		assert modem(tait9600)
#	elif #arch(m13)
#		define MODEM br3840
#		assert modem(br3840)
#	elif #arch(m14)
#		define MODEM br9600
#		assert modem(br9600)
#	elif #arch(m15)
#		define MODEM ucell9600
#		assert modem(ucell9600)
#	elif #arch(m16)
#		define MODEM ssm9600
#		assert modem(ssm9600)
#	elif #arch(m17)
#		define MODEM ssm1200
#		assert modem(ssm1200)
#	elif #arch(m18)
#		define MODEM tait1200hs
#		assert modem(tait1200hs)
#	elif #arch(m19)
#		define MODEM br1200
#		assert modem(br1200)
#	elif #arch(m20)
#		define MODEM efj1200_5w
#		assert modem(efj1200_5w)
#	elif #arch(m21)
#		define MODEM efj9600_5w
#		assert modem(efj9600_5w)
#	elif #arch(m22)
#		define MODEM tait9600v
#		assert modem(tait9600v)
#	elif #arch(m23)
#		define MODEM efj9600v_5w
#		assert modem(efj9600v_5w)
#	elif #arch(m24)
#		define MODEM brg29600
#		assert modem(brg29600)
#	elif #arch(m25)
#		define MODEM ucell9600_5w
#		assert modem(ucell9600_5w)
#	else
#		if #arch(brg)
#			define MODEM br9600
#			assert modem(br9600)
#		elif #arch(angus)
#			define MODEM brg29600
#			assert modem(brg29600)
#		elif #arch(slope)
#			define MODEM efj9600
#			assert modem(efj9600)
#		else
#			define MODEM tait9600
#			assert modem(tait9600)
#		endif
		echo >>> Modem type is not defined, using MODEM <<<
#	endif
#endif
#if #modem(tait1200)
#	define MODEM_TYPE	m0
#	define MODEM_SPEED	1200
#elif #modem(efj1200)
#	define MODEM_TYPE	m1
#	define MODEM_SPEED	1200
#elif #modem(efj1200v)
#	define MODEM_TYPE	m2
#	define MODEM_SPEED	1200
#elif #modem(efj9600)
#	define MODEM_TYPE	m3
#	define MODEM_SPEED	9600
#elif #modem(rnet1200)
#	define MODEM_TYPE	m4
#	define MODEM_SPEED	1200
#elif #modem(ge1200)
#	define MODEM_TYPE	m5
#	define MODEM_SPEED	1200
#elif #modem(moto1200)
#	define MODEM_TYPE	m6
#	define MODEM_SPEED	1200
#elif #modem(tait3840)
#	define MODEM_TYPE	m7
#	define MODEM_SPEED	3840
#	assert modem(dual)
#elif #modem(rnet3840)
#	define MODEM_TYPE	m8
#	define MODEM_SPEED	3840
#	assert modem(dual)
#elif #modem(efj3840r)
#	define MODEM_TYPE	m9
#	define MODEM_SPEED	3840
#	assert modem(dual)
#elif #modem(spec1200)
#	define MODEM_TYPE	m10
#	define MODEM_SPEED	1200
#elif #modem(pp9600)
#	define MODEM_TYPE	m11
#	define MODEM_SPEED	9600
#elif #modem(tait9600)
#	define MODEM_TYPE	m12
#	define MODEM_SPEED	9600
#elif #modem(br3840)
#	define MODEM_TYPE	m13
#	define MODEM_SPEED	3840
#	assert modem(dual)
#elif #modem(br9600)
#	define MODEM_TYPE	m14
#	define MODEM_SPEED	9600
#	assert modem(dual)
#elif #modem(ucell9600)
#	define MODEM_TYPE	m15
#	define MODEM_SPEED	9600
#elif #modem(ssm9600)
#	define MODEM_TYPE	m16
#	define MODEM_SPEED	9600
#elif #modem(ssm1200)
#	define MODEM_TYPE	m17
#	define MODEM_SPEED	1200
#elif #modem(tait1200hs)
#	define MODEM_TYPE	m18
#	define MODEM_SPEED	1200
#elif #modem(br1200)
#	define MODEM_TYPE	m19
#	define MODEM_SPEED	1200
#	assert modem(dual)
#elif #modem(efj1200_5w)
#	define MODEM_TYPE	m20
#	define MODEM_SPEED	1200
#elif #modem(efj9600_5w)
#	define MODEM_TYPE	m21
#	define MODEM_SPEED	9600
#elif #modem(tait9600v)
#	define MODEM_TYPE	m22
#	define MODEM_SPEED	9600
#elif #modem(efj9600v_5w)
#	define MODEM_TYPE	m23
#	define MODEM_SPEED	9600
#elif #modem(brg29600)
#	define MODEM_TYPE	m24
#	define MODEM_SPEED	9600
#elif #modem(ucell9600_5w)
#	define MODEM_TYPE	m25
#	define MODEM_SPEED	9600
#endif
#endif
