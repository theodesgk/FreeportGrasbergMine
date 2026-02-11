%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: ClassVars.h,v $
 * $Revision: 1.10 $
 *   $Author: mlins $
 *     $Date: 2019/08/15 12:03:28 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */
#define	LOCDATA		yes
#ifdef USE_BCM_INFO
#	define HAS_VIEWS	yes
#	define	EQINFO_VIEW	EQINFOVIEW=yes
#else
#	define EQINFO_VIEW
#endif
#ifdef EQMT_NOTES
#       define EQMT_NOTES EQMTNOTES=yes
#else
#	define EQMT_NOTES
#endif
#ifdef USE_INPIT
#       define USE_INPIT USEINPIT=yes
#else
#       define USE_INPIT
#endif
#define C_VARS	PSCHECK=yes PROD_CYCLE=yes CAN_FUEL=yes CAN_ENGHR=yes EQINFO_VIEW EQMT_NOTES USE_INPIT
