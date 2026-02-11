/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Calib.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2011/12/23 21:26:42 $
 *    $State: Exp $
 *   Purpose: Touch screen calibration macros.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef PARENT
#	define PARENT Calib
#endif
symbol	caldone	no
macro	Calib.start Tp calib:1;Calib.1
macro	Calib.0 PARENT.lbl label:'Эхлэхийн тулд "Тохиргоо хийх" товчийг дар'
macro	Calib.1	PARENT.lbl label:'Зyyн дээд буланд дар'
macro	Calib.2 PARENT.lbl label:'Баруун дээд буланд дар'
macro	Calib.3 PARENT.lbl label:'Зyyн доод буланд дар'
macro	Calib.4 PARENT.lbl label:'Баруун доод буланд дар'
macro	Calib.5	PARENT.lbl label:'Хадгалахын тулд "Хийж дууссан" товчийг дарна уу.';Tp calib:0;caldone save
macro	Calib.save PARENT.lbl label:'Тохиргоо хадгалагдсан';caldone no;Tp set
macro	Calib.no PARENT.lbl label:'Тохиргоо хийгдээгyй'
