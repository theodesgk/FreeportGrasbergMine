/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Calib.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/04/05 18:03:00 $
 *    $State: Exp $
 *   Purpose: Touch screen calibration macros.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef PARENT
#	define PARENT Calib
#endif
symbol	caldone	no
macro	Calib.start Tp calib:1;Calib.1
macro	Calib.0 PARENT.lbl label:'Tekan Calibrate untuk mulai'
macro	Calib.1	PARENT.lbl label:'Tekan pojok kiri atas'
macro	Calib.2 PARENT.lbl label:'Tekan pojok kanan atas'
macro	Calib.3 PARENT.lbl label:'Tekan pojok kiri bawah'
macro	Calib.4 PARENT.lbl label:'Tekan pojok kanan bawah'
macro	Calib.5	PARENT.lbl label:'Tekan Done untuk menyimpan';Tp calib:0;caldone save
macro	Calib.save PARENT.lbl label:'Kalibrasi tersimpan';caldone no;Tp set
macro	Calib.no PARENT.lbl label:'Kalibrasi tidak selesai'
