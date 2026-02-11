%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/10/19 00:20:09 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
CP(icons/SCREEN/CLASS/delay.icon,ICONDEVICE/delay.icon)
CP(icons/SCREEN/CLASS/down.icon,ICONDEVICE/down.icon)
CP(icons/SCREEN/CLASS/ready.icon,ICONDEVICE/ready.icon)
CP(icons/SCREEN/CLASS/standby.icon,ICONDEVICE/standby.icon)
CP(icons/SCREEN/CLASS/loading.icon,ICONDEVICE/loading.icon)
ln ICONDEVICE/standby.icon      tiedown.icon
CP(icons/SCREEN/CLASS/left.icon,ICONDEVICE/left.icon)
CP(icons/SCREEN/CLASS/right.icon,ICONDEVICE/right.icon)
#include <icons/misc/Icons.h>
