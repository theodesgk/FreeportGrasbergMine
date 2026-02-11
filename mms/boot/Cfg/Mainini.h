/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Mainini.h,v $
 * $Revision: 1.1 $
 *   $Author: olson $
 *     $Date: 2002/05/17 18:56:44 $
 *    $State: Exp $
 *   Purpose: Load the `Main.ini' application boot file to
 *            run the appropriate Main application program.
 * * * * * * * * * * * * * * * * * * *
 */
#ifdef MAINOBJECT
	CP(Main/Main.ini MAINOBJECT,CFGDEVICE/Main.ini)
#else
	CP(Main/Main.ini,CFGDEVICE/Main.ini)
#endif
