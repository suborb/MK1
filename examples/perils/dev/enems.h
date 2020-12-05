// MTE MK1 (la Churrera) v4
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Generated by ene2h.exe from ..\enems\enems.ene
// Copyleft 2010, 2017, 2020 by The Mojon Twins

typedef struct {
	unsigned char x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
#if defined PLAYER_CAN_FIRE || defined ENABLE_SWORD
	unsigned char life;
#endif
} MALOTE;

MALOTE malotes [] = {
	// Pantalla 0
 	{208, 80, 128, 80, 208, 80, -2, 0, 3},
 	{96, 128, 96, 32, 96, 128, 0, -2, 1},
 	{128, 128, 128, 128, 192, 128, 1, 0, 2},

	// Pantalla 1
 	{128, 80, 16, 80, 128, 80, -2, 0, 3},
 	{32, 128, 32, 128, 96, 128, 1, 0, 2},
 	{160, 112, 160, 32, 160, 112, 0, -1, 0},

	// Pantalla 2
 	{128, 128, 16, 128, 128, 128, -2, 0, 3},
 	{192, 16, 192, 16, 192, 96, 0, 2, 1},
 	{80, 64, 80, 64, 112, 80, 1, 1, 2},

	// Pantalla 3
 	{48, 80, 48, 32, 48, 80, 0, -2, 3},
 	{176, 80, 128, 80, 176, 80, -1, 0, 2},
 	{208, 96, 112, 96, 208, 96, -1, 0, 0},

	// Pantalla 4
 	{112, 112, 96, 112, 112, 112, -1, 0, 2},
 	{128, 80, 128, 80, 144, 80, 2, 0, 1},
 	{176, 48, 160, 48, 176, 48, -1, 0, 3},

	// Pantalla 5
 	{64, 80, 64, 80, 80, 80, 1, 0, 2},
 	{160, 48, 160, 48, 160, 96, 0, 1, 3},
 	{32, 96, 32, 48, 32, 96, 0, -2, 0},

	// Pantalla 6
 	{80, 48, 80, 48, 80, 96, 0, 1, 2},
 	{112, 96, 112, 48, 112, 96, 0, -2, 3},
 	{144, 80, 144, 80, 160, 80, 1, 0, 1},

	// Pantalla 7
 	{144, 80, 112, 80, 144, 80, -2, 0, 2},
 	{80, 16, 80, 16, 80, 80, 0, 2, 3},
 	{32, 128, 32, 128, 144, 128, 2, 0, 1},

	// Pantalla 8
 	{32, 128, 32, 128, 192, 128, 2, 0, 4},
 	{64, 64, 64, 64, 208, 64, 1, 0, 2},
 	{192, 48, 80, 32, 192, 48, -1, -1, 3},

	// Pantalla 9
 	{16, 64, 16, 64, 192, 64, 2, 0, 4},
 	{32, 128, 32, 128, 176, 128, 2, 0, 2},
 	{32, 32, 32, 32, 176, 32, 1, 0, 3},

	// Pantalla 10
 	{96, 128, 32, 128, 96, 128, -2, 0, 2},
 	{112, 80, 32, 80, 112, 96, -2, 2, 3},
 	{176, 16, 176, 16, 176, 64, 0, 1, 1},

	// Pantalla 11
 	{112, 32, 80, 32, 112, 32, -1, 0, 1},
 	{176, 80, 176, 80, 208, 80, 1, 0, 2},
 	{96, 64, 96, 64, 96, 112, 0, 1, 3},

	// Pantalla 12
 	{96, 48, 96, 48, 192, 48, 2, 0, 2},
 	{48, 32, 16, 32, 48, 32, -1, 0, 3},
 	{64, 48, 16, 48, 64, 112, -2, 2, 0},

	// Pantalla 13
 	{64, 80, 64, 80, 128, 80, 2, 0, 2},
 	{128, 128, 48, 128, 128, 128, -1, 0, 3},
 	{64, 32, 16, 32, 64, 32, -1, 0, 1},

	// Pantalla 14
 	{32, 32, 32, 32, 80, 32, 2, 0, 3},
 	{208, 128, 96, 128, 208, 128, -2, 0, 2},
 	{32, 16, 32, 16, 64, 112, 2, 2, 0},

	// Pantalla 15
 	{144, 64, 32, 64, 144, 64, -2, 0, 1},
 	{192, 96, 192, 32, 192, 96, 0, -1, 2},
 	{160, 128, 96, 128, 160, 128, -2, 0, 3},

	// Pantalla 16
 	{112, 80, 112, 80, 176, 80, 1, 0, 2},
 	{208, 48, 144, 48, 208, 48, -1, 0, 3},
 	{64, 48, 64, 48, 80, 48, 1, 0, 3},

	// Pantalla 17
 	{144, 128, 112, 128, 144, 128, -1, 0, 1},
 	{176, 32, 112, 32, 176, 32, -1, 0, 4},
 	{80, 128, 80, 48, 80, 128, 0, -2, 2},

	// Pantalla 18
 	{176, 48, 64, 48, 176, 48, -2, 0, 4},
 	{32, 16, 32, 16, 32, 112, 0, 2, 2},
 	{160, 128, 80, 128, 160, 128, -1, 0, 2},

	// Pantalla 19
 	{128, 48, 48, 48, 128, 48, -2, 0, 4},
 	{112, 128, 64, 128, 112, 128, -1, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 20
 	{208, 48, 208, 48, 208, 80, 0, 1, 1},
 	{128, 128, 80, 128, 128, 128, -1, 0, 2},
 	{160, 64, 160, 64, 160, 128, 0, 2, 3},

	// Pantalla 21
 	{112, 128, 112, 128, 176, 128, 1, 0, 3},
 	{80, 128, 16, 128, 80, 128, -1, 0, 2},
 	{48, 16, 48, 16, 48, 80, 0, 2, 1},

	// Pantalla 22
 	{176, 80, 176, 80, 208, 80, 1, 0, 2},
 	{128, 32, 128, 32, 208, 64, 2, 2, 3},
 	{112, 96, 64, 96, 112, 96, -1, 0, 1},

	// Pantalla 23
 	{208, 32, 208, 32, 208, 128, 0, 2, 4},
 	{64, 112, 64, 112, 192, 112, 2, 0, 4},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 24
 	{80, 96, 80, 16, 80, 96, 0, -1, 0},
 	{128, 80, 128, 80, 192, 80, 1, 0, 2},
 	{144, 128, 144, 128, 208, 128, 1, 0, 3},

	// Pantalla 25
 	{112, 128, 48, 128, 112, 128, -1, 0, 2},
 	{32, 80, 32, 80, 64, 80, 1, 0, 1},
 	{112, 16, 112, 16, 112, 128, 0, 2, 3},

	// Pantalla 26
 	{208, 128, 176, 96, 208, 128, -1, -1, 3},
 	{96, 16, 96, 16, 96, 48, 0, 1, 2},
 	{32, 128, 32, 64, 32, 128, 0, -2, 3},

	// Pantalla 27
 	{128, 48, 96, 48, 128, 48, -1, 0, 2},
 	{192, 80, 192, 32, 192, 80, 0, -1, 3},
 	{208, 112, 64, 112, 208, 112, -2, 0, 4},

	// Pantalla 28
 	{96, 112, 96, 112, 128, 112, 1, 0, 2},
 	{128, 64, 96, 64, 128, 64, -1, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 29
 	{112, 80, 112, 80, 112, 128, 0, 2, 1},
 	{208, 48, 208, 48, 208, 112, 0, 2, 2},
 	{160, 64, 160, 64, 160, 128, 0, 2, 3},

	// Pantalla 30
 	{80, 96, 80, 96, 176, 96, 2, 0, 3},
 	{112, 32, 112, 32, 112, 64, 0, 2, 1},
 	{192, 32, 192, 32, 192, 96, 0, 2, 2},

	// Pantalla 31
 	{32, 16, 32, 16, 32, 64, 0, 2, 2},
 	{144, 96, 144, 96, 208, 96, 2, 0, 1},
 	{112, 32, 112, 32, 112, 80, 0, 1, 1},

	// Pantalla 32
 	{80, 64, 16, 64, 80, 64, -2, 0, 3},
 	{112, 128, 112, 128, 160, 128, 2, 0, 2},
 	{96, 48, 96, 48, 96, 112, 0, 2, 1},

	// Pantalla 33
 	{32, 16, 32, 16, 32, 112, 0, 2, 2},
 	{80, 48, 80, 48, 80, 112, 0, 1, 3},
 	{64, 128, 48, 128, 64, 128, -2, 0, 1},

	// Pantalla 34
 	{48, 64, 48, 64, 192, 64, 2, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 35
 	{16, 80, 16, 80, 160, 80, 2, 0, 4},
 	{144, 16, 144, 16, 144, 112, 0, 2, 3},
 	{208, 80, 176, 80, 208, 80, -1, 0, 1},

	// Pantalla 36
 	{144, 128, 80, 128, 144, 128, -2, 0, 2},
 	{128, 64, 128, 64, 176, 80, 1, 1, 3},
 	{128, 16, 128, 16, 208, 16, 1, 0, 0},

	// Pantalla 37
 	{96, 128, 32, 128, 96, 128, -1, 0, 3},
 	{112, 48, 48, 48, 112, 48, -1, 0, 2},
 	{160, 128, 160, 128, 192, 128, 1, 0, 1},

	// Pantalla 38
 	{192, 112, 192, 16, 192, 112, 0, -1, 4},
 	{32, 16, 32, 16, 144, 16, 1, 0, 2},
 	{160, 64, 80, 64, 160, 64, -1, 0, 3},

	// Pantalla 39
 	{64, 80, 32, 32, 64, 80, -1, -1, 3},
 	{64, 16, 32, 16, 64, 128, -1, 1, 2},
 	{160, 16, 160, 16, 160, 128, 0, 2, 4},

	// Pantalla 40
 	{32, 64, 32, 64, 192, 64, 2, 0, 4},
 	{176, 128, 112, 128, 176, 128, -2, 0, 3},
 	{64, 48, 64, 48, 160, 48, 1, 0, 2},

	// Pantalla 41
 	{64, 128, 64, 128, 80, 128, 1, 0, 1},
 	{128, 128, 128, 128, 192, 128, 2, 0, 2},
 	{96, 32, 96, 32, 96, 112, 0, 2, 3},

	// Pantalla 42
 	{32, 80, 32, 80, 64, 80, 1, 0, 2},
 	{192, 80, 128, 80, 192, 80, -1, 0, 3},
 	{192, 32, 112, 32, 192, 32, -2, 0, 1},

	// Pantalla 43
 	{144, 96, 144, 96, 208, 96, 2, 0, 4},
 	{208, 64, 144, 64, 208, 64, -1, 0, 2},
 	{48, 32, 32, 32, 48, 32, -1, 0, 2},

	// Pantalla 44
 	{80, 64, 80, 64, 192, 64, 2, 0, 4},
 	{16, 48, 16, 48, 64, 48, 2, 0, 2},
 	{96, 112, 96, 112, 176, 112, 2, 0, 3},

	// Pantalla 45
 	{208, 128, 208, 64, 208, 128, 0, -2, 4},
 	{96, 128, 96, 128, 176, 128, 2, 0, 2},
 	{96, 48, 96, 48, 128, 96, 2, 2, 3},

	// Pantalla 46
 	{32, 16, 32, 16, 32, 80, 0, 2, 1},
 	{144, 96, 144, 96, 208, 96, 2, 0, 2},
 	{64, 48, 64, 48, 112, 64, 1, 1, 3},

	// Pantalla 47
 	{176, 48, 176, 48, 192, 48, 1, 0, 1},
 	{128, 48, 128, 48, 160, 64, 1, 1, 2},
 	{32, 64, 32, 64, 32, 112, 0, 1, 3},

	// Pantalla 48
 	{112, 48, 112, 48, 192, 48, 2, 0, 2},
 	{192, 128, 112, 128, 192, 128, -1, 0, 3},
 	{208, 128, 208, 16, 208, 128, 0, -2, 4},

	// Pantalla 49
 	{80, 16, 64, 16, 80, 96, -2, 2, 1},
 	{16, 128, 16, 128, 128, 128, 2, 0, 2},
 	{48, 48, 16, 48, 48, 48, -1, 0, 3},

	// Pantalla 50
 	{64, 128, 64, 48, 64, 128, 0, -1, 2},
 	{128, 32, 112, 32, 128, 128, -2, 2, 2},
 	{176, 32, 144, 32, 176, 32, -1, 0, 3},

	// Pantalla 51
 	{96, 32, 96, 32, 160, 32, 2, 0, 2},
 	{96, 32, 96, 32, 160, 32, 1, 0, 0},
 	{32, 112, 32, 112, 208, 128, 1, 1, 2},

	// Pantalla 52
 	{80, 128, 48, 128, 80, 128, -1, 0, 1},
 	{16, 32, 16, 32, 48, 32, 1, 0, 3},
 	{112, 32, 112, 32, 176, 32, 2, 0, 1},

	// Pantalla 53
 	{64, 32, 64, 32, 144, 32, 2, 0, 3},
 	{144, 128, 48, 128, 144, 128, -2, 0, 2},
 	{144, 64, 144, 64, 208, 64, 1, 0, 1},

	// Pantalla 54
 	{128, 128, 16, 128, 128, 128, -2, 0, 3},
 	{64, 48, 64, 48, 160, 48, 2, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 55
 	{176, 80, 176, 80, 208, 80, 1, 0, 1},
 	{96, 64, 80, 64, 96, 64, -1, 0, 2},
 	{64, 128, 32, 128, 64, 128, -1, 0, 1},

	// Pantalla 56
 	{16, 128, 16, 128, 96, 128, 2, 0, 2},
 	{112, 128, 112, 128, 160, 128, 1, 0, 3},
 	{112, 48, 112, 48, 112, 96, 0, 1, 1},

	// Pantalla 57
 	{16, 96, 16, 96, 80, 96, 1, 0, 2},
 	{160, 96, 160, 96, 208, 96, 1, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 58
 	{112, 96, 112, 96, 176, 96, 2, 0, 2},
 	{96, 32, 96, 32, 96, 80, 0, 1, 3},
 	{80, 96, 32, 96, 80, 96, -1, 0, 1},

	// Pantalla 59
 	{64, 96, 48, 96, 64, 96, -1, 0, 1},
 	{64, 48, 64, 48, 80, 48, 1, 0, 2},
 	{112, 80, 112, 80, 192, 80, 2, 0, 3},

	// Pantalla 60
 	{192, 48, 96, 48, 192, 48, -2, 0, 1},
 	{64, 112, 64, 16, 64, 112, 0, -1, 4},
 	{160, 112, 96, 112, 160, 112, -1, 0, 2},

	// Pantalla 61
 	{128, 16, 32, 16, 128, 48, -1, 1, 3},
 	{160, 96, 160, 32, 160, 96, 0, -2, 1},
 	{144, 96, 32, 96, 144, 96, -2, 0, 2},

	// Pantalla 62
 	{96, 32, 48, 32, 96, 112, -2, 2, 3},
 	{128, 128, 128, 128, 192, 128, 2, 0, 1},
 	{192, 64, 144, 64, 192, 64, -1, 0, 2},

	// Pantalla 63
 	{208, 64, 128, 64, 208, 64, -2, 0, 2},
 	{80, 80, 80, 80, 144, 128, 2, 2, 3},
 	{128, 32, 64, 32, 128, 32, -1, 0, 1},

	// Pantalla 64
 	{192, 96, 128, 96, 192, 96, -2, 0, 2},
 	{96, 48, 96, 48, 96, 112, 0, 2, 4},
 	{48, 112, 48, 112, 96, 112, 1, 0, 1},

	// Pantalla 65
 	{48, 32, 48, 32, 176, 32, 2, 0, 2},
 	{160, 96, 64, 96, 160, 96, -2, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 66
 	{128, 64, 64, 64, 128, 64, -2, 0, 1},
 	{48, 16, 48, 16, 48, 80, 0, 2, 3},
 	{112, 112, 112, 112, 176, 112, 1, 0, 2},

	// Pantalla 67
 	{48, 112, 48, 112, 128, 112, 1, 0, 4},
 	{64, 32, 64, 32, 128, 32, 1, 0, 1},
 	{192, 32, 192, 32, 192, 128, 0, 2, 2},

	// Pantalla 68
 	{48, 96, 48, 96, 112, 96, 1, 0, 1},
 	{128, 80, 128, 32, 128, 80, 0, -2, 2},
 	{48, 48, 48, 32, 144, 48, 2, -2, 3},

	// Pantalla 69
 	{64, 32, 64, 32, 64, 64, 0, 1, 2},
 	{80, 80, 80, 80, 128, 80, 2, 0, 1},
 	{144, 128, 144, 128, 176, 128, 1, 0, 3},

	// Pantalla 70
 	{48, 96, 48, 96, 112, 96, 2, 0, 3},
 	{144, 96, 144, 96, 176, 96, 2, 0, 1},
 	{128, 32, 128, 32, 128, 64, 0, 2, 2},

	// Pantalla 71
 	{64, 96, 64, 96, 144, 96, 2, 0, 2},
 	{208, 64, 192, 64, 208, 64, -1, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0}

};

#define N_ENEMS_TYPE_0 17
#define N_ENEMS_TYPE_1 49
#define N_ENEMS_TYPE_2 72
#define N_ENEMS_TYPE_3 59
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
	{88, 4, 0}, 
	{179, 2, 0}, 
	{147, 4, 0}, 
	{149, 4, 0}, 
	{56, 4, 0}, 
	{197, 3, 0}, 
	{129, 3, 0}, 
	{133, 4, 0}, 
	{0, 0, 0}, 
	{212, 4, 0}, 
	{194, 4, 0}, 
	{98, 4, 0}, 
	{136, 4, 0}, 
	{101, 4, 0}, 
	{101, 4, 0}, 
	{100, 4, 0}, 
	{152, 2, 0}, 
	{53, 4, 0}, 
	{40, 4, 0}, 
	{216, 3, 0}, 
	{151, 4, 0}, 
	{199, 4, 0}, 
	{168, 3, 0}, 
	{55, 4, 0}, 
	{55, 3, 0}, 
	{69, 4, 0}, 
	{99, 2, 0}, 
	{38, 4, 0}, 
	{116, 4, 0}, 
	{182, 4, 0}, 
	{22, 4, 0}, 
	{83, 3, 0}, 
	{24, 3, 0}, 
	{114, 4, 0}, 
	{200, 2, 0}, 
	{194, 4, 0}, 
	{168, 4, 0}, 
	{83, 3, 0}, 
	{83, 4, 0}, 
	{23, 3, 0}, 
	{39, 4, 0}, 
	{55, 4, 0}, 
	{34, 3, 0}, 
	{152, 4, 0}, 
	{71, 4, 0}, 
	{87, 4, 0}, 
	{22, 3, 0}, 
	{99, 4, 0}, 
	{54, 3, 0}, 
	{86, 4, 0}, 
	{198, 4, 0}, 
	{98, 4, 0}, 
	{72, 4, 0}, 
	{167, 4, 0}, 
	{113, 3, 0}, 
	{115, 4, 0}, 
	{36, 4, 0}, 
	{149, 4, 0}, 
	{180, 2, 0}, 
	{195, 4, 0}, 
	{147, 4, 0}, 
	{51, 4, 0}, 
	{131, 3, 0}, 
	{88, 4, 0}, 
	{34, 4, 0}, 
	{0, 0, 0}, 
	{100, 4, 0}, 
	{151, 4, 0}, 
	{34, 4, 0}, 
	{51, 4, 0}, 
	{0, 0, 0}, 
	{38, 4, 0}
};

#define N_HOTSPOTS_TYPE_0 3
#define N_HOTSPOTS_TYPE_1 0
#define N_HOTSPOTS_TYPE_2 5
#define N_HOTSPOTS_TYPE_3 14
#define N_HOTSPOTS_TYPE_4 50
#define N_HOTSPOTS_TYPE_5 0
#define N_HOTSPOTS_TYPE_6 0
#define N_HOTSPOTS_TYPE_7 0

