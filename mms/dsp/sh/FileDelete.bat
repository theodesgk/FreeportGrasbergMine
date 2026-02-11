@echo off
REM ***************************************************************
REM * This script creates a new directory  
REM * 
REM * Usage :
REM *     FileDelete.bat <File> <Path>
REM *        <Path>     - where to create directory
REM *        <File>      - The file to delete
REM *************************************************************** 
REM * Change the shell current directory to the last argument for e.g C:\mms\OMS
PUSHD %2
REM * Check the arugments
if ""%1"" == "" goto END

DEL %1

:END
REM * Change the shell current directory to orginal current directory.
POPD
