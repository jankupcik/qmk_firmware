// vim: set cursorcolumn:

#include QMK_KEYBOARD_H

// Layers
#define _QWERTY           0
#define _NUMBERS_SYMBOLS  1
#define _CZL              2   // lower-case czech letters
#define _CZH              3   // upper-case czech letters
#define _EXTRA            4   // navigation, shortcuts, commands
#define _ADJUST           5

// Keys (sorted alphabetically)
#define _E_CTRL    LCTL_T(KC_E)
#define _ESC_CZH   LT(_CZH, KC_ESC)
#define _I_CTRL    LCTL_T(KC_I)
#define _P_CZL     LT(_CZL, KC_P)
#define _Q_CZL     LT(_CZL, KC_Q)
#define _TAB_SHFT  LSFT_T(KC_TAB)
#define _XXX_CZH   LT(_CZH, XXXXXXX)
#define _XXX_EXT   LT(_EXTRA, XXXXXXX)
#define _XXX_NS    LT(_NUMBERS_SYMBOLS, XXXXXXX)

// Special combinations
#define _ALT_F4    A(KC_F4)
#define _ALT_PSCR  A(KC_PSCREEN)
#define _CA_DEL    LCA(KC_DELETE)                    // CTRL + ALT + DELETE (R key = reset)
#define _CUT_E     C(KC_X)                           // CTRL + X
#define _COPY_E    C(KC_INSERT)                      // CTRL + INSERT
#define _PASTE_E   S(KC_INSERT)                      // SHIFT + INSERT
#define _LOCK      LWIN(KC_L)                        // EXTRA(Q) = WIN + L (enables to hit WIN + L with an only hand)

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
     KC_LGUI  ,XXXXXXX  ,KC_LALT  ,_XXX_EXT ,     _XXX_NS  ,        XXXXXXX  ,XXXXXXX  ,         _XXX_NS  ,KC_BSPC  ,        KC_SPC   ,     KC_LALT  ,KC_DOWN  ,KC_UP    ,XXXXXXX  
  //└─────────┴─────────┴─────────┴─────────┘    └─────────┘       └─────────┴─────────┘        └─────────┴─────────┘       └─────────┘    └─────────┴─────────┴─────────┴─────────┘
  ),

  [_NUMBERS_SYMBOLS] = LAYOUT(
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

  [_EXTRA] = LAYOUT(
  //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                                                      ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
     XXXXXXX  ,KC_MUTE  ,KC_VOLD  ,KC_VOLU  ,XXXXXXX  ,XXXXXXX  ,                                                       XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_PSCR  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐                                  ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,_LOCK    ,XXXXXXX  ,XXXXXXX  ,_CA_DEL  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,XXXXXXX  ,KC_PGUP  ,KC_HOME  ,KC_END   ,XXXXXXX  ,_ALT_PSCR,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                                  ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,XXXXXXX  ,KC_DEL   ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,                                   XXXXXXX  ,KC_LEFT  ,KC_DOWN  ,KC_UP    ,KC_RGHT  ,XXXXXXX  ,KC_LSFT  ,
  //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼──┬──────┴──┬─────────┐        ┌─────────┬──┴──────┬──┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
     _______  ,XXXXXXX  ,_CUT_E   ,_COPY_E  ,_PASTE_E ,XXXXXXX  ,   XXXXXXX  ,XXXXXXX  ,         XXXXXXX  ,_______  ,   XXXXXXX  ,KC_PGDN  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,KC_LCTRL ,
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
- logging klaves
- vrstva 0 - klavesa vpravo nahore (XX) - tap dance - napr. XX 
	+ R = reset = CTRL + ALT + DELETE
	+ C = caps lock on/off


00E1 á
00C1 Á
010D č
010C Č
010F ď
010E Ď
00E9 é
00C9 É
011B ě
011A Ě
00ED í
00CD Í
0148 ň
0147 Ň
00F3 ó
00D3 Ó
0159 ř
0158 Ř
0161 š
0160 Š
0165 ť
0164 Ť
00FA ú
00DA Ú
016F ů
016E Ů
00FD ý
00DD Ý
017E ž
017D Ž


háček   - caron
čárka   - acute
kroužek - ring above
*/
