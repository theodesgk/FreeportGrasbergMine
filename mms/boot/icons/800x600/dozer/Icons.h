%!/psw/cpp
#include <icons/misc/Icons.h>
#if #arch(pe)
	cp net/icons/SCREEN/dozer/pushing_newui.EXT ICONDEVICE/pushing.EXT
        ln ICONDEVICE/pushing.EXT                       pushing1.EXT
        ln ICONDEVICE/pushing.EXT                       pushing2.EXT
        ln ICONDEVICE/pushing.EXT                       pushing3.EXT
	cp net/icons/SCREEN/dozer/ripping_newui.EXT ICONDEVICE/ripping.EXT
        ln ICONDEVICE/ripping.EXT                       ripping1.EXT
        ln ICONDEVICE/ripping.EXT                       ripping2.EXT
        ln ICONDEVICE/ripping.EXT                       ripping3.EXT
	cp net/icons/SCREEN/dozer/ready_newui.EXT   ICONDEVICE/ready.EXT
        ln ICONDEVICE/ready.EXT                      ready1.EXT
        ln ICONDEVICE/ready.EXT                      ready2.EXT
        ln ICONDEVICE/ready.EXT                      ready3.EXT
	cp net/icons/SCREEN/dozer/delay_newui.EXT   ICONDEVICE/delay.EXT
        ln ICONDEVICE/delay.EXT                      delay1.EXT
        ln ICONDEVICE/delay.EXT                      delay2.EXT
        ln ICONDEVICE/delay.EXT                      delay3.EXT
	cp net/icons/SCREEN/dozer/standby_newui.EXT ICONDEVICE/standby.EXT
        ln ICONDEVICE/standby.EXT                    standby1.EXT
        ln ICONDEVICE/standby.EXT                    standby2.EXT
        ln ICONDEVICE/standby.EXT                    standby3.EXT
	cp net/icons/SCREEN/dozer/down_newui.EXT    ICONDEVICE/down.EXT
        ln ICONDEVICE/down.EXT                       down1.EXT
        ln ICONDEVICE/down.EXT                       down2.EXT
        ln ICONDEVICE/down.EXT                       down3.EXT
	ln ICONDEVICE/standby.EXT tiedown.EXT
	ln ICONDEVICE/pushing.EXT Working.EXT
        ln ICONDEVICE/logo.EXT                       logo1.EXT
        ln ICONDEVICE/logo.EXT                       logo2.EXT
        ln ICONDEVICE/logo.EXT                       logo3.EXT
#else
	cp net/icons/800x600/dozer/pushing.EXT ICONDEVICE/pushing.EXT
	cp net/icons/800x600/dozer/ripping.EXT ICONDEVICE/ripping.EXT
	cp net/icons/800x600/dozer/ready.EXT   ICONDEVICE/ready.EXT
	cp net/icons/800x600/dozer/delay.EXT   ICONDEVICE/delay.EXT
	cp net/icons/800x600/dozer/standby.EXT ICONDEVICE/standby.EXT
	cp net/icons/800x600/dozer/down.EXT    ICONDEVICE/down.EXT	
	ln ICONDEVICE/standby.EXT tiedown.EXT
	ln ICONDEVICE/pushing.EXT Working.EXT
#endif
#ifdef NEWUI
# 	define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#	include NEWUI_COMMON
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#else
        CP(icons/SCREEN/auxil/MenAtWork.EXT,ICONDEVICE/MenAtWork.EXT)
#if #arch(pe)
        ln ICONDEVICE/MenAtWork.EXT MenAtWork1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork3.EXT
#endif
#endif
