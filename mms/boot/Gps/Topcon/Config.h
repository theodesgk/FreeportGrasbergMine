#include <Cfg/Device.h>
#include <Cfg/OMS.h>
#ifndef ANTENNA
#       define ANTENNA antenna
#endif
#define CAT3(A,B,C)     A/**/B/**/C
#define ANTENNA_FILE    CAT3(<GpsGs/,ANTENNA,.h>)
#include ANTENNA_FILE
#define GPSNAME GpsTopcon
#if defined(RTCM3)
#   define MODE rtcm3
#else 
#   define MODE rtcm2
#endif

#ifndef GPSOPT
#   define GPSOPT none
#else
#   if !( #gpsopt(10Hz) || #gpsopt(log) || #gpsopt(10Hz_log) )
#       define GPSOPT none 
        echo '-------- WARNING!!!!!! ---------' */
        echo 'Not a Valid GPSOPT, ignoring!!!!'
        echo '--------------------------------' */
#   endif
#endif
CP(Gps/Topcon/Gps.cfg _CLASS_=CLASS,CFGDEVICE/Gps.cfg)
#assert module(GpsDev)
CP(Gps/Topcon/GpsRTCM.cfg MODE,CFGDEVICE/GpsRTCM.cfg)
#if !(defined(GPSCALC) || defined(GPSUPDATE) || defined(GPSLOG) || defined(GPSPPS))
    CP(Gps/Topcon/topcon.rover _GPSOPT_=GPSOPT MODE,CFGDEVICE/topcon.rover)
    CP(Gps/Topcon/topcon.rover _GPSOPT_=GPSOPT MODE,CFGDEVICE/topcon.rover2)
#else
    CP(Gps/Topcon/topcon.rover _GPSCALC_=GPSCALC _GPSUPDATE_=GPSUPDATE _GPSLOG_=GPSLOG _GPSPPS_=GPSPPS MODE,CFGDEVICE/topcon.rover)
    CP(Gps/Topcon/topcon.rover _GPSCALC_=GPSCALC _GPSUPDATE_=GPSUPDATE _GPSLOG_=GPSLOG _GPSPPS_=GPSPPS MODE,CFGDEVICE/topcon.rover2)
#endif
