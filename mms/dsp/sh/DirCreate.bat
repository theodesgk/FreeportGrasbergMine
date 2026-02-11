@echo off
REM ***************************************************************
REM * This script creates a new directory  
REM * 
REM * Usage :
REM *     DirCreate.bat <Dir> <Path>
REM *        <Path>     - where to create directory
REM *        <DIR>      - The directory to create
REM *************************************************************** 
REM * Change the shell current directory to the last argument for e.g C:\mms\OMS
PUSHD %2
REM * Check the arugments
if ""%1"" == "" goto END

MD %1

:END
REM * Change the shell current directory to orginal current directory.
POPD