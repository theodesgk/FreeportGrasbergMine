/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Main.h,v $
 * $Revision: 1.1 $
 *   $Author: dcitron $
 *     $Date: 2012/07/08 07:50:23 $
 *    $State: Exp $
 *   Purpose: Generic load script for GSP interfaces.
 * * * * * * * * * * * * * * * * * * *
 */
#assert module(Loop)
#if #up(Rp)
#	assert module(Rp)
#else
#	assert module(PswClient)
#endif
#if #arch(i80196)
#	assert module(Slip)
#endif
#assert module(Tty)
#include <Main/Main.h>
