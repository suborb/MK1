// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Generated by ene2h.exe from ..\enems\enems.ene
// Copyleft 2010, 2017 by The Mojon Twins

typedef struct {
	unsigned char x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
#ifdef PLAYER_CAN_FIRE
	unsigned char life;
#endif
} MALOTE;

MALOTE malotes [] = {
	// Pantalla 0
 	{64, 16, 64, 16, 64, 128, 0, 4, 3},
 	{208, 16, 208, 16, 96, 16, -2, 0, 1},
 	{192, 0, 192, 0, 112, 0, -2, 0, 1},

	// Pantalla 1
 	{128, 0, 128, 0, 128, 64, 0, 1, 2},
 	{144, 16, 144, 16, 176, 96, 2, 2, 2},
 	{96, 0, 96, 0, 96, 32, 0, 1, 2},

	// Pantalla 2
 	{16, 32, 16, 32, 96, 32, 2, 0, 1},
 	{144, 96, 144, 96, 144, 0, 0, -1, 3},
 	{176, 0, 176, 0, 176, 80, 0, 1, 2},

	// Pantalla 3
 	{96, 112, 96, 112, 48, 112, -1, 0, 3},
 	{48, 0, 48, 0, 48, 32, 0, 1, 1},
 	{208, 0, 208, 0, 208, 64, 0, 2, 1},

	// Pantalla 4
 	{64, 0, 64, 0, 64, 80, 0, 1, 1},
 	{96, 0, 96, 0, 96, 64, 0, 1, 1},
 	{160, 0, 160, 0, 208, 80, 2, 2, 2},

	// Pantalla 5
 	{80, 112, 80, 112, 16, 112, -2, 0, 2},
 	{96, 0, 96, 0, 0, 0, -1, 0, 2},
 	{224, 0, 224, 0, 224, 48, 0, 1, 2},

	// Pantalla 6
 	{128, 16, 128, 16, 128, 128, 0, 2, 3},
 	{160, 0, 160, 0, 160, 112, 0, 1, 1},
 	{16, 96, 16, 96, 80, 128, 4, 4, 2},

	// Pantalla 7
 	{16, 80, 16, 80, 96, 48, 1, -1, 1},
 	{16, 16, 16, 16, 96, 16, 2, 0, 2},
 	{160, 0, 160, 0, 160, 144, 0, 2, 3},

	// Pantalla 8
 	{48, 32, 48, 32, 144, 32, 2, 0, 3},
 	{112, 48, 112, 48, 112, 128, 0, 1, 2},
 	{160, 96, 160, 96, 160, 0, 0, -2, 3},

	// Pantalla 9
 	{96, 128, 96, 128, 96, 16, 0, -2, 4},
 	{144, 16, 144, 16, 176, 112, 2, 2, 3},
 	{112, 48, 112, 48, 32, 16, -2, -2, 1},

	// Pantalla 10
 	{64, 128, 64, 128, 208, 128, 1, 0, 4},
 	{208, 112, 208, 112, 112, 112, -1, 0, 1},
 	{64, 16, 64, 16, 96, 16, 1, 0, 3},

	// Pantalla 11
 	{16, 128, 16, 128, 160, 128, 1, 0, 4},
 	{48, 112, 48, 112, 48, 64, 0, -1, 4},
 	{80, 48, 80, 48, 160, 96, 2, 2, 2},

	// Pantalla 12
 	{208, 112, 208, 112, 128, 112, -1, 0, 3},
 	{208, 80, 208, 80, 208, 16, 0, -1, 2},
 	{16, 16, 16, 16, 96, 128, 4, 4, 3},

	// Pantalla 13
 	{64, 0, 64, 0, 112, 48, 2, 2, 1},
 	{16, 64, 16, 64, 80, 112, 1, 1, 2},
 	{208, 16, 208, 16, 192, 128, -2, 2, 3},

	// Pantalla 14
 	{16, 0, 16, 0, 112, 32, 1, 1, 2},
 	{208, 0, 208, 0, 176, 48, -2, 2, 3},
 	{64, 64, 64, 64, 96, 0, 1, -1, 1},

	// Pantalla 15
 	{160, 112, 160, 112, 160, 64, 0, -1, 4},
 	{192, 32, 192, 32, 48, 32, -1, 0, 4},
 	{64, 0, 64, 0, 176, 16, 1, 1, 3},

	// Pantalla 16
 	{192, 48, 192, 48, 80, 48, -1, 0, 4},
 	{112, 32, 112, 32, 176, 32, 1, 0, 3},
 	{64, 80, 64, 80, 192, 112, 2, 2, 2},

	// Pantalla 17
 	{192, 48, 192, 48, 32, 48, -1, 0, 4},
 	{16, 32, 16, 32, 128, 32, 1, 0, 1},
 	{16, 64, 16, 64, 112, 112, 2, 2, 2},

	// Pantalla 18
 	{208, 64, 208, 64, 128, 64, -1, 0, 2},
 	{48, 16, 48, 16, 48, 80, 0, 2, 1},
 	{64, 32, 64, 32, 64, 80, 0, 2, 3},

	// Pantalla 19
 	{16, 112, 16, 112, 112, 112, 1, 0, 1},
 	{192, 128, 192, 128, 192, 16, 0, -1, 4},
 	{112, 48, 112, 48, 16, 48, -2, 0, 3},

	// Pantalla 20
 	{176, 48, 176, 48, 32, 48, -1, 0, 1},
 	{176, 64, 176, 64, 48, 64, -1, 0, 1},
 	{16, 0, 16, 0, 192, 32, 2, 2, 2},

	// Pantalla 21
 	{32, 112, 32, 112, 192, 112, 2, 0, 4},
 	{192, 32, 192, 32, 48, 32, -2, 0, 4},
 	{176, 80, 176, 80, 48, 80, -1, 0, 1},

	// Pantalla 22
 	{208, 80, 208, 80, 32, 80, -1, 0, 4},
 	{64, 64, 64, 64, 176, 64, 1, 0, 2},
 	{16, 0, 16, 0, 0, 144, -3, 3, 2},

	// Pantalla 23
 	{16, 48, 16, 48, 208, 48, 1, 0, 4},
 	{96, 64, 96, 64, 96, 128, 0, 1, 1},
 	{208, 80, 208, 80, 128, 128, -2, 2, 3},

	// Pantalla 24
 	{96, 32, 96, 32, 96, 96, 0, 2, 1},
 	{128, 80, 128, 80, 224, 80, 2, 0, 4},
 	{96, 112, 96, 112, 16, 112, -1, 0, 3},

	// Pantalla 25
 	{112, 16, 112, 16, 112, 80, 0, 1, 2},
 	{48, 96, 48, 96, 48, 0, 0, -2, 1},
 	{176, 48, 176, 48, 176, 128, 0, 2, 3},

	// Pantalla 26
 	{160, 32, 160, 32, 192, 80, 2, 2, 1},
 	{96, 48, 96, 48, 96, 0, 0, -1, 2},
 	{144, 144, 144, 144, 48, 144, -1, 0, 3},

	// Pantalla 27
 	{32, 80, 32, 80, 32, 16, 0, -2, 1},
 	{192, 80, 192, 80, 192, 32, 0, -2, 2},
 	{112, 80, 112, 80, 112, 32, 0, -1, 3},

	// Pantalla 28
 	{208, 48, 208, 48, 32, 48, -1, 0, 4},
 	{64, 32, 64, 32, 192, 32, 1, 0, 2},
 	{80, 96, 80, 96, 112, 96, 1, 0, 1},

	// Pantalla 29
 	{112, 16, 112, 16, 16, 80, -2, 2, 3},
 	{176, 64, 176, 64, 176, 96, 0, 1, 1},
 	{208, 80, 208, 80, 208, 128, 0, 1, 1}

};

#define N_ENEMS_TYPE_0 0
#define N_ENEMS_TYPE_1 27
#define N_ENEMS_TYPE_2 25
#define N_ENEMS_TYPE_3 23
#define N_ENEMS_TYPE_5 0
#define N_ENEMS_TYPE_6 0
#define N_ENEMS_TYPE_7 0

// This is output the way it worked originally, please modify if you need
// You may want to add type 5 or 6's below.
#define BADDIES_COUNT (N_ENEMS_TYPE_1+N_ENEMS_TYPE_2+N_ENEMS_TYPE_3)

typedef struct {
	unsigned char xy, tipo, act;
} HOTSPOT;

HOTSPOT hotspots [] = {
	{22, 2, 0}, 
	{115, 2, 0}, 
	{113, 1, 0}, 
	{216, 1, 0}, 
	{81, 1, 0}, 
	{24, 1, 0}, 
	{98, 1, 0}, 
	{115, 1, 0}, 
	{69, 1, 0}, 
	{129, 2, 0}, 
	{209, 2, 0}, 
	{18, 1, 0}, 
	{200, 1, 0}, 
	{100, 1, 0}, 
	{148, 1, 0}, 
	{34, 1, 0}, 
	{66, 1, 0}, 
	{209, 1, 0}, 
	{19, 1, 0}, 
	{113, 1, 0}, 
	{133, 1, 0}, 
	{35, 1, 0}, 
	{70, 1, 0}, 
	{87, 1, 0}, 
	{129, 1, 0}, 
	{87, 1, 0}, 
	{114, 1, 0}, 
	{100, 1, 0}, 
	{129, 1, 0}, 
	{212, 1, 0}
};

#define N_HOTSPOTS_TYPE_0 0
#define N_HOTSPOTS_TYPE_1 26
#define N_HOTSPOTS_TYPE_2 4
#define N_HOTSPOTS_TYPE_3 0
#define N_HOTSPOTS_TYPE_4 0
#define N_HOTSPOTS_TYPE_5 0
#define N_HOTSPOTS_TYPE_6 0
#define N_HOTSPOTS_TYPE_7 0

