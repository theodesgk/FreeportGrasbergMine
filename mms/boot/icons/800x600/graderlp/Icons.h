%!/psw/cpp
#include <icons/misc/Icons.h>
#if #arch(pe)	
	cp net/icons/SCREEN/grader/pushing_newui.EXT ICONDEVICE/pushing.EXT
        ln ICONDEVICE/pushing.EXT                       pushing1.EXT
        ln ICONDEVICE/pushing.EXT                       pushing2.EXT
        ln ICONDEVICE/pushing.EXT                       pushing3.EXT
	cp net/icons/SCREEN/grader/ripping_newui.EXT ICONDEVICE/ripping.EXT
        ln ICONDEVICE/ripping.EXT                       ripping1.EXT
        ln ICONDEVICE/ripping.EXT                       ripping2.EXT
        ln ICONDEVICE/ripping.EXT                       ripping3.EXT
	cp net/icons/SCREEN/grader/grading_newui.EXT ICONDEVICE/grading_newui.EXT
        ln ICONDEVICE/grading_newui.EXT                       grading_newui1.EXT
        ln ICONDEVICE/grading_newui.EXT                       grading_newui2.EXT
        ln ICONDEVICE/grading_newui.EXT                       grading_newui3.EXT
	cp net/icons/SCREEN/grader/ready_newui.EXT   ICONDEVICE/ready.EXT
	ln ICONDEVICE/ready.EXT ready1.EXT
	ln ICONDEVICE/ready.EXT ready2.EXT
	ln ICONDEVICE/ready.EXT ready3.EXT
	cp net/icons/SCREEN/grader/delay_newui.EXT   ICONDEVICE/delay.EXT
	ln ICONDEVICE/delay.EXT delay1.EXT
	ln ICONDEVICE/delay.EXT delay2.EXT
	ln ICONDEVICE/delay.EXT delay3.EXT
	cp net/icons/SCREEN/grader/standby_newui.EXT ICONDEVICE/standby.EXT
	ln ICONDEVICE/standby.EXT standby1.EXT
	ln ICONDEVICE/standby.EXT standby2.EXT
	ln ICONDEVICE/standby.EXT standby3.EXT
	cp net/icons/SCREEN/grader/down_newui.EXT    ICONDEVICE/down.EXT
	ln ICONDEVICE/down.EXT  down1.EXT
	ln ICONDEVICE/down.EXT  down2.EXT
	ln ICONDEVICE/down.EXT  down3.EXT
	ln ICONDEVICE/logo.EXT  logo1.EXT
	ln ICONDEVICE/logo.EXT  logo2.EXT
	ln ICONDEVICE/logo.EXT  logo3.EXT
#else
	cp net/icons/800x600/grader/pushing.EXT ICONDEVICE/pushing.EXT
	cp net/icons/800x600/grader/ripping.EXT ICONDEVICE/ripping.EXT
	cp net/icons/800x600/grader/ready.EXT   ICONDEVICE/ready.EXT
	cp net/icons/800x600/grader/delay.EXT   ICONDEVICE/delay.EXT
	cp net/icons/800x600/grader/standby.EXT ICONDEVICE/standby.EXT
	cp net/icons/800x600/grader/down.EXT    ICONDEVICE/down.EXT
#endif
#ifdef NEWUI
#	define NEWUI_COMMON <icons/SCREEN/common/Icons_newui.h>
# 	include NEWUI_COMMON
        CP(icons/SCREEN/auxil/Travel1_newui.EXT,ICONDEVICE/Travel.EXT)
	ln ICONDEVICE/pushing.EXT Working.EXT
#else
        CP(icons/SCREEN/auxil/MenAtWork.EXT,ICONDEVICE/MenAtWork.EXT)
#if #arch(pe)
        ln ICONDEVICE/MenAtWork.EXT MenAtWork1.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork2.EXT
        ln ICONDEVICE/MenAtWork.EXT MenAtWork3.EXT
#endif
#endif
ln ICONDEVICE/standby.EXT tiedown.EXT
