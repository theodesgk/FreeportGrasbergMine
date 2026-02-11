#!/psw/cpp
#include <Cfg/Device.h>
#if defined CLASSICUI
#define CLASSICUISUP _CLASSICUI_=CLASSICUI
#else
#define CLASSICUISUP
#endif
#if defined DEMAJOR
#define DE_MAJMIN	_DEMAJOR_=DEMAJOR _DEMINOR_=DEMINOR
#else
#define DE_MAJMIN
#endif
#if defined DEMAINT
#define DE_MAINT	_DEMAINT_=DEMAINT
#else
#define DE_MAINT
#endif
#define DE_VER	DE_MAJMIN DE_MAINT
#if defined PERSIST
#define PSUPPORT _PERSIST_=PERSIST
#else
#define PSUPPORT
#endif
#define PEARGS PSUPPORT

#if defined DEVICE
#define HOSTDEV _DEVICE_=DEVICE
#else
#define HOSTDEV
#endif
#if defined IPADDR
#define HOSTIP _IPADDR_=IPADDR
#else
#define HOSTIP
#endif
#if defined GSPXDEVICE
#define GSPXDEV _GSPXDEVICE_=GSPXDEVICE
#else
#define GSPXDEV
#endif
#if defined GSPXDEVICEIP
#define GSPXDEVIP _GSPXDEVICEIP_=GSPXDEVICEIP
#else
#define GSPXDEVIP
#endif

echo Loading Port Embedded properties files.....
CP(PortEmbedded/File.properties,PECFGDEVICE/File.properties)
CP(PortEmbedded/Gui.properties DE_VER,PECFGDEVICE/Gui.properties)
CP(PortEmbedded/Macro.properties,PECFGDEVICE/Macro.properties)
CP(PortEmbedded/Main.properties DE_VER,PECFGDEVICE/Main.properties)
CP(PortEmbedded/Nfs.properties,PECFGDEVICE/Nfs.properties)
CP(PortEmbedded/ObjSh.properties DE_VER,PECFGDEVICE/ObjSh.properties)
CP(PortEmbedded/OMS.properties,PECFGDEVICE/OMS.properties)
CP(PortEmbedded/PE.properties,PECFGDEVICE/PE.properties)
CP(PortEmbedded/PreloadModules.properties,PECFGDEVICE/PreloadModules.properties)
CP(PortEmbedded/UnsupportedMEOS.properties,PECFGDEVICE/UnsupportedMEOS.properties)
CP(PortEmbedded/Spooler.properties,PECFGDEVICE/Spooler.properties)
CP(PortEmbedded/Router.properties,PECFGDEVICE/Router.properties)
CP(PortEmbedded/Slip.properties,PECFGDEVICE/Slip.properties)
CP(PortEmbedded/Can.properties,PECFGDEVICE/Can.properties)
CP(PortEmbedded/Ethernet.properties,PECFGDEVICE/Ethernet.properties)
CP(PortEmbedded/PrismNet.properties,PECFGDEVICE/PrismNet.properties)
CP(PortEmbedded/WindowsCmd.properties,PECFGDEVICE/WindowsCmd.properties)
CP(PortEmbedded/MineCare.properties DE_VER,PECFGDEVICE/MineCare.properties)
CP(PortEmbedded/GpsTruck.properties,PECFGDEVICE/GpsTruck.properties)
CP(PortEmbedded/Vsms.properties,PECFGDEVICE/Vsms.properties)
CP(PortEmbedded/Localization.properties CLASSICUISUP _LANGUAGE_=LANGUAGE,PECFGDEVICE/Localization.properties)
CP(PortEmbedded/GpsRTCM.properties,PECFGDEVICE/GpsRTCM.properties)
CP(PortEmbedded/ExternalApplet.properties,PECFGDEVICE/ExternalApplet.properties)
CP(PortEmbedded/Vga.properties,PECFGDEVICE/Vga.properties)
CP(PortEmbedded/TagReader.properties,PECFGDEVICE/TagReader.properties)
CP(PortEmbedded/SlipMp.properties,PECFGDEVICE/SlipMp.properties)
CP(PortEmbedded/Radio.properties,PECFGDEVICE/Radio.properties)
CP(PortEmbedded/Report.properties DE_VER,PECFGDEVICE/Report.properties)
CP(PortEmbedded/oemDriverConfig.config,PECFGDEVICE/oemDriverConfig.config)
CP(PortEmbedded/driverConnection.config,PECFGDEVICE/driverConnection.config)
CP(PortEmbedded/Proximity.properties,PECFGDEVICE/Proximity.properties)
CP(PortEmbedded/ConvMgr.properties DE_VER,PECFGDEVICE/ConvMgr.properties)
CP(PortEmbedded/AccSwitch.properties DE_VER,PECFGDEVICE/AccSwitch.properties)
CP(PortEmbedded/ChecklistItem.properties DE_VER,PECFGDEVICE/ChecklistItem.properties)
CP(PortEmbedded/MineInfo.properties DE_VER,PECFGDEVICE/MineInfo.properties)
CP(PortEmbedded/EqmtInfo.properties DE_VER,PECFGDEVICE/EqmtInfo.properties)
CP(PortEmbedded/TramSchedItem.properties DE_VER,PECFGDEVICE/TramSchedItem.properties)
CP(PortEmbedded/TaskMan.properties, PECFGDEVICE/TaskMan.properties)

#if defined DEMAJOR && defined DEMINOR && defined DEMAINT
#       if (DEMAJOR == 6 && DEMINOR == 6 && DEMAINT >= 8) || (DEMAJOR > 6 || DEMINOR >= 7)
		CP(PortEmbedded/MobileApiProvider.properties DE_VER,PECFGDEVICE/MobileApiProvider.properties)
		CP(PortEmbedded/TruckEventManager.properties DE_VER,PECFGDEVICE/TruckEventManager.properties)
#	endif
#endif

#if defined DEVICE && defined IPADDR && defined GSPXDEVICE && defined GSPXDEVICEIP && defined DELITE
        CP(PortEmbedded/PeerDevices.config HOSTDEV HOSTIP GSPXDEV GSPXDEVIP, PECFGDEVICE/PeerDevices.config)
#endif

/*
 * the following assertion makes sure that other loading scripts will
 * allow the loading of GPS application configurations. On MLX, GPS
 * support is automatic and is not loaded as an option such as "Gps/Tsip"
 * or something. This assertion allows you to specify the option "GpsTruck"
 * (and others) without also having to specify a Gps driver
 */
#assert module(GpsDev)

/*
 * this assertion will cause correct MineCare spooler
 * definitions in boot/Spooler/Config.h.
 */
#assert module(MineCare)

/*
 * Include license files for DELITE
 */
#if defined DELITE
#	include <Licenses/Config.h>
#endif
