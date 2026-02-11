%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: ClassVars.h,v $
 * $Revision: 1.8 $
 *   $Author: mlins $
 *     $Date: 2019/04/25 16:56:14 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */
#ifdef EQMT_NOTES
#       define EQMT_NOTES EQMTNOTES=yes
#else
#	define EQMT_NOTES
#endif
#ifdef AUX_INFOTRKS
#       define AUX_INFOTRKS AUXINFOTRKS=yes
#else
#	define AUX_INFOTRKS
#endif
#define C_VARS	PSCHECK=yes CAN_FUEL=yes CAN_ENGHR=yes EQMT_NOTES AUX_INFOTRKS
