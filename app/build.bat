@echo off
echo Compiling Windows Login App...
cl.exe main.cpp /Fe:main.exe /link user32.lib gdi32.lib
if %errorlevel% equ 0 (
    echo Build successful!
    echo Running application...
    main.exe
) else (
    echo Build failed!
)
pause