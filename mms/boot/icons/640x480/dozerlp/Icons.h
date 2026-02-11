%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.5 $
 *   $Author: zambetis $
 *     $Date: 2009/03/30 18:20:09 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
CP(icons/SCREEN/dozer/delay.icon,ICONDEVICE/delay.icon)
CP(icons/SCREEN/dozer/standby.icon,ICONDEVICE/standby.icon)
CP(icons/SCREEN/dozer/shiftchange.icon,ICONDEVICE/shiftchange.icon)
CP(icons/SCREEN/dozer/ready.icon,ICONDEVICE/ready.icon)
CP(icons/SCREEN/dozer/down.icon,ICONDEVICE/down.icon) 
CP(icons/SCREEN/dozer/dozing.icon,ICONDEVICE/dozing.icon) 
CP(icons/SCREEN/dozer/ripping.icon,ICONDEVICE/ripping.icon) 
ln ICONDEVICE/shiftchange.icon tiedown.icon
ln ICONDEVICE/dozing.icon Working.icon
