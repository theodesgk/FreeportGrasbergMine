#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2010/04/27 05:30:13 $
 *    $State: Exp $
 *   Purpose: Load Amtech RF tag configuration files,
 *            pre-rail (underground) version.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION || !#arch(pe.net)
        echo TagReader can only be an option for PTX
#else
	CP(TagReader/TagReader.cfg RFTAGID,CFGDEVICE/TagReader.cfg)
#endif
