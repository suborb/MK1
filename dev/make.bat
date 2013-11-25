@echo off
rem Cambia "%1" por el nombre de tu g�ego.
echo ### COMPILANDO SCRIPT ###
cd ..\script
msc %1.spt msc.h 24
copy *.h ..\dev
cd ..\dev
echo -------------------------------------------------------------------------------
echo ### REGENERANDO MAPA ###
cd ..\map
rem cambia ALTO y ANCHO por los valores de tu mapa:
..\utils\mapcnv mapa.map ALTO ANCHO 15 10 15 packed
copy mapa.h ..\dev
cd ..\dev
echo -------------------------------------------------------------------------------
echo ### COMPILANDO GUEGO ###
zcc +zx -vn %1.c -o %1.bin -lndos -lsplib2 -zorg=24200
echo -------------------------------------------------------------------------------
echo ### CONSTRUYENDO CINTA ###
rem cambia LOADER por el nombre que quieres que salga en Program:
..\utils\bas2tap -a10 -sLOADER loader.bas loader.tap
..\utils\bin2tap -o screen.tap -a 16384 loading.bin
..\utils\bin2tap -o main.tap -a 24200 %1.bin
copy /b loader.tap + screen.tap + main.tap %1.tap
echo -------------------------------------------------------------------------------
echo ### LIMPIANDO ###
del loader.tap
del screen.tap
del main.tap
del %1.bin
echo -------------------------------------------------------------------------------
echo ### DONE ###