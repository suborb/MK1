// Extern actions.
// Add code here at your wish.
// Will be run from scripting (EXTERN n)

unsigned char which_character;

void do_extern_action (unsigned char n) {
	if (n == 128) {
		if (pinv) {
			show_text_box (19);
		} else if (pofrendas) {
			pinv = ofrendas_order [ofrendas_idx ++];
			pinv_next_frame = object_cells [pinv];
			show_text_box (pinv);
		} else show_text_box (0);
	} else if (n < 65) {
		show_text_box (n);
	} else {
		// Work with characters n-64:
		which_character = n - 64;
		if (flags [which_character]) {
			show_text_box (20);
		} else if (pinv == 0) {
			show_text_box (8 + which_character);
		} else if (pinv != which_character) {
			show_text_box (4 + which_character);
		} else {
			show_text_box (20 + which_character);
			show_text_box (13);
			on_pant = 0xff; 		// Force reenter
			flags [which_character] = 1;
			pinv = 0;
			peta_el_beeper (6);
		}
	}
}
