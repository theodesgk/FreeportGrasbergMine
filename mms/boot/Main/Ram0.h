/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1998
 *               All Rights Reserved
 *  $RCSfile: Ram0.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Create temporary RAM file system for loading
 *	      test modules.
 * * * * * * * * * * * * * * * * * * *
 */
/*
 * Don't use RAM0_SIZE here since it's too big and Test needs
 * alot of heap memory.
 */
mknod	ram0 ram RAM0_ADDR 0x20000
fill	ram0
mkfs	ram0
mknod	ram1 ram RAM1_ADDR RAM1_SIZE
fill	ram1
#define Ram0 ram0
