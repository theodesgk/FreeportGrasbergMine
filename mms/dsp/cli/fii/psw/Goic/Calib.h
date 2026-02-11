/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Calib.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:45 $
 *    $State: Exp $
 *   Purpose: Touch screen calibration macros.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef PARENT
#	define PARENT Calib
#endif
symbol	caldone	no
macro	Calib.start Tp calib:1;Calib.1
macro	Calib.0 PARENT.lbl label:'Press Calibrate to begin'
macro	Calib.1	PARENT.lbl label:'Press upper left corner'
macro	Calib.2 PARENT.lbl label:'Press upper right corner'
macro	Calib.3 PARENT.lbl label:'Press lower left corner'
macro	Calib.4 PARENT.lbl label:'Press lower right corner'
macro	Calib.5	PARENT.lbl label:'Press Done to save';Tp calib:0;caldone save
macro	Calib.save PARENT.lbl label:'Calibration saved';caldone no;Tp set
macro	Calib.no PARENT.lbl label:'Calibration not done'
