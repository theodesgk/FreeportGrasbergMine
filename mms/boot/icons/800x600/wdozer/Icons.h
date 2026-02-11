%!/psw/cpp
#include <icons/misc/Icons.h>

cp net/icons/SCREEN/auxil/MenAtWork.EXT ICONDEVICE/Working.EXT
cp net/icons/SCREEN/CLASS/pushing.EXT   ICONDEVICE/pushing.EXT
ln ICONDEVICE/pushing.EXT                       pushing1.EXT
ln ICONDEVICE/pushing.EXT                       pushing2.EXT
ln ICONDEVICE/pushing.EXT                       pushing3.EXT
cp net/icons/SCREEN/CLASS/ready.EXT     ICONDEVICE/ready.EXT
ln ICONDEVICE/ready.EXT                      ready1.EXT
ln ICONDEVICE/ready.EXT                      ready2.EXT
ln ICONDEVICE/ready.EXT                      ready3.EXT
cp net/icons/SCREEN/CLASS/delay.EXT     ICONDEVICE/delay.EXT
ln ICONDEVICE/delay.EXT                      delay1.EXT
ln ICONDEVICE/delay.EXT                      delay2.EXT
ln ICONDEVICE/delay.EXT                      delay3.EXT
cp net/icons/SCREEN/CLASS/standby.EXT   ICONDEVICE/standby.EXT
ln ICONDEVICE/standby.EXT                    standby1.EXT
ln ICONDEVICE/standby.EXT                    standby2.EXT
ln ICONDEVICE/standby.EXT                    standby3.EXT
cp net/icons/SCREEN/CLASS/down.EXT      ICONDEVICE/down.EXT
ln ICONDEVICE/down.EXT                       down1.EXT
ln ICONDEVICE/down.EXT                       down2.EXT
ln ICONDEVICE/down.EXT                       down3.EXT
ln ICONDEVICE/standby.EXT               tiedown.EXT
ln ICONDEVICE/logo.EXT  logo1.EXT
ln ICONDEVICE/logo.EXT  logo2.EXT
ln ICONDEVICE/logo.EXT  logo3.EXT
#ifdef NEWUI
#	define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
#	include NEWUI_COMMON
        CP(icons/SCREEN/auxil/MenAtWork_newui.EXT,ICONDEVICE/Working.EXT)
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
#else
        CP(icons/SCREEN/auxil/MenAtWork.EXT,ICONDEVICE/MenAtWork.EXT)
#if #arch(pe)
        ln ICONDEVICE/MenAtWork.EXT MenAtWork1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork3.EXT
#endif
#endif
