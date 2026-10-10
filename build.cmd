@echo off
setlocal

set "ROOT=%~dp0"
set "BUILD_DIR=%ROOT%build"

cmake -S "%ROOT%." -B "%BUILD_DIR%"
if errorlevel 1 exit /b %errorlevel%

cmake --build "%BUILD_DIR%" --config Release
if errorlevel 1 exit /b %errorlevel%

ctest --test-dir "%BUILD_DIR%" -C Release --output-on-failure
if errorlevel 1 exit /b %errorlevel%

exit /b 0
