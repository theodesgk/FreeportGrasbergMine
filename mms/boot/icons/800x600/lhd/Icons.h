#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons.h,v $
 * $Revision: 1.5 $
 *   $Author: zambetis $
 *     $Date: 2009/06/15 18:53:27 $
 *    $State: Exp $
 *   Purpose: Load all lhd specific icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
#include <icons/misc/Icons.h>
cp net/icons/800x600/CLASS/down.EXT     ICONDEVICE/down.EXT
cp net/icons/800x600/CLASS/ready.EXT    ICONDEVICE/ready.EXT
cp net/icons/800x600/CLASS/standby.EXT  ICONDEVICE/standby.EXT
cp net/icons/800x600/CLASS/delay.EXT    ICONDEVICE/delay.EXT
cp net/icons/800x600/CLASS/loading.EXT  ICONDEVICE/tramloading.EXT
cp net/icons/800x600/CLASS/empty.EXT    ICONDEVICE/empty.EXT
cp net/icons/800x600/CLASS/full.EXT     ICONDEVICE/full.EXT
cp net/icons/800x600/CLASS/ldtruck.EXT  ICONDEVICE/loading.EXT
cp net/icons/800x600/CLASS/dumping.EXT  ICONDEVICE/dumping.EXT
#if #arch(pe)
   cp net/icons/SCREEN/CLASS/standby.EXT ICONDEVICE/tiedown.EXT
#else
   ln ICONDEVICE/standby.EXT      tiedown.EXT
#endif
