@echo off
cd /d "%~dp0"
rem self-elevate to admin (OpenProcess on dota2 needs it)
net session >nul 2>&1 || (
    powershell -NoProfile -Command "Start-Process -Verb RunAs -FilePath '%~f0' -ArgumentList '%*'"
    exit /b
)
rem pass --watch to keep re-dumping automatically after each Dota patch
dota2_dumper.exe %*
echo.
pause
