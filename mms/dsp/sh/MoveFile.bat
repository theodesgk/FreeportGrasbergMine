@echo off
REM ***************************************************************
REM * This script move a file  
REM * 
REM * Usage :
REM *     DirCreate.bat <Path\File> <Dir>
REM *        <Path\File> - file
REM *        <DIR>        - directory to move the file
REM *************************************************************** 
REM * Check the arugments
if ""%1"" == "" goto END
if ""%2"" == "" goto END

MOVE %1 %2

:END