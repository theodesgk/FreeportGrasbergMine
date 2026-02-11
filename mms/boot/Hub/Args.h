/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Args.h,v $
 * $Revision: 1.3 $
 *   $Author: olson $
 *     $Date: 2003/07/28 18:03:48 $
 *    $State: Exp $
 *   Purpose: Check command line arguments for Hub application.
 * * * * * * * * * * * * * * * * * * *
 */
#if #class(nil) || #class(psw) || defined(OPTION)
	echo 'Required arguments:'
	echo '	CLASS=truck or shovel or ...'
        echo 'Optional arguments:'
	echo '	ID=radio-ID'
	echo '	MODEM=tait1200 or rnet1200 or efj1200 or ...'
	echo '	CHAN=radio-channel-number'
	echo '  OPTIONS=Gps/Moto,Tpms,Vims,Ddec,...'
#elif #arch(mlink) && ID <= 15
	echo '>>> Addresses lower than 15 are reserved ONLY for backbone access points!'
#else
#	if #arch(gspcan)
#		assert module(Can)
#	endif
#	assert args(OK)
#	ifndef CHAN
#		define CHAN 1
#	endif
#endif
