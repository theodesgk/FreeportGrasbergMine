@echo off

call "SetEnvironment"

SET APPLICATION_NAME=OMSrouter
..\run\%APPLICATION_NAME%.exe -r ..\run\%APPLICATION_NAME%.conf
