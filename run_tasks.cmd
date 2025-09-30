REM Run this script to compile and execute the output program
@echo off

echo.
echo Building with mingw32-make...
cd build
mingw32-make >> build.log 2>>&1
echo.
echo Executing output program...
echo.
cd bin
start "Output from output process" cmd /c ".\output.exe & pause"
cd ..\..
echo.
echo Done
echo.