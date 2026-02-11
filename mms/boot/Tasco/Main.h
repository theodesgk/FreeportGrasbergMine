/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Main.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:53 $
 *    $State: Exp $
 *   Purpose: Generic load script for GSP interfaces.
 * * * * * * * * * * * * * * * * * * *
 */
#assert module(Loop)
#if #up(Rp)
#	assert module(Rp)
#endif
#assert module(Tty)
#include <Main/Main.h>
