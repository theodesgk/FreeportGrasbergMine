@echo off

call "SetEnvironment"

SET APPLICATION_NAME=OMSrouter
..\run\%APPLICATION_NAME%.exe -c ..\run\%APPLICATION_NAME%.conf
