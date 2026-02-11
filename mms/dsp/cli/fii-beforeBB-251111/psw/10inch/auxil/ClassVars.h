%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: ClassVars.h,v $
 * $Revision: 1.13 $
 *   $Author: olivas $
 *     $Date: 2019/08/05 19:32:11 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */
#define HAS_VIEWS	yes
#define	LOCDATA		yes
#if #class(loaderlp) || #class(ug_loader)
#	define	TRAMMER	PROD_CYCLE=yes CAN_FUEL=yes CAN_ENGHR=yes CAN_TRAM=yes
#else
#	define	TRAMMER STATIONARY=yes
#endif
#ifdef USE_BCM_INFO
#	define EQINFO_VIEW	EQINFOVIEW=yes
#else
#	define EQINFO_VIEW
#endif

#define MOBILE_API
#define DSPINTEG_MANAGER

#ifdef EXCAVMOBILEAPI
#	define MOBILE_API MOBILEAPI=yes
#	define DSPINTEG_MANAGER TRUCKEVENTMANAGER=yes
#endif

#if defined DSPINTEGMANAGER
#	define DSPINTEG_MANAGER TRUCKEVENTMANAGER=yes
#endif

#ifdef EQMT_NOTES
#       define EQMT_NOTES EQMTNOTES=yes
#else
#	define EQMT_NOTES
#endif

#define C_VARS	PSCHECK=yes TRAMMER EQINFO_VIEW MOBILE_API EQMT_NOTES DSPINTEG_MANAGER

