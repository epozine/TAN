SETLOCAL

RMDIR /S /Q vs2015
MKDIR vs2015
CD vs2015

SET CMAKE_PREFIX_PATH=c:\Qt\Qt5.6.3\5.6.3\msvc2015_64
cmake .. -G "Visual Studio 14 2015" -A x64