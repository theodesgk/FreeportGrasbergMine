/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: StatexRpcs.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: interface definition for generic "Statex" (monitor) interfaces
 * * * * * * * * * * * * * * * * * * *
 */

in	SQ.4	0x1c0	sdb,s	return $(PlmII $1)
in	SX.4	0x1c4	ddb	PlmII xmitCount:$1 xmitSecs:$2
