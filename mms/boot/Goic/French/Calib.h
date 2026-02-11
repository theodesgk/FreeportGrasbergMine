/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Calib.h,v $
 * $Revision: 1.1 $
 *   $Author: zambetis $
 *     $Date: 2011/05/09 22:26:06 $
 *    $State: Exp $
 *   Purpose: Touch screen calibration macros.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef PARENT
#	define PARENT Calib
#endif
symbol	caldone	no
macro	Calib.start Tp calib:1;Calib.1
macro	Calib.0 PARENT.lbl label:'Appuyez sur Etalonner pour commencer'
macro	Calib.1	PARENT.lbl label:'Appuyez dans le coin supérieur gauche'
macro	Calib.2 PARENT.lbl label:'Appuyez dans le coin supérieur droit'
macro	Calib.3 PARENT.lbl label:'Appuyez dans le coin inférieur gauche'
macro	Calib.4 PARENT.lbl label:'Appuyez dans le coin inférieur droit'
macro	Calib.5	PARENT.lbl label:'Appuyez sur Terminé pour enregistrer';Tp calib:0;caldone save
macro	Calib.save PARENT.lbl label:'Etalonnage enregistré';caldone no;Tp set
macro	Calib.no PARENT.lbl label:'Etalonnage non terminé'
