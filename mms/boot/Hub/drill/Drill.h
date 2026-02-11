/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Drill.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Drill interface configuration file for defining
 *            shaft encoder interface, and calibration constants.
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * Number of shaft encoder ticks per measurement.
 */
#define SHAFTPERSAMPLE	4

/*
 * Number of shaft encoder ticks per unit measurement (feet or meters).
 * Note that the current shaft encoders have 20 counts per revolution.
 * Thus, this number should be:
 *
 * (20 ticks) / (sprocket circumference)
 */
#define SHAFTPERDIST	3.69

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
 * Define the values that get computed for each of the five
 * drill profiles.
 */
#define PROF0	$(/ MSECSTOPROFILE $(sampTimer:1))
#define PROF1	$(achan:5)
#define PROF2	$(achan:3)
#define PROF3	$(achan:4)
#define PROF4	$(achan:1)
