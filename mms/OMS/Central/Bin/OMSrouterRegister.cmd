@echo off

call "SetEnvironment"

SET APPLICATION_NAME=OMSrouter
..\run\%APPLICATION_NAME%.exe -i ..\run\%APPLICATION_NAME%.conf
