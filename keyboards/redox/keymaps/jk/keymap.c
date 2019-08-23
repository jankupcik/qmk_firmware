// vim: set cursorcolumn:

#include QMK_KEYBOARD_H


#define _QWERTY           0
#define _NUMBERS_SYMBOLS  1
#define _CZL              2   // lower-case czech letters
#define _CZH              3   // upper-case czech letters
#define _EXTRA            4   // navigation, shortcuts, commands
#define _ADJUST           5

#define _E_CTRL    LCTL_T(KC_E)
#define _I_CTRL    LCTL_T(KC_I)
#define _P_CZL     LT(_CZL, KC_P)
#define _Q_CZL     LT(_CZL, KC_Q)
#define _TAB_SHFT  LSFT_T(KC_TAB)
#define _ESC_CZH   LT(_CZH, KC_ESC)
#define _XXX_CZH   LT(_CZH, XXXXXXX)
#define _XXX_EXT   LT(_EXTRA, XXXXXXX)
#define _XXX_NS    LT(_NUMBERS_SYMBOLS, XXXXXXX)
#define _ALT_F4    A(KC_F4)
#define _ALT_PSCR  A(KC_PSCREEN)
#define _CA_DEL    LCA(KC_DELETE)                    // CTRL + ALT + DELETE (R key = reset)
#define _COPY_E    C(KC_INSERT)                      // CTRL + INSERT (R key = reset)
#define _PASTE_E   S(KC_INSERT)                      // SHIFT + INSERT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_QWERTY] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     KC_GRV   ,KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5     ,                                                       KC_6     ,KC_7     ,KC_8     ,KC_9     ,KC_0     ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _ESC_CZH ,KC_Q     ,KC_W     ,_E_CTRL  ,KC_R     ,KC_T     ,XXXXXXX  ,                                   XXXXXXX  ,KC_Y     ,KC_U     ,_I_CTRL  ,KC_O     ,KC_P     ,_XXX_CZH ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _TAB_SHFT,KC_A     ,KC_S     ,KC_D     ,KC_F     ,KC_G     ,KC_ENT   ,                                   KC_ENT   ,KC_H     ,KC_J     ,KC_K     ,KC_L     ,KC_SCLN  ,KC_LSFT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     KC_LCTRL ,KC_Z     ,KC_X     ,KC_C     ,KC_V     ,KC_B     ,   _ALT_F4  ,XXXXXXX  ,         XXXXXXX  ,KC_DEL   ,   KC_N     ,KC_M     ,KC_COMM  ,KC_DOT   ,KC_SLSH  ,KC_LCTRL ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     KC_LGUI  ,XXXXXXX  ,KC_LALT  ,_XXX_EXT ,     _XXX_NS  ,        KC_ENT   ,XXXXXXX  ,         _XXX_NS  ,KC_BSPC  ,        KC_SPC   ,     KC_LALT  ,KC_DOWN  ,KC_UP    ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [_NUMBERS_SYMBOLS] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
  //│         │   F1    │   F2    │   F3    │   F4    │   F5    │                                                      │   F6    │   F7    │   F8    │   F9    │   F10   │   F11   │
     XXXXXXX  ,KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5    ,                                                       KC_F6    ,KC_F7    ,KC_F8    ,KC_F9    ,KC_F10   ,KC_F11   ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    <    │    [    │    (    │    {    │         │         │                                  │         │         │    }    │    )    │    ]    │    >    │   F12   │
     KC_TAB   ,KC_LT    ,KC_LBRC  ,KC_LPRN  ,KC_LCBR  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,KC_SLSH  ,KC_RCBR  ,KC_RPRN  ,KC_RBRC  ,KC_GT    ,KC_F12   ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    1    │    2    │    3    │    4    │    5    │         │                                  │         │    6    │    7    │    8    │    9    │    0    │    '    │
     _______  ,KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5     ,XXXXXXX  ,                                   XXXXXXX  ,KC_6     ,KC_7     ,KC_8     ,KC_9     ,KC_0     ,KC_QUOT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
  //│         │    |    │    \    │    /    │    =    │    _    │  │         │         │        │         │         │  │    +    │    -    │    ,    │    .    │    "    │         │
     _______  ,KC_PIPE  ,KC_BSLS  ,KC_SLSH  ,KC_EQL   ,KC_UNDS  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,   KC_PLUS  ,KC_MINS  ,KC_COMM  ,KC_DOT   ,KC_DQUO  ,XXXXXXX  ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
  //│         │         │         │         │    │         │       │         │         │        │         │         │       │         │    │         │         │         │         │
     XXXXXXX  ,XXXXXXX  ,_______  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,        _______  ,     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [_EXTRA] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     XXXXXXX  ,KC_MUTE  ,KC_VOLD  ,KC_VOLU  ,XXXXXXX  ,XXXXXXX  ,                                                       XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_PSCR  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,_CA_DEL  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,KC_PGUP  ,KC_HOME  ,KC_END   ,XXXXXXX  ,_ALT_PSCR,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,XXXXXXX  ,KC_DEL   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,KC_LEFT  ,KC_DOWN  ,KC_UP    ,KC_RGHT  ,XXXXXXX  ,KC_LSFT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,XXXXXXX  ,_COPY_E  ,_PASTE_E ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,   XXXXXXX  ,KC_PGDN  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_LCTRL ,
  //├─────────┼─────────┼─────────┼─────────┼────┬────┴────┬────┘  ├─────────┼─────────┤        ├─────────┼─────────┤  └────┬────┴────┬────┼─────────┼─────────┼─────────┼─────────┤
     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,     XXXXXXX  ,        XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,        XXXXXXX  ,     XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  
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

/*
https://unicode-table.com/en/#2500
https://asylum.madhouse-project.org/blog/#2016
https://config.qmk.fm/#/redox/rev1/LAYOUT
https://typing.io
*/

/*
cd /c/qmk
make redox/rev1:jk
*/


/*
TODO:
- VIM ma problem: j, k, l nefunguje, protoze dlouhy stisk dela modifikator
- vyresit problem s rychlym jk
- v numerickem rezimu zvazit jak desetinnou tecku, tak i carku
- pro debugging umoznit zapnout numerickou vrstvu tak, aby bylo Fn aktivni, dokud jej nevypnu
- a, q, p - levy malicek mam pomaly, takze dela dlouhy funkcni stisk
- ALT-F7 (vyhledat reference) je problem pri psani kodu - je potreba stisknout 3 klavesy
- bylo by pekne mit moznost zmacknout tuto kombinaci pouze levou rukou

HIGH PRIORITY:
- GIT repository
- logging klaves
- vrstva 0 - klavesa vpravo nahore (XX) - tap dance - napr. XX 
	+ R = reset = CTRL + ALT + DELETE
	+ C = caps lock on/off

LOW PRIORITY:
- mazu soubor pravou rukou pomoci delete, ale enter mam vlevo...
- bylo by pekne mit CTRL+ALT+DEL na jedne ruce
*/
