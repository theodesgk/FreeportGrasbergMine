/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2016/01/21 22:41:58 $
 *    $State: Exp $
 *   Purpose: Load script for KomtraxPlus driver
 * * * * * * * * * * * * * * * * * * *
 */
#define APPNAME KomtraxPlus

#include <Cfg/Device.h>
#include <Cfg/OMS.h>
echo Loading object configuration MODEL...

#ifndef MODEL
#	define MODEL 830E
#endif

# include <Cfg/Loop.h>
#ifdef MODEL
		CP(MineCare/APPNAME/Main.cfg _MODEL_=MODEL,CFGDEVICE/Main.cfg)
#endif
#   include <Cfg/Mainini.h>
#if !#arch(pe)
        CP(MineCare/EqmtInfo.cfg,CFGDEVICE/EqmtInfo.cfg)
#endif
CP(MineCare/KomtraxPlus/komtrax.cfg MODEL, CFGDEVICE/komtrax.cfg)
