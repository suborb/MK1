// MTE MK1 v4.7
// Copyleft 2010, 2011 by The Mojon Twins

// Add here your custom routines & vars

#ifdef ENABLE_CODE_HOOKS

	// Custom routines for Ramiro 4

	// bit 0 = which set.
	// bit 1 = killing eye.
	// bit 2 = trap!
	// bit 3 = trap but with coins
	unsigned char map_behaviours [] = {
		 0,  0,  0,  5,  0,  0, 
		 0,  0,  0,  3,  1,  0,
		 0,  0,  3,  3,  5,  0,
		 5,  1,  1,  1,  1,  0,
		13,  1,  1,  1,  1,  0
	}; 

	// Evil eye things

	#define EYE_X VIEWPORT_X+7*2
	#define EYE_Y VIEWPORT_Y+2*2

	unsigned char evil_eye_state;
	unsigned char evil_eye_counter;

	unsigned char evil_eye_state_cts [] = { 30, 30, 60, 5, 5 };
	unsigned char evil_eye_state_tiles [] = { 29, 30, 31, 30, 29 };

	unsigned char evil_eye_screen;

	// Blocks trap

	#define MAX_TRAP_BLOCKS	3
	#define TRAP_CHANCE 	7 		// Power of two minus one!
	#define BLOCK_HIT 		5

	unsigned char trap_active;
	unsigned char trap_bx [MAX_TRAP_BLOCKS];
	unsigned char trap_by [MAX_TRAP_BLOCKS];
	unsigned char trap_bt [MAX_TRAP_BLOCKS];

	unsigned char trap_screen;
	unsigned char trap_coins;
	unsigned char _trap_bx;
	unsigned char _trap_by;
	unsigned char _trap_bt;
	unsigned char rda, rdb;

	// Carrying an object

	unsigned char *object_cells [] = {
		0, extra_sprite_17_a, extra_sprite_18_a, extra_sprite_19_a, extra_sprite_20_a
	};
	unsigned char pinv;
	struct sp_SS *sp_pinv;
	unsigned char *pinv_next_frame, *pinv_current_frame;

	// Offers

	#define OFRENDAS_X 		21
	#define OFRENDAS_Y 		23
	unsigned char pofrendas, pofrendas_old; 

	// Text

		unsigned char temp_string [] = "                        ";

	//                        XXXXXXXXXXXXXXXXXXXXXX
	unsigned char text0 [] = "POR OSIRIS Y POR APIS%"
							 "MIRADME BIEN: SOY EL%"
							 "ALTAR DE LAS OFRENDAS.%"
							 "TE DARE COSAS SI TRAES%"
							 "MONEDAS AL MENDA.";

	unsigned char text1 [] = "UN ROLLO DE PAPEL DEL%"
							 "CULO DOBLE CAPA, QUE%"
							 "TE DEJA SUAVITO Y TE%"
							 "QUITA LA ZURRAPA.";				 

	unsigned char text2 [] = "UNA FLAUTA DE FAKIR%"
							 "IMPORTADA DE ORIENTE%"
							 "QUE TE DUERME CON SU%"
							 "MUSICA O SI TE DA EN%"
							 "LOS DIENTES.";

	unsigned char text3 [] = "UNAS BRAGAS PRINCESA%"
							 "ROBADAS DE UN CAJON%"
							 "DE LA LETIZIA ESA.";

	unsigned char text4 [] = "UN TARRO DE GRASA DE%"
							 "CABALLO. PARA QUE%"
							 "QUERRIAS ESTO? LOCO%"
							 "ME HALLO.";

	unsigned char text5 [] = "TES KI YA CARAJAULA,%"
							 "LLEVATE ESO!";

	unsigned char text6 [] = "Y ESTO QUE ES? BEBE-%"
							 "CHARCOS, ESCUCHAPEOS";

	unsigned char text7 [] = "PARA QUE QUIERO ESTO,%"
							 "BOQUIMUELLE?";

	unsigned char text8 [] = "PERO QUE ME TRAES?%"
							 "BOTARATE TALLOCEBOLLA!";

	unsigned char text9 [] = "SOY SONIA LA MOMIA%"
							 "ME DUELE LA PETACA.%"
							 "COMI MUCHAS CHUCHES%"
							 "Y ME HAGO MUCHA CACA.%";

	unsigned char text10 [] = "SOY CLEMENTE, LA%"
							  "SERPIENTE, Y NO PUEO%"
							  "DORMIR. TENGO MUCHO%"
							  "INSOMNIO. QUE PUEDO%"
							  "HACIR?";

	unsigned char text11 [] = "SOY MARISA LA SACER-%"
							  "DOTISA, Y AYER FUI%"
							  "LO PEOR. ME DESMADRE%"
							  "EN UN CUMPLE Y PERDI%"
							  "LA ROPA INTERIOR.";

	unsigned char text12 [] = "GUSTAVO EL ESCLAVO%"
							  "A SU SERVICIO.%"
							  "TRABAJO MUY BARATO%"
							  "PERO EL CUERO ES MI%"
							  "VICIO...";

	unsigned char text13 [] = "JUSTO LO QUE QUERIA!%"
							  "PUEDES PASAR.";

	unsigned char text14 [] = "VAYA INSISTENCIA, TE%"
							  "ABRO MI PIRAMIDE,%"
							  "MONTUNO! QUE CASI PA-%"
							  "RECES EL REY DE LOS%"
							  "HUNOS!";

	unsigned char text15 [] = "LO CONSIGUIO AL FIN!%"
							  "ENSAMBLADO EL PAPIRO%"
							  "SE DISPONE A LEER EL%"
							  "CONJURO NUESTRO BUEN%"
							  "RAMIRO.";

	unsigned char text16 [] = "DICE ASI:%"
							  "- 2 CEBOLLAS%"
							  "- PAPEL DEL CULO%"
							  "- PAN%"
							  "- FAIRY";

	unsigned char text17 [] = "EL POBRE VAMPIRO SE%"
							  "QUEDA CON CARA MONA:%"
							  "NO ES UN CONJURO,%"
							  "ES LA LISTA DEL%"
							  "MERCADONA.";

	unsigned char *texts [] = {
		text0, 								// Bienvenida altar
		text1, text2, text3, text4, 		// Altar describe objetos
		text5, text6, text7, text8, 		// Guardianes mosqueados
		text9, text10, text11, text12, 		// Presentación guardianes
		text13, 							// Puedes pasar
		text14, 							// Ramón el faraón
		text15, text16, text17 				// Final
	};

	unsigned char talk_sounds [] = { 7, 11 };

	// Aux. functions

	void draw_falling_block (void) {
		//draw_coloured_tile (VIEWPORT_X + (_trap_bx << 1), VIEWPORT_Y + (_trap_by << 1), _trap_bt);
		
		#asm
			ld  a, (__trap_bx)
			sla a
			add VIEWPORT_X
			ld  (__x), a

			ld  a, (__trap_by)
			sla a
			add VIEWPORT_Y
			ld  (__y), a
		
			ld  a, (__trap_bt)
			ld  (__t), a

			jp _draw_coloured_tile_do	
		#endasm
	}

	void clear_temp_string (void) {
		#asm
				ld  hl, _temp_string
				ld  de, _temp_string+1
				ld  bc, 23
				ld  a, 32
				ld  (hl), a
				ldir
		#endasm
	}

	void show_text_box (unsigned char n) {
		saca_a_todo_el_mundo_de_aqui ();

		gp_gen = texts [n];

		// Text renderer will read the string and
		// build substrings for draw_text.

		//clear_temp_string ();
		draw_text (4, 6, 40, temp_string);
		rdy = 7;

		while (1) {
			#asm
					// Fill buffer
					ld  de, _temp_string + 1
					ld  hl, (_gp_gen)

				.fill_buffer_loop
					ld  a, (hl)
					or  a
					jr  z, fill_buffer_end
					cp  '%'
					jr  z, fill_buffer_end

					ld  (de), a

					inc hl
					inc de
					jr  fill_buffer_loop

				.fill_buffer_end
					ld  (_gp_gen), hl
			#endasm

			draw_text (4, rdy ++, 40, temp_string);
			clear_temp_string ();
			draw_text (4, rdy ++, 40, temp_string);

			sp_UpdateNow ();
			peta_el_beeper (talk_sounds [rand () & 1]);
		
			if (*gp_gen == 0) break;
			gp_gen ++;
		}

		while (any_key ()); while (!any_key ()); 
	}

	// Hooks

	void hook_system_inits (void) {
		sp_pinv = sp_CreateSpr (sp_MASK_SPRITE, 3, sprite_2_a, 3, TRANSPARENT);
		sp_AddColSpr (sp_pinv, sprite_2_b, TRANSPARENT);
		sp_AddColSpr (sp_pinv, sprite_2_c, TRANSPARENT);
		pinv_current_frame = pinv_next_frame = sprite_2_a;
	}

	void hook_init_game (void) {
		pinv = 0;
		//pinv = 1; pinv_next_frame = object_cells [pinv];

		pofrendas = 0; pofrendas_old = 0xff;
	}

	void hook_mainloop (void) {

		// Eye of horus

		if (evil_eye_screen) {
			if (evil_eye_counter) {
				evil_eye_counter --;
			} else {
				evil_eye_state ++; if (evil_eye_state == 5) evil_eye_state = 0;
				evil_eye_counter = evil_eye_state_cts [evil_eye_state];
				draw_coloured_tile (EYE_X, EYE_Y, evil_eye_state_tiles [evil_eye_state]);
				scenery_info.evil_zone_active = (evil_eye_state == 2);
			}
		}

		sp_Border ((scenery_info.evil_zone_active & half_life) ? 2 : 0);

		// Block trap

		// To make trap active, we detect the player got a new obj.
		if (trap_screen && player.objs != objs_old) {
			trap_active = 1;
			seed = n_pant + 1;
			player.life += BLOCK_HIT;
			scenery_info.allow_type_6 = 1;
			flags [COIN_FLAG] = 0;
			#asm
					ld  hl, _trap_by
					ld  de, _trap_by + 1
					ld  bc, MAX_TRAP_BLOCKS - 1
					ld  a, 0xff
					ld  (hl), a
					ldir
			#endasm
			if (trap_coins) {
				set_map_tile (13, 5, 0, 0);
				sp_UpdateNow ();
				peta_el_beeper (10);
			}
		}

		if (trap_active) {
			
			// throw a new block
			if ((rand () & TRAP_CHANCE) == 1) { 
				#asm
						ld  bc, MAX_TRAP_BLOCKS
					.trap_block_find_loop
						dec c
						ld  hl, _trap_by
						add hl, bc
						ld  a, (hl)
						cp  0xff
						jr  z, trap_block_create_new

						xor a
						or  c
						jr  z, trap_block_find_done
						jr  trap_block_find_loop

					.trap_block_create_new
						xor a
						ld  (hl), a

						push bc
					.trap_block_select_x
						call _rand

						ld  a, l
						and 0xf
						jr  z, trap_block_select_x
						cp  14
						jr  nc, trap_block_select_x
						pop bc

						ld  hl, _trap_bx
						add hl, bc
						ld  (hl), a

						ld  a, (_trap_coins)
						or  a
						jr  nz, trap_block_set_coins

						push bc
						call _rand
						pop bc
						
						ld  a, l
						and 1
						add 6
						jr  trap_block_write

					.trap_block_set_coins
						ld  a, 18

					.trap_block_write
						ld  hl, _trap_bt
						add hl, bc
						ld  (hl), a

					.trap_block_find_done
				#endasm
			}

			// Animate
			if (half_life) {
				for (gpit = 0; gpit < MAX_TRAP_BLOCKS; gpit ++) {

					#asm
							ld  bc, (_gpit)
							ld  b, 0

							ld  hl, _trap_by
							add hl, bc
							ld  a, (hl)
							ld  (__trap_by), a

							ld  hl, _trap_bx
							add hl, bc
							ld  a, (hl)
							ld  (__trap_bx), a

							ld  hl, _trap_bt
							add hl, bc
							ld  a, (hl)
							ld  (__trap_bt), a
					#endasm
					
					if (_trap_by != 0xff) {
						rda = _trap_bx + (_trap_by << 4) - _trap_by;

						// Make fall
						if (_trap_by) map_attr [rda] = 0;
						
						set_map_tile (_trap_bx, _trap_by, map_buff [rda], 0);
						_trap_by ++; rda += 15;

						rdx = (gpx + 8) >> 4; rdy = (gpy + 8) >> 4;

						if (rdx == _trap_bx && rdy == _trap_by) {
							if (trap_coins) { 
								flags [COIN_FLAG] ++;
								peta_el_beeper (5);
								player.life += COINS_REFILL;
								_trap_by = 0xff;
							} else {
								draw_falling_block ();
						
								if (player.estado != EST_PARP) {
									// Crushed!
									sp_UpdateNow ();
									peta_el_beeper (10);
									player.life -= BLOCK_HIT; 
									player.estado = EST_PARP;
									player.ct_estado = 50;

									// Reenter & reset
									hotspots [n_pant].act = 1;
									player.objs --;
									//draw_scr ();
									on_pant = 0xff;
									break;
								} else {
									player.y -= 16<<6;
								}
							}
						} else if (map_attr [rda] == 1) {
							_trap_by = 0xff;
						} else {
							draw_falling_block ();
						
							if (map_attr [rda + 15] & 12) {
								map_attr [rda] = comportamiento_tiles [_trap_bt];
								map_buff [rda] = _trap_bt;
								_trap_by = 0xff; 
							}
						}

						trap_by [gpit] = _trap_by;

						// Finally
						if (flags [COIN_FLAG] == 30) {
							// Deativate trap!
							sp_UpdateNow ();
							peta_el_beeper (8);
							on_pant = 0xff;
						} 
					}
				}
			}
		}

		// Carrying object
		if (pinv) {
			if (player.facing) rdx = gpx - 8; else rdx = gpx + 8;
			rdy = gpy - 8;
			sp_MoveSprAbs (sp_pinv, spritesClip, pinv_next_frame - pinv_current_frame, 
				VIEWPORT_Y + (rdy >> 3), VIEWPORT_X + (rdx >> 3), rdx & 7, rdy & 7);
			pinv_current_frame = pinv_next_frame;
		}

		// Offers
		if (latest_hotspot == 2) {
			pofrendas ++;
			peta_el_beeper (5);
		}

		if (pofrendas != pofrendas_old) {
			draw_2_digits (OFRENDAS_X, OFRENDAS_Y, pofrendas);
			pofrendas_old = pofrendas;
		}
	}

	void hook_entering (void) {		

		evil_eye_screen = map_behaviours [n_pant] & 2;
		trap_screen = map_behaviours [n_pant] & 4;
		trap_coins = map_behaviours [n_pant] & 8;

		scenery_info.evil_zone_active = 0;
		scenery_info.allow_type_6 = 0;

		if (map_behaviours [n_pant] & 2) {
			draw_coloured_tile (EYE_X-2, EYE_Y, 28);
			draw_coloured_tile (EYE_X, EYE_Y, 29);
		}

		evil_eye_state = 2;
		evil_eye_counter = 0;

		trap_active = 0;
	}
#endif
