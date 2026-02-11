#include <Cfg/Device.h>
#define OMSCLASS Goic/RailTest
#include <Cfg/OMS.h>
#ifndef LANGUAGE
#       define LANGUAGE English
#endif

#ifdef UP
cp net/Goic/Main.cfg\ _CLASS_=CLASS\ _UP_=UP	CFGDEVICE/Main.cfg
#else
cp net/Goic/Main.cfg\ _CLASS_=CLASS		CFGDEVICE/Main.cfg
#endif
cp net/Goic/CLASS/Replicator.cfg                CFGDEVICE/Replicator.cfg
#include <Cfg/Mainini.h>
