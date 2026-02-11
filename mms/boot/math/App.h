%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:55 $
 *    $State: Exp $
 *   Purpose: Load script for Graphical Operator Interface.
 * * * * * * * * * * * * * * * * * * *
 */
/* math library */
echo loading math library ...
CP(math,APPDEVICE/math)

/* tables for interpolation */
#include <Cfg/Device.h>
CP(math/sine.tbl,CFGDEVICE/sine.tbl)
CP(math/cosine.tbl,CFGDEVICE/cosine.tbl)
CP(math/arcsine.tbl,CFGDEVICE/arcsine.tbl)
CP(math/arccosine.tbl,CFGDEVICE/arccosine.tbl)
CP(math/arctangent.tbl,CFGDEVICE/arctangent.tbl)
CP(math/sqrt.tbl,CFGDEVICE/sqrt.tbl)
