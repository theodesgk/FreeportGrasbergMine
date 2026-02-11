@ECHO OFF

CALL "SetEnvironment"

SET THIRDPARTY_LIBS_PATH=%OMS_HOME%/Central/Lib/log4j-api-2.17.1.jar;%OMS_HOME%/Central/Lib/log4j-core-2.17.1.jar;%OMS_HOME%/Central/Lib/Microsoft.Sqlserver.jar;%OMS_HOME%/Central/Lib/WinComm.jar;%OMS_HOME%/Central/Lib/Snmp.jar;%OMS_HOME%/Central/Lib/PrintUtil.jar
SET MODULAR_LIBS_PATH=%OMS_HOME%/Central/Lib/Modular.Oms.Library.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Cisco.Diags.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Nfs.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Ns.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Router.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Spooler.Central.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Tip.jar;%OMS_HOME%/Central/Lib/Modular.Fcp.Common.jar;%OMS_HOME%/Central/Lib/Modular.Fcp.Client.jar;%OMS_HOME%/Central/Lib/Modular.Fcp.Server.jar;%OMS_HOME%/Central/Lib/Modular.Oms.Server.jar
SET LIB_PATH=%THIRDPARTY_LIBS_PATH%;%MODULAR_LIBS_PATH%;

PUSHD .

CD /d "%OMS_HOME%\Central\Run"

"%JAVA_HOME%\bin\java" -cp "%LIB_PATH%" -Djava.library.path="%OMS_HOME%\Central\Lib" -Doms.home="%OMS_HOME%" -Ddispatch.client.name="%DSP_CLIENTNAME%" -Ddispatch.install="%DSP_INSTALL%" -Ddispatch.root="%DSP_ROOT%" com.mmsi.omsservices.omsrouter.OMSrouterService %*

POPD
