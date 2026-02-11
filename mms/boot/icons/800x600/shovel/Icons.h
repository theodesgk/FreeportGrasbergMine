%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.4 $
 *   $Author: zambetis $
 *     $Date: 2009/01/28 23:07:17 $
 *    $State: Exp $
 *   Purpose: Load all shovel specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
cp net/icons/800x600/shovel/delay.EXT   ICONDEVICE/delay.EXT
cp net/icons/800x600/shovel/down.EXT    ICONDEVICE/down.EXT
cp net/icons/800x600/shovel/ready.EXT   ICONDEVICE/ready.EXT
cp net/icons/800x600/shovel/standby.EXT ICONDEVICE/standby.EXT
cp net/icons/800x600/shovel/loading.EXT ICONDEVICE/loading.EXT
ln ICONDEVICE/standby.EXT tiedown.EXT
cp net/icons/800x600/shovel/left.EXT    ICONDEVICE/left.EXT
cp net/icons/800x600/shovel/right.EXT   ICONDEVICE/right.EXT
#include <icons/misc/Icons.h>
