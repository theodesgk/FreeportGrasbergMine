/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Interface.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: interface definition for generic "Statex" (monitor) interfaces
 * * * * * * * * * * * * * * * * * * *
 */

in	STATEX-QUERY	0x1c0	sdb,s	SQ.$3 $1 $2 $3
in	STATEX-XMIT	0x1c4	ddb	SX.$3 $1 $2 $3
out	STATEX-ALARM	0x1c1	ds[f][b]b	sendto up
out	STATEX-DATA	0x1c3	s[f][b]b	sendto up
#if #statex(statex)
#	include <Statex/StatexRpcs.h>
#else
in	SQ.0	0x1c0	sdb,s	sendto Statex
in	SX.0	0x1c4	ddb	sendto Statex
#endif
#if #statex(Tci)
in	SQ.1	0x1c0	sdb,s	Tci queryIndex:$2 ; return $(query:$1)
in	SX.1	0x1c4	ddb	Tci xmitCount:$1 xmitSecs:$2
#else
in	SQ.1	0x1c0	sdb,s	sendto Tci
in	SX.1	0x1c4	ddb	sendto Tci
#endif
#if 0
#if #statex()
in	SQ.2	0x1c0	sdb,s	
in	SX.2	0x1c4	ddb	
#else
in	SQ.2	0x1c0	sdb,s	sendto none
in	SX.2	0x1c4	ddb	sendto none
#endif
#endif
#if #statex(D575)
in	SQ.3	0x1c0	sdb,s	D575
in	SX.3	0x1c4	ddb	D575
#else
in	SQ.3	0x1c0	sdb,s	sendto D575
in	SX.3	0x1c4	ddb	sendto D575
#endif
#if #statex(PlmII)
#	include <PlmII/StatexRpcs.h>
#else
in	SQ.4	0x1c0	sdb,s	sendto PlmII
in	SX.4	0x1c4	ddb	sendto PlmII
#endif
#if 0
#if #statex()
in	SQ.5	0x1c0	sdb,s	
in	SX.5	0x1c4	ddb	
#else
in	SQ.5	0x1c0	sdb,s	sendto 
in	SX.5	0x1c4	ddb	sendto 
#endif
#if #statex()
in	SQ.6	0x1c0	sdb,s	
in	SX.6	0x1c4	ddb	
#else
in	SQ.6	0x1c0	sdb,s	sendto 
in	SX.6	0x1c4	ddb	sendto 
#endif
#endif
