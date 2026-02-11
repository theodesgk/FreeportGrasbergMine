%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2011
 *               All Rights Reserved
 *  $RCSfile: Config.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2014/07/21 06:37:52 $
 *    $State: Exp $
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * Config file for loading static reason menus
 * Copy to client psw/10inch/static folder and
 * customize to meet client needs
 */

echo No Static Menus defined...
echo Loading Unconfigured Status Menu
CP(10inch/static/Status.cfg CFGDEVICE/Status.cfg)
