%!/psw/cpp
#ifndef LANGUAGE
#	define LANGUAGE English
#endif
/*
 * Icons common to all high-precision systems
 */
CP(fonts/crttool/USAsci16.font,ICONDEVICE/USAsci16.font)
CP(fonts/crttool/USAsci18.font,ICONDEVICE/USAsci18.font)
CP(fonts/crttool/USAsci24.font,ICONDEVICE/USAsci24.font)
CP(fonts/crttool/USAscx16.font,ICONDEVICE/USAscx16.font)
CP(fonts/crttool/USAscx18.font,ICONDEVICE/USAscx18.font)
CP(fonts/crttool/USAscx24.font,ICONDEVICE/USAscx24.font)
CP(icons/SCREEN/common/design.EXT,ICONDEVICE/design.EXT)
CP(icons/SCREEN/common/delete.EXT,ICONDEVICE/delete.EXT)

#if #class(shovel) || #class(dozer) || #class(loader) || #class(grader)
#	if #option(Backhoe) && #class(shovel)
	CP(icons/SCREEN/CLASS/op_plane_backhoe.EXT,ICONDEVICE/op_plane.EXT)
#	else
	CP(icons/SCREEN/CLASS/op_plane.EXT,ICONDEVICE/op_plane.EXT)
#	endif
	CP(icons/SCREEN/common/LANGUAGE/profile.EXT,ICONDEVICE/profile.EXT)
#endif

#if #class(shovel) || #class(loader)
#	if #option(Backhoe) && #class(shovel)
	CP(icons/SCREEN/CLASS/op_ramp_backhoe.EXT,ICONDEVICE/op_ramp.EXT)
#	else
	CP(icons/SCREEN/CLASS/op_ramp.EXT,ICONDEVICE/op_ramp.EXT)
#	endif
#endif

#if #class(dozer)
	CP(icons/SCREEN/CLASS/op_ramp_1.EXT,ICONDEVICE/op_ramp_1.EXT)
	CP(icons/SCREEN/CLASS/op_ramp_2.EXT,ICONDEVICE/op_ramp_2.EXT)
#endif

#if #class(drill)
	CP(icons/SCREEN/common/drill.EXT,ICONDEVICE/drill.EXT)
	CP(icons/SCREEN/CLASS/LANGUAGE/config.EXT,ICONDEVICE/config.EXT)
	CP(icons/SCREEN/CLASS/LANGUAGE/profile.EXT,ICONDEVICE/profile.EXT)
	CP(icons/SCREEN/CLASS/LANGUAGE/pattern.EXT,ICONDEVICE/pattern.EXT)
/* The cpp has problems with certain file names that have numbers and does not
 * perform the extension substitution properly so they following check is
 * performed for this icons
 */
#if #arch(pe)
	CP(icons/SCREEN/common/1point.gif,ICONDEVICE/1point.gif)
	CP(icons/SCREEN/common/2point.gif,ICONDEVICE/2point.gif)
	CP(icons/SCREEN/common/1point-off.gif,ICONDEVICE/1point-off.gif)
	CP(icons/SCREEN/common/2point-off.gif,ICONDEVICE/2point-off.gif)
#else
	CP(icons/SCREEN/common/1point.icon,ICONDEVICE/1point.icon)
	CP(icons/SCREEN/common/2point.icon,ICONDEVICE/2point.icon)
	CP(icons/SCREEN/common/1point-off.icon,ICONDEVICE/1point-off.icon)
	CP(icons/SCREEN/common/2point-off.icon,ICONDEVICE/2point-off.icon)
#endif
#endif

CP(icons/SCREEN/common/north.EXT,ICONDEVICE/north.EXT)
CP(icons/SCREEN/common/east.EXT,ICONDEVICE/east.EXT)
CP(icons/SCREEN/common/south.EXT,ICONDEVICE/south.EXT)
CP(icons/SCREEN/common/west.EXT,ICONDEVICE/west.EXT)
CP(icons/SCREEN/common/next.EXT,ICONDEVICE/next.EXT)
CP(icons/SCREEN/common/next_dis.EXT,ICONDEVICE/next_dis.EXT)
CP(icons/SCREEN/common/last.EXT,ICONDEVICE/last.EXT)
CP(icons/SCREEN/common/last_dis.EXT,ICONDEVICE/last_dis.EXT)
CP(icons/SCREEN/common/keyed_message.EXT,ICONDEVICE/keyed_message.EXT)
CP(icons/SCREEN/common/LANGUAGE/info.EXT,ICONDEVICE/info.EXT)
CP(icons/SCREEN/common/messages.EXT,ICONDEVICE/messages.EXT)
CP(icons/SCREEN/common/no.EXT,ICONDEVICE/no.EXT)
CP(icons/SCREEN/common/ok.EXT,ICONDEVICE/ok.EXT)
CP(icons/SCREEN/common/send_to.EXT,ICONDEVICE/send_to.EXT)
CP(icons/SCREEN/common/yes.EXT,ICONDEVICE/yes.EXT)
CP(icons/SCREEN/common/change_direction.EXT,ICONDEVICE/chdir.EXT)
CP(icons/SCREEN/common/kom_big.EXT,ICONDEVICE/kom_big.EXT)
CP(icons/SCREEN/common/LANGUAGE/contrast.EXT,ICONDEVICE/conbrite.EXT)
CP(icons/SCREEN/common/LANGUAGE/actions.EXT,ICONDEVICE/actions.EXT)
CP(icons/SCREEN/common/LANGUAGE/zoom.EXT,ICONDEVICE/zoom.EXT)
CP(icons/SCREEN/common/LANGUAGE/project.EXT,ICONDEVICE/project.EXT)
CP(icons/SCREEN/common/LANGUAGE/rotate.EXT,ICONDEVICE/rotate.EXT)
CP(icons/SCREEN/common/LANGUAGE/emergency.EXT,ICONDEVICE/emergency.EXT)
CP(icons/SCREEN/common/LANGUAGE/gps.EXT,ICONDEVICE/gps.EXT)
CP(icons/SCREEN/common/LANGUAGE/main.EXT,ICONDEVICE/main.EXT)
CP(icons/SCREEN/common/LANGUAGE/status.EXT,ICONDEVICE/status.EXT)
CP(icons/SCREEN/common/LANGUAGE/gpsstatus.EXT,ICONDEVICE/gpsstatus.EXT)
