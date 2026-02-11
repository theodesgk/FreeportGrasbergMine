@echo off

call "SetEnvironment"

SET APPLICATION_NAME=Spooler
..\run\%APPLICATION_NAME%.exe -r ..\run\%APPLICATION_NAME%.conf
