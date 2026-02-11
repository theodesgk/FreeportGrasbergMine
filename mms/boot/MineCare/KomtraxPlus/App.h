%!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-2002
 *               All Rights Reserved
 *  $RCSfile: App.h,v $
 * $Revision: 1.4 $
 *   $Author: BARDHAN $
 *     $Date: 2020/09/17 22:40:48 $
 *    $State: Exp $
 *   Purpose: Load script for KomtraxPlus driver
 * * * * * * * * * * * * * * * * * * *
 */
#define DRIVERNAME KomtraxPlus
#define DRIVERMODULE KomtraxPlusDriver
#include <App/Device.h>

#ifndef MODEL

LD(KomtraxPlus830EConfig, APPDEVICE/KomtraxPlusConfig)
#endif
#if defined(MODEL) && #model(D475)
LD(KomtraxPlusD475Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(D375)
LD(KomtraxPlusD375Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(830E)
echo found model MODEL
LD(KomtraxPlus830EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(930E)
LD(KomtraxPlus930EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WA1200-X)
LD(KomtraxPlusWA1200Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC4000)
LD(KomtraxPlusPC4000Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(730E)
LD(KomtraxPlus730EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(HD785-X)
LD(KomtraxPlus7857Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(HD1500)
LD(KomtraxPlus15007Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WA800-900)
LD(KomtraxPlus800900Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC1250)
LD(KomtraxPlusPC12508Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(960E)
LD(KomtraxPlus960EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(HD465605)
LD(KomtraxPlus4656057Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC2000)
LD(KomtraxPlusPC20008Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC3000)
LD(KomtraxPlusPC3000Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC5500)
LD(KomtraxPlusPC55006DConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC8000)
LD(KomtraxPlusPC80006Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WA600)
LD(KomtraxPlusWA6006Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WD600)
LD(KomtraxPlusWD6006Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(860E)
LD(KomtraxPlus860EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC3000E)
LD(KomtraxPlusPC3000EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC4000E)
LD(KomtraxPlusPC4000EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC5500E)
LD(KomtraxPlusPC5500EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC8000E)
LD(KomtraxPlusPC8000EConfig, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC7000)
LD(KomtraxPlusPC7000Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(PC3000-6Tier2)
LD(KomtraxPlusPC30006T2Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WA1200-3)
LD(KomtraxPlusWA1200_3Config, APPDEVICE/KomtraxPlusConfig)
#endif

#if defined(MODEL) && #model(WA1200-6)
LD(KomtraxPlusWA1200_6Config, APPDEVICE/KomtraxPlusConfig)
#endif

#include <MineCare/App.h>
