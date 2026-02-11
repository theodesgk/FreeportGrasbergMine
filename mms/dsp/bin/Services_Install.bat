@ECHO OFF
SETLOCAL ENABLEEXTENSIONS
CD /D %~dp0
SET INSTALL_UTIL=%SYSTEMROOT%\Microsoft.NET\Framework\v4.0.30319\InstallUtil.exe
SET INSTALL_UTIL64=%SYSTEMROOT%\Microsoft.NET\Framework64\v4.0.30319\InstallUtil.exe
SET USR=fmi\svc-grs-mms
SET PWD=%1
IF "%PWD%"=="" (
   ECHO Please use ServiceInstaller.exe
   PAUSE
   EXIT 0
)
ECHO Installing Services...
ECHO.
ECHO Configuring service intellimine 1 - OMSns containing:
ECHO 1) OMSns
pushd "C:\Program Files\intellimine\mms\OMS\Central\Tools\Wrapper\bat"
CALL OMSinstallService.bat "C:\mms\OMS\Central\Run\OMSns.conf"
popd
CALL SC failure "intellimine 1 - OMSns" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 1 - OMSns" start= demand
REM CALL NET START "intellimine 1 - OMSns"


IF %ERRORLEVEL%==0 GOTO CONTINUE
IF %ERRORLEVEL% NEQ 0 (
   SET ERR=%ERRORLEVEL%
   ECHO Error %ERR%. Description:
   NET HELPMSG %ERR%
)
IF %ERR% == 1069 (
   ECHO To resolve Error 1069, follow this procedure:
   ECHO.
   ECHO 1. Choose Services from Administrative Tools or run services.msc.
   ECHO 2. Right-click an intellimine service, choose Properties.
   ECHO 3. Open Log On tab, enter your password in both fields.
   ECHO 4. Click Apply, accept the confirmation message.
   ECHO 5. Open General tab, start the service, make sure it has started.
   ECHO.
   ECHO Once you have completed the above procedure,
   PAUSE
) ELSE ( 
   PAUSE
   EXIT %ERR%
)
:CONTINUE


ECHO Configuring service intellimine 2 - OMSrouter containing:
ECHO 1) OMSrouter
pushd "C:\Program Files\intellimine\mms\OMS\Central\Tools\Wrapper\bat"
CALL OMSinstallService.bat "C:\mms\OMS\Central\Run\OMSrouter.conf"
popd
CALL SC failure "intellimine 2 - OMSrouter" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 2 - OMSrouter" start= demand
REM CALL NET START "intellimine 2 - OMSrouter"

ECHO Configuring service intellimine 3 - OMSnfs containing:
ECHO 1) OMSnfs
pushd "C:\Program Files\intellimine\mms\OMS\Central\Tools\Wrapper\bat"
CALL OMSinstallService.bat "C:\mms\OMS\Central\Run\OMSnfs.conf"
popd
CALL SC failure "intellimine 3 - OMSnfs" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 3 - OMSnfs" start= demand
REM CALL NET START "intellimine 3 - OMSnfs"

ECHO Configuring service intellimine 4 - OMSserver containing:
ECHO 1) OMSserver
pushd "C:\Program Files\intellimine\mms\OMS\Central\Tools\Wrapper\bat"
CALL OMSinstallService.bat "C:\mms\OMS\Central\Run\OMSserver.conf"
popd
CALL SC failure "intellimine 4 - OMSserver" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 4 - OMSserver" start= demand
REM CALL NET START "intellimine 4 - OMSserver"

ECHO Configuring service intellimine 5 - Spooler containing:
ECHO 1) Spooler
pushd "C:\Program Files\intellimine\mms\OMS\Central\Tools\Wrapper\bat"
CALL OMSinstallService.bat "C:\mms\OMS\Central\Run\Spooler.conf"
popd
CALL SC failure "intellimine 5 - Spooler" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 5 - Spooler" start= demand
REM CALL NET START "intellimine 5 - Spooler"

ECHO Configuring service intellimine 6 - Starter containing:
ECHO 1) DispatchRestarter  
CALL "%INSTALL_UTIL%" /name="intellimine 6 - Starter" /desc="1) DispatchRestarter  " /account=User /user=%USR% /password=%PWD% "C:\Program Files\intellimine\mms\dsp\bin\intellimine_6_Starter.exe" /LogFile="C:\Program Files\intellimine\mms\dsp\bin\Log\intellimine_6_Starter_Install.log" /ShowCallStack /LogToConsole=false
CALL SC failure "intellimine 6 - Starter" actions= restart/60000/restart/60000// reset= 86400
CALL SC config "intellimine 6 - Starter" start= demand
REM CALL NET START "intellimine 6 - Starter"

ECHO OMS Server: running installBoot.bat
CD "C:\Program Files\intellimine\mms\boot"
CALL installBoot.bat
IF %ERRORLEVEL% NEQ 0 PAUSE
