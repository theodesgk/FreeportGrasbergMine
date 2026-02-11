
@echo off

SET dir="%DSP_DRIVE%%DSP_ROOT%/dsp/cli/%DSP_CLIENTNAME%/opns/storeforward"
IF NOT EXIST %dir% (
  MKDIR %dir%)

CD /D "c:\program files\intellimine\mms\dsp\bin"
FormsRunner.exe storeforward/sf_process : 3 0 sf_events.log
