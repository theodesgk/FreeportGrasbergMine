%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: CpuPort.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:51 $
 *    $State: Exp $
 *   Purpose: Check CPU RS232 port to insure it's used only once.
 * * * * * * * * * * * * * * * * * * *
 */
#if #port(cpu)
#	assert CPUPORT(busy)
#else
#	assert port(cpu)
#endif
