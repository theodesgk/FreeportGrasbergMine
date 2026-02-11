/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1996
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.3 $
 *   $Author: dcitron $
 *     $Date: 2015/08/19 19:34:46 $
 *    $State: Exp $
 *   Purpose: Load script for Graphical Operator Interface.
 * * * * * * * * * * * * * * * * * * *
 */
#ifndef ISOPTION
        echo StoreForward can only be an option
#else
#       if !#arch(pe.net) && (#arch(goic) || #arch(goiccan) || #arch(cgc))
#             include <Spooler/App.h>
#       endif
#endif
