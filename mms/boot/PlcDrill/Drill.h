/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Drill.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/08/20 16:06:16 $
 *    $State: Exp $
 *   Purpose: Drill interface configuration file for defining
 *            shaft encoder interface, and calibration constants.
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * Number of shaft encoder ticks per measurement. (when do we take
 * a sample for A$RATES (profile)
 */
#define SHAFTPERSAMPLE	20

/*
 * Number of shaft encoder ticks per unit measurement (feet or meters).
 * Note that the current shaft encoders have 20 counts per revolution.
 * Thus, this number should be:
 *
 * (20 ticks) / (sprocket circumference)
 */
#define SHAFTPERDIST	4

/*
 * Distance per sample, transmitted in each A$RATES profile.  Set this
 * value to (100*SHAFTPERSAMPLE/SHAFTPERDIST).
 */
#define DISTPERSAMPLE	108

/*
 * Length of added steel, ticks.  This should be an integer
 * value, computed as:
 *
 * (STEELLENGTH dist) * (SHAFTPERDIST ticks/dist)
 */
#define STEELLENGTH	37

/*
 * Compute drilling rate, dist/hour, from raw pulse width
 * in milliseconds.  This should be computed thusly:
 *
 * (3600000 mSecs/hr) / (SHAFTPERDIST ticks/dist)
 */
#define MSECSTORATE	975002.0

/*
 * Compute penetration rate, 0..255, from time since last
 * sample, in milliseconds.  This should be computed thusly:
 *
 * (3600000 mSecs/hr) * (SHAFTPERSAMPLE ticks) * 255
 * -------------------------------------------------
 * (SHAFTPERDIST ticks/dist) * (MAXPENRATE dist/hr)
 */
#define MSECSTOPROFILE	2486255

/* 
 * what kind of drill to we have?
 * these should be binary values which could be combined into a code
 * which could be decoded on the other side
 * 1, 2, 4, 8, 16 etc. 1+4 -> would result into a code 5
 * rotation drill 1
 * hammer drill   2
 *
 * but currently we have just 4 numbers which represent certain 
 * combinations of features and depending on this number certain
 * chunks of code is executed on the Plc, please consilt the
 * current documentation on this: there is really a documentation
 * believe it. :-)
 *
 */
#define DRILLTYPE 1

/*
 * when do we update drilling rate etc.
 */
#define UPDGC_COUNT 2

/*
 * when do we update gauges
 */
#define UPDGAU_COUNT 4

/*
 * Define the values that get computed for each of the five
 * drill profiles. Sent with A$RATES rpc
 */
#define BINARYFAC 64
#define PROF0 $(slot10)                    /* pentr. rate as given from Plc */
#define PROF1 $(/ $(slot6) BINARYFAC)     /* RPM */
#define PROF2 $(/ $(slot7) BINARYFAC)     /* Torque  */
#define PROF3 $(/ $(slot8) BINARYFAC)     /* Pull Down pressure */
#define PROF4 $(/ $(slot9) BINARYFAC)     /* Air bit Pressure */
#define PROF5 $(/ $(slot11) BINARYFAC)    /* vibration 1 */
#define PROF6 $(/ $(slot12) BINARYFAC)    /* vibration 2 */

