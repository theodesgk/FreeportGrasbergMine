%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.2 $
 *   $Author: zambetis $
 *     $Date: 2009/03/30 18:20:09 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
cp net/icons/SCREEN/wtruck/down.icon      ICONDEVICE/down.icon
cp net/icons/SCREEN/wtruck/ready.icon     ICONDEVICE/ready.icon
cp net/icons/SCREEN/wtruck/delay.icon     ICONDEVICE/delay.icon
cp net/icons/SCREEN/wtruck/standby.icon   ICONDEVICE/standby.icon
cp net/icons/SCREEN/wtruck/spare.icon     ICONDEVICE/spare.icon
#cp net/icons/SCREEN/wtruck/watertrk.icon ICONDEVICE/watertrk.icon
cp net/icons/SCREEN/wtruck/refill.icon    ICONDEVICE/refill.icon
cp net/icons/SCREEN/wtruck/spray.icon     ICONDEVICE/spray.icon
ln ICONDEVICE/standby.icon tiedown.icon
ln ICONDEVICE/ready.icon watertrk.icon
