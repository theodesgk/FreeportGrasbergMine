#!/psw/cpp
/*
 * * * * * * * * * * * * * * * * * * *
 *  DISPATCH Real-Time Firmware Module
 * Copyright (c) Modular Mining Systems, 1982-1995
 *               All Rights Reserved
 *  $RCSfile: Icons_newui.h,v $
 * $Revision: 1.19 $
 *   $Author: mlins $
 *     $Date: 2019/05/14 23:16:26 $
 *    $State: Exp $
 *   Purpose: Load all miscellaneous icons into GOIC.
 * * * * * * * * * * * * * * * * * * *
 */
echo Loading NewUI common icons...
#if #arch(pe)
#if defined LARGEUI || defined SMALLUI
CP(icons/SCREEN/common/Actions64x64.EXT,ICONDEVICE/Actions.EXT)
CP(icons/SCREEN/common/Chat55x55.EXT,ICONDEVICE/Chat.EXT)
CP(icons/SCREEN/common/ClearText55x55.EXT,ICONDEVICE/ClearText.EXT)
CP(icons/SCREEN/common/Colors.EXT,ICONDEVICE/Colors.EXT)
CP(icons/SCREEN/common/Lock55x55.EXT,ICONDEVICE/Lock.EXT)
CP(icons/SCREEN/common/Material64x64.EXT,ICONDEVICE/Material.EXT)
CP(icons/SCREEN/common/Options.EXT,ICONDEVICE/Options.EXT)
CP(icons/SCREEN/common/View55x55.EXT,ICONDEVICE/View.EXT)
CP(icons/SCREEN/common/spdalert_65x65.EXT,ICONDEVICE/spdalert.EXT)
/* use arrow icons for prestart instead
CP(icons/SCREEN/common/next.EXT,ICONDEVICE/next.EXT)
CP(icons/SCREEN/common/next_dis.EXT,ICONDEVICE/next_dis.EXT)
CP(icons/SCREEN/common/last.EXT,ICONDEVICE/last.EXT)
CP(icons/SCREEN/common/last_dis.EXT,ICONDEVICE/last_dis.EXT)
*/
CP(icons/SCREEN/common/checklist_comment_100x100.EXT,ICONDEVICE/checklist_comment.EXT)
CP(icons/SCREEN/common/cancel_100x100.EXT,ICONDEVICE/cancel.EXT)
CP(icons/SCREEN/common/done_100x100.EXT,ICONDEVICE/done.EXT)
CP(icons/SCREEN/common/right_arrow_100x100.EXT,ICONDEVICE/right_arrow.EXT)
CP(icons/SCREEN/common/left_arrow_100x100.EXT,ICONDEVICE/left_arrow.EXT)
CP(icons/SCREEN/common/pass_all_150x100.EXT,ICONDEVICE/pass_all.EXT)
CP(icons/SCREEN/common/right_arrow_gray_100x100.EXT,ICONDEVICE/right_arrow_gray.EXT)
CP(icons/SCREEN/common/left_arrow_gray_100x100.EXT,ICONDEVICE/left_arrow_gray.EXT)
ln ICONDEVICE/right_arrow.EXT next.EXT
ln ICONDEVICE/right_arrow_gray.EXT next_dis.EXT
ln ICONDEVICE/left_arrow.EXT last.EXT
ln ICONDEVICE/left_arrow_gray.EXT last_dis.EXT
/* StatBar Wifi Icons */
CP(icons/SCREEN/wifi_on.EXT,ICONDEVICE/wifi_on.EXT)
CP(icons/SCREEN/wifi_med.EXT,ICONDEVICE/wifi_med.EXT)
CP(icons/SCREEN/wifi_off.EXT,ICONDEVICE/wifi_off.EXT)
/* StatBar Gps Icons */
CP(icons/SCREEN/common/GpsSignalGreen.EXT,ICONDEVICE/GpsGreen.EXT)
CP(icons/SCREEN/common/GpsSignalGreen_DifferentialCorrection.EXT,ICONDEVICE/GpsGreenDif.EXT)
CP(icons/SCREEN/common/GpsSignalYellow.EXT,ICONDEVICE/GpsYellow.EXT)
CP(icons/SCREEN/common/GpsSignalYellow_DifferentialCorrection.EXT,ICONDEVICE/GpsYellowDif.EXT)
CP(icons/SCREEN/common/GpsSignalNoSignal.EXT,ICONDEVICE/GpsRed.EXT)
CP(icons/SCREEN/common/GpsSignalNoSignal_DifferentialCorrection.EXT,ICONDEVICE/GpsRedDif.EXT)
/* StatBar Volume Config icons */
CP(icons/SCREEN/common/SpeakerMedium.EXT,ICONDEVICE/VolMed.EXT)
CP(icons/SCREEN/common/SpeakerMute.EXT,ICONDEVICE/VolMute.EXT)
CP(icons/SCREEN/common/SpeakerVeryHigh.EXT,ICONDEVICE/VolHigh.EXT)
CP(icons/SCREEN/common/SpeakerVeryLow.EXT,ICONDEVICE/VolLow.EXT)
#if #class(crusher)
CP(icons/SCREEN/common/Information64x64.EXT,ICONDEVICE/Information.EXT)
CP(icons/SCREEN/common/ShovelFeeding64x64.EXT,ICONDEVICE/ShovelFeeding.EXT)
CP(icons/SCREEN/common/TrucksEnRoute64x64.EXT,ICONDEVICE/TrucksEnRoute.EXT)
#endif
#if #class(excav) || #class(loaderlp) || #class(ug_loader) || #class(auxil) || #class(dozerlp) || #class(graderlp) || #class(wdozer)
CP(icons/SCREEN/common/TrucksEnRoute55x55.EXT,ICONDEVICE/TrucksEnRoute.EXT)
#endif
#else
CP( icons/SCREEN/common/Emerg.EXT,ICONDEVICE/Emerg.EXT )
CP( icons/SCREEN/common/Act_newui.EXT,ICONDEVICE/Actions.EXT )
CP( icons/SCREEN/common/Mesg.EXT,ICONDEVICE/Mesg.EXT )
CP( icons/SCREEN/common/resrc_view.EXT,ICONDEVICE/resrc_view.EXT )
#endif
CP( icons/SCREEN/common/stat_ready.EXT,ICONDEVICE/stat_ready.EXT )
CP( icons/SCREEN/common/stat_down.EXT,ICONDEVICE/stat_down.EXT )
CP( icons/SCREEN/common/stat_delay.EXT,ICONDEVICE/stat_delay.EXT )
CP( icons/SCREEN/common/stat_standby.EXT,ICONDEVICE/stat_standby.EXT )
CP( icons/SCREEN/common/stat_standby.EXT,ICONDEVICE/stat_tiedown.EXT )
#endif
