#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef ANTENNA
#       define ANTENNA antenna
#endif
#define GPSNAME GpsNovariant
#include <Main/GspPort.h>
#if #GSPPORT(busy)
	echo No serial port available on device!
#else
	CP(Gps/Novariant/Gps.cfg _GSPPORT_=GSPPORT,CFGDEVICE/Gps.cfg)
#endif
#assert module(GpsDev)
