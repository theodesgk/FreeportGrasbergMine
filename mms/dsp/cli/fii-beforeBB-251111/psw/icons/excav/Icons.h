%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.3 $
 *   $Author: zambetis $
 *     $Date: 2008/06/21 20:49:19 $
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
#include <icons/misc/Icons.h>
CP(icons/SCREEN/wifi_on.icon,ICONDEVICE/wifi_on.icon)
CP(icons/SCREEN/wifi_off.icon,ICONDEVICE/wifi_off.icon)
/*
CP(sounds/LANGUAGE/doorbell.au,MAINDEVICE/doorbell.au)
*/
