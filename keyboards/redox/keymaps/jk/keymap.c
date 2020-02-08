// vim: set cursorcolumn:

/*
cd /c/qmk
make redox/rev1:jk
*/

/*
https://config.qmk.fm/#/redox/rev1/LAYOUT
https://unicode-table.com/en/#2500
https://asylum.madhouse-project.org/blog/#2016
https://typing.io
*/

#include QMK_KEYBOARD_H
#include "czech.h"

// Layers
// czech layers use WinCompose (https://github.com/samhocevar/wincompose)
#define LAYER_QWERTY           0
#define LAYER_NUMBERS_SYMBOLS  1
#define LAYER_CZECH            2   // czech letters
#define LAYER_EXTRA            3   // navigation, shortcuts, commands

// Keys (sorted alphabetically)
#define _E_CTRL    LCTL_T(KC_E)
#define _I_CTRL    LCTL_T(KC_I)
//#define _P_CZL     LT(_CZL, KC_P)
//#define _Q_CZL     LT(_CZL, KC_Q)
#define _ESC_CZ    LT(LAYER_CZECH, KC_ESC)
#define _TAB_SHFT  LSFT_T(KC_TAB)
#define _XX_CZ     OSL(LAYER_CZECH)
#define _XX_EXT    LT(LAYER_EXTRA, XXXXXXX)
#define _XX_NS     LT(LAYER_NUMBERS_SYMBOLS, XXXXXXX)

// Special combinations
#define _ALT_F4    A(KC_F4)
#define _ALT_PSCR  A(KC_PSCREEN)
#define _CA_DEL    LCA(KC_DELETE)                    // CTRL + ALT + DELETE (R key = reset)
#define _CUT_E     C(KC_X)                           // CTRL + X
#define _COPY_E    C(KC_INSERT)                      // CTRL + INSERT
#define _PASTE_E   S(KC_INSERT)                      // SHIFT + INSERT
#define _LOCK      LWIN(KC_L)                        // EXTRA(Q) = WIN + L (enables to hit WIN + L with an only hand)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [LAYER_QWERTY] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     KC_GRV   ,KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5     ,                                                       KC_6     ,KC_7     ,KC_8     ,KC_9     ,KC_0     ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _ESC_CZ  ,KC_Q     ,KC_W     ,_E_CTRL  ,KC_R     ,KC_T     ,XXXXXXX  ,                                   XXXXXXX  ,KC_Y     ,KC_U     ,_I_CTRL  ,KC_O     ,KC_P     ,_XX_CZ   ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _TAB_SHFT,KC_A     ,KC_S     ,KC_D     ,KC_F     ,KC_G     ,KC_ENT   ,                                   KC_ENT   ,KC_H     ,KC_J     ,KC_K     ,KC_L     ,KC_SCLN  ,KC_LSFT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     KC_LCTRL ,KC_Z     ,KC_X     ,KC_C     ,KC_V     ,KC_B     ,   _ALT_F4  ,XXXXXXX  ,         XXXXXXX  ,KC_DEL   ,   KC_N     ,KC_M     ,KC_COMM  ,KC_DOT   ,KC_SLSH  ,KC_LCTRL ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     KC_LGUI  ,XXXXXXX  ,KC_LALT  ,_XX_EXT  ,     _XX_NS   ,        XXXXXXX  ,XXXXXXX  ,         _XX_NS   ,KC_BSPC  ,        KC_SPC   ,     KC_LALT  ,KC_DOWN  ,KC_UP    ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [LAYER_NUMBERS_SYMBOLS] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
  //│         │   F1    │   F2    │   F3    │   F4    │   F5    │                                                      │   F6    │   F7    │   F8    │   F9    │   F10   │   F11   │
     XXXXXXX  ,KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5    ,                                                       KC_F6    ,KC_F7    ,KC_F8    ,KC_F9    ,KC_F10   ,KC_F11   ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    [    │    {    │    (    │    <    │         │         │                                  │         │    /    │    >    │    )    │    }    │    ]    │   F12   │
     KC_TAB   ,KC_LBRC  ,KC_LCBR  ,KC_LPRN  ,KC_LT    ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,KC_SLSH  ,KC_GT    ,KC_RPRN  ,KC_RCBR  ,KC_RBRC  ,KC_F12   ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    1    │    2    │    3    │    4    │    5    │         │                                  │         │    6    │    7    │    8    │    9    │    0    │    '    │
     _______  ,KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5     ,XXXXXXX  ,                                   XXXXXXX  ,KC_6     ,KC_7     ,KC_8     ,KC_9     ,KC_0     ,KC_QUOT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    |    │    \    │    /    │    =    │    _    │  │         │         │        │         │         │  │    +    │    -    │    ,    │    .    │    "    │         │
     _______  ,KC_PIPE  ,KC_BSLS  ,KC_SLSH  ,KC_EQL   ,KC_UNDS  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,   KC_PLUS  ,KC_MINS  ,KC_COMM  ,KC_DOT   ,KC_DQUO  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
  //│         │         │         │         │    │         │       │         │         │        │         │         │       │         │    │         │         │         │         │
     XXXXXXX  ,XXXXXXX  ,_______  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,        _______  ,     _______  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [LAYER_CZECH] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                                       XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,_CZ_EV   ,_CZ_EI   ,_CZ_RV   ,_CZ_TV   ,XXXXXXX  ,                                   XXXXXXX  ,_CZ_YI   ,_CZ_UI   ,_CZ_II   ,_CZ_OI   ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,_CZ_AI   ,_CZ_SV   ,_CZ_DV   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,_CZ_UO   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,_CZ_ZV   ,XXXXXXX  ,_CZ_CV   ,XXXXXXX  ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,XXXXXXX  ,   _CZ_NV   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,XXXXXXX  ,        XXXXXXX  ,     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [LAYER_EXTRA] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     XXXXXXX  ,KC_MUTE  ,KC_VOLD  ,KC_VOLU  ,XXXXXXX  ,XXXXXXX  ,                                                       XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_PSCR  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,_LOCK    ,XXXXXXX  ,XXXXXXX  ,_CA_DEL  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,KC_PGUP  ,KC_HOME  ,KC_END   ,XXXXXXX  ,_ALT_PSCR,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,XXXXXXX  ,KC_DEL   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,KC_LEFT  ,KC_DOWN  ,KC_UP    ,KC_RGHT  ,XXXXXXX  ,KC_LSFT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,_CUT_E   ,_COPY_E  ,_PASTE_E ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,   XXXXXXX  ,KC_PGDN  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_LCTRL ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,        XXXXXXX  ,     KC_ALGR  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  )

};

/*
  [_LAYOUT_NAME_] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                                       XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,XXXXXXX  ,        XXXXXXX  ,     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  )
*/


void matrix_init_user(void)
{
	set_unicode_input_mode(UC_WINC);
}


// timer_read() and timer_elased() defined in C:\qmk\tmk_core\common\timer.h
//
static bool lshift_active = false;
static uint16_t lshift_down = 0;
static bool rshift_active = false;
static uint16_t rshift_down = 0;

// https://docs.qmk.fm/#/feature_macros
// https://github.com/qmk/qmk_firmware/blob/master/docs/custom_quantum_functions.md
bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
#ifdef CONSOLE_ENABLE
	// uprintf("KL: kc: %u, col: %u, row: %u, pressed: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed);

	uint8_t row = record->event.key.row;
	uint8_t col = record->event.key.col;

	if (record->event.pressed)
	{
		if (col == 0 && row == 2)
		{
			lshift_down = timer_read();
			lshift_active = true;
		}
		else if (col == 0 && row == 7)
		{
			rshift_down = timer_read();
			rshift_active = true;
		}
		else
		{
			if (lshift_active)
			{
				uint16_t elapsed = timer_elapsed(lshift_down);
				lshift_active = false;
				uprintf("L-shft: %u\n", elapsed);
			}
			else if (rshift_active)
			{
				uint16_t elapsed = timer_elapsed(rshift_down);
				rshift_active = false;
				uprintf("R-shft: %u\n", elapsed);
			}
		}
	}
	else
	{
		if (col == 0 && row == 2)
		{
			lshift_active = false;
		}
		else if (col == 0 && row == 7)
		{
			rshift_active = false;
		}
	}

#endif 

	return true;
}


/*
TODO:
- vyresit problem s rychlym jk
- pro debugging umoznit zapnout numerickou vrstvu tak, aby bylo Fn aktivni, dokud jej nevypnu
- a, q, p - levy malicek mam pomaly, takze dela dlouhy funkcni stisk
- ALT-F7 (vyhledat reference) je problem pri psani kodu - je potreba stisknout 3 klavesy
- bylo by pekne mit moznost zmacknout tuto kombinaci pouze levou rukou

HIGH PRIORITY:
- logging klaves
- vrstva 0 - klavesa vpravo nahore (XX) - tap dance - napr. XX 
	+ R = reset = CTRL + ALT + DELETE
	+ C = caps lock on/off

*/
