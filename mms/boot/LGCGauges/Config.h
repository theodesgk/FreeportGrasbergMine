/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: latum $
 *     $Date: 2004/06/09 19:11:12 $
 *    $State: Exp $
 *   Purpose: Load GpsHpExcav configuration files.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
#ifdef OPTIONS
#	define OPT	_OPTIONS_=OPTIONS
#else
#	define OPT
#endif

#define LGCGAUGES yes
#define LGCGAU	_LGCGAUGES_=LGCGAUGES


#ifndef ISOPTION
	echo LGCGauges can only be an option
#else
        CP(LGCGauges/wGauges.cfg OPT,CFGDEVICE/wGauges.cfg)
        CP(LGCGauges/gauges.pict OPT,CFGDEVICE/gauges.pict)
        CP(Goic/CLASS/LANGUAGE/w0.cfg LGCGAU OPT,CFGDEVICE/w0.cfg)
        CP(Goic/CLASS/LANGUAGE/w0.bGauges.cfg OPT,CFGDEVICE/w0.bGauges.cfg)
#endif

