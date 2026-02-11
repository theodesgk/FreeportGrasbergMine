/*
* * * * * * * * * * * * * * * * * * * *
*  DISPATCH Real-Time Firmware Module
* Copyright (c) Modular Mining Systems, 1982-1995
*                All Rights Reserved
*   $RCSfile: App.h,v $
*  $Revision: 1.1 $
*    $Author: zambetis $
*      $Date: 2011/04/06 18:29:14 $
*     $State: Exp $
*    Purpose: Application libraries load script for Astid Fatigue Management
* * * * * * * * * * * * * * * * * * * *
*/
#include <App/Device.h>
#ifndef ISOPTION
        echo Astid can only be an option
#else
#       if !(#arch(goic) || #arch(goiccan) || #arch(cgc))
		CP(Tty,APPDEVICE/Tty)
#       endif
#endif
