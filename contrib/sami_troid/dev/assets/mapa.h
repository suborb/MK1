// Mapa.h 
// Generated by rle62map_sp v0.2.20200214
// Copyleft 2020 by The Mojon Twins

extern unsigned char mapa [0];

#asm
    ._mapa
        BINARY "mapa.map.bin"
#endasm

#define MAX_CERROJOS 2

typedef struct {
    unsigned char np, x, y, st;
} CERROJOS;

extern CERROJOS cerrojos [0];

#asm
    ._cerrojos
    #if MAX_CERROJOS > 0
        BINARY "mapa.locks.bin"
    #endif	
#endasm

