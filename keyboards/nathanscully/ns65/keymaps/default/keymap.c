#include "ns65.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/* Layer 0: Default Layer
		 * ,---------------------------------------------------------------.
		 * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Ins|
		 * |---------------------------------------------------------------|
		 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del|
		 * |---------------------------------------------------------------|
		 * |CapsLo|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgU|
		 * |---------------------------------------------------------------|
		 * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgD|
		 * |---------------------------------------------------------------|
		 * |Ctrl|Gui |Alt |         Space    |Fn0 |Alt |Gui |  |Lef|Dow|Rig|
		 * `---------------------------------------------------------------'
		 */


	[0] = LAYOUT( \
			KC_GRV, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL,KC_BSPC,      KC_INS, \
			KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSLS,     KC_DEL, \
			KC_LCTL,KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_ENT,              KC_PGUP,\
			KC_LSFT,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
			KC_CAPS,KC_LALT,KC_LGUI,               KC_SPC,           KC_RGUI,MO(1),  KC_ESC,     KC_LEFT,KC_DOWN,KC_RGHT \
	),
	[1] = LAYOUT( \
			KC_ESC,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, KC_TRNS,      KC_MUTE,\
			KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_PSCR,KC_MEDIA_REWIND,KC_MEDIA_FAST_FORWARD,KC_TRNS,     KC_MEDIA_PLAY_PAUSE,\
			KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,     KC_VOLU,\
			KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_BRIGHTNESS_DOWN,KC_BRIGHTNESS_UP,KC_TRNS,KC_TRNS,     KC_PGUP,KC_VOLD,\
			KC_TRNS,KC_TRNS,KC_TRNS,               KC_TRNS,          KC_TRNS,KC_TRNS,KC_TRNS,    KC_HOME,KC_PGDN,KC_END  \
	),
};
