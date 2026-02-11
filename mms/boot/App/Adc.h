/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Adc.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Load the ADC library if necessary.  For the a29k, the
 *            ADC library is in the boot flash, so we don't need
 *            to load it into the APP partition.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef _Adc_h_
#define _Adc_h_
#if ! #arch(a29k)
	LD(Adc,APPDEVICE/Adc)
#endif
#endif
