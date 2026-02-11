#ifndef ANTENNA
#	define ANTENNA antenna
#endif
#define CAT3(A,B,C)	A/**/B/**/C
#define ANTENNA_FILE	CAT3(GpsGs/,ANTENNA,.h)
#define ANTENNA_INCLUDE </**/ANTENNA_FILE/**/>
#include <ANTENNA_INCLUDE>
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
#if defined(RTCM3)
#   define MODE rtcm3
#   ifndef PHASECENELEV
        echo '================ WARNING!!! ================='
        echo 'Antenna phase center elevation not defined!!!'
        echo 'RTCM3 standard requires the antenna phase'
        echo 'center coordinates, please consult the wiki'
        echo 'for more information.'
        echo 'The Hub did NOT finish loading!!!!'
        echo '============================================='
#   else 
        echo '======================================='
        echo 'Loading GS with RTCM3 configuration ...'
        echo '======================================='
        CP(GpsGs/Topcon/GpsGs.cfg,CFGDEVICE/GpsGs.cfg)
        CP(GpsGs/Topcon/GpsRTCM.cfg MODE,CFGDEVICE/GpsRTCM.cfg)
        CP(GpsGs/Topcon/topcon.base ANTENNA_FILE _GPSOPT_=GPSOPT _MODE_=MODE, CFGDEVICE/topcon.base)
#   endif
#else 
echo '======================================='
echo 'Loading GS with RTCM2 configuration ...'
echo '======================================='
#define MODE rtcm2
CP(GpsGs/Topcon/GpsGs.cfg,CFGDEVICE/GpsGs.cfg)
CP(GpsGs/Topcon/GpsRTCM.cfg,CFGDEVICE/GpsRTCM.cfg)
CP(GpsGs/Topcon/topcon.base ANTENNA_FILE _GPSOPT_=GPSOPT _MODE_=MODE, CFGDEVICE/topcon.base)
#endif
