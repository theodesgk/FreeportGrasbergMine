/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Adc.h,v $
 * $Revision: 1.4 $
 *   $Author: zambetis $
 *     $Date: 2009/05/07 18:35:44 $
 *    $State: Exp $
 *   Purpose: Instantiate analog to digital converter object.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef _Adc_h_
#define _Adc_h_
/*
 * The 205/207/215 board GSPs have no ADC , so don't create an
 * ADC for it.  The DSPPlatform and Bit Regenerator has an i2c ADC which
 * must specify its address.
 */
#if (#arch(dsp) || #arch(brg))
	module	Adc
	object	Adc addr:4
#elif #arch(ssloop) || #arch(sscan)
	module	Adc
	object	Adc addr:2
#elif (#arch(cgc) || #arch(angus)) && !(#arch(r2k) || #arch(pe))
	module	Mcp
	object	Mcp
#elif #arch(hub) || #arch(hubcan) || #arch(goic) || #arch(goiccan) || #arch(slope)
	module	Adc
	object	Adc
#endif
#endif
