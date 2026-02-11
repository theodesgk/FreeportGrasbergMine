%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: ClassVars.h,v $
 * $Revision: 1.7 $
 *   $Author: dcitron $
 *     $Date: 2019/05/01 22:51:58 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */

/*
 * FUELEQMTMENU is the configuration for behavior for equpment selecting:
 * 0 to use a keyboard to enter equipment Id
 * 1 to use a dynamic menu to select the equipment
 * 2 to use a dynamic menu to select an equipment type and then the equipment
 */
#define FUELEQMTMENU 0

#ifdef EQMT_NOTES
#       define EQMT_NOTES EQMTNOTES=yes
#else
#	define EQMT_NOTES
#endif

#define C_VARS	PSCHECK=yes CAN_FUEL=yes CAN_ENGHR=yes _FUELEQMTMENU_=FUELEQMTMENU EQMT_NOTES
