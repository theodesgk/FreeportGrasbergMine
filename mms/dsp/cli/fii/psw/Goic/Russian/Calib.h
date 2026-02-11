/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Calib.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2007/09/19 22:44:25 $
 *    $State: Exp $
 *   Purpose: Touch screen calibration macros.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef PARENT
#	define PARENT Calib
#endif
symbol	caldone	no
macro	Calib.start Tp calib:1;Calib.1
macro	Calib.0 PARENT.lbl label:'Чтобы начать, нажмите КАЛИБРОВКА'
macro	Calib.1	PARENT.lbl label:'Нажмите крайнюю точку в верхнем левом углу'
macro	Calib.2 PARENT.lbl label:'Нажмите крайнюю точку в верхнем правом углу'
macro	Calib.3 PARENT.lbl label:'Нажмите крайнюю точку в нижнем левом углу'
macro	Calib.4 PARENT.lbl label:'Нажмите крайнюю точку в нижнем правом углу'
macro	Calib.5	PARENT.lbl label:'Нажмите ГОТОВО для сохранения';Tp calib:0;caldone save
macro	Calib.save PARENT.lbl label:'Результаты калибровки сохранены';caldone no;Tp set
macro	Calib.no PARENT.lbl label:'Калибровка не завершена'
