%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: Central.h,v $
 * $Revision: 1.19 $
 *   $Author: mlins $
 *     $Date: 2019/09/24 22:31:23 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 * 
 * This file is intended to be copied to client
 * psw/10inch/ directory and modified there
 *
 */

/* #define NEXTGEN if this a NextGen system */
/*
#define NEXTGEN		yes
*/

/* uncomment this for display of material volume information */
/*
#define USE_BCM_INFO	yes
*/
 
/* uncomment this if client uses alphanumeric operator ids */
/*
#define ALPHNUMOPER	yes
*/
 
/*
 * These are the possible locations (UNIT enum value) an operator may
 * self-assign to.  Up to 12 location types may be defined.
 */
#define	LOCTYPE1	03
#define	LOCTYPE2	04
#define	LOCTYPE3	05
#define	LOCTYPE4	06
#define	LOCTYPE5	07
#define	LOCTYPE6	08

/* Uncomment this if client uses Fatigue interface (currently ASTiD only) */
/*
#if #class(truck) || #class(wtruck) || #class(auxil)
#define SHOWOPSAFEAREA yes
#endif
*/
/* uncomment this if client wants GPS information sent with actions */
/*
#define GPSTAGACT	yes
*/
/* uncomment this to use Enhanced Checklist functionality */
/*
#define ENHANCE_PS	yes
*/
/* uncomment this if client using Static Reason menus.
   Will include 10inch/static/Config.h */
/*
#define STATICRSN	yes
*/
/* Uncomment this if shovel operators can set loading side */
/*
#if #class(excav)
#define LOADSIDE	yes
#endif
*/
/*
 * uncomment this if client wants enable remaining buckets
 * beep control for excavator
 */
/*
#define REMBKTCTRL	yes
*/

/*
 * uncomment this configuration if client using MobilePublicApi
 * on excavator units.
 */
/*
#define EXCAVMOBILEAPI yes
*/

/*
 * uncomment this configuration if client using TruckEventManager
 * on excavator units. (Not required if using EXCAVMOBILEAPI)
 */
/*
#define DSPINTEGMANAGER yes
*/

/*
 * uncomment this if client wants equipment notes.
 */
/*
#define EQMT_NOTES yes
*/

/* 
 * uncomment this if client wants auxiliary equipment
 * to receive trucks en route information 
 */
/*
#define AUX_INFOTRKS yes
*/
/* 
 * uncomment this if client wants trucks
 * to be able to request inpit assignments
 */
/*
#define USE_INPIT yes
*/
