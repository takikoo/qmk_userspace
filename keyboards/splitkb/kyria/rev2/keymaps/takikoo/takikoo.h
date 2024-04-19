enum layers {
    _QWERTY = 0,
    _GAME,
    _COLEMAK_DH,
    _LOWER,
    _RAISE,
    _NAV,
    _FUNCTION,
    _NUM,
    _GAMELOW,
    _MOUSE,
    _ADJUST,
};

enum custom_keycodes {
    TD = SAFE_RANGE,
    VILL,
    VILL5,
    GLHF,
    GG,
    OC,
    TILDE,
    CMNT,
};

// Aliases for readability
#define QWERTY   DF(_QWERTY)
#define COLEMAK  DF(_COLEMAK_DH)
#define GAME     DF(_GAME)

#define BS_LOW   LT(_LOWER, KC_BSPC)
#define ENT_RS   LT(_RAISE, KC_ENT)
#define NAV      MO(_NAV)
#define SPCNAV   LT(_NAV, KC_SPC)
#define TABNUM   LT(_NUM, KC_TAB)
#define FKEYS    MO(_FUNCTION)
#define ADJUST   MO(_ADJUST)
#define MOUSE    LT(_MOUSE, KC_ESC)
#define GLow     LM(_GAMELOW, MOD_LCTL)
#define SpLow    LT(_GAMELOW, KC_SPC)
#define CTL_ESC  MT(MOD_LCTL, KC_ESC)
#define CTL_QUOT MT(MOD_RCTL, KC_QUOTE)
#define ALT_ENT  MT(MOD_LALT, KC_ENT)

// Mod Tap Home row
#define HM_A     LGUI_T(KC_A)
#define HM_S     LALT_T(KC_S)
#define HM_D     LCTL_T(KC_D)
#define HM_F     LSFT_T(KC_F)
#define HM_J     LSFT_T(KC_J)
#define HM_K     LCTL_T(KC_K)
#define HM_L     LALT_T(KC_L)
#define HM_ODIA  LGUI_T(SE_ODIA)

#define U_RDO KC_AGIN
#define U_UND KC_UNDO

#define C_PGUP C(KC_PGUP)
#define C_PGDN C(KC_PGDN)
#define CUT    C(KC_X)
#define YANK   C(KC_INS)
#define PASTE  S(KC_INS)
#define COMNT  C(SE_QUOT)
#define DLINE  C(KC_D)
#define DUPLIC C(S(KC_D))
#define CtrlK  C(KC_K)
#define SCtrlK S(C(KC_K))
#define B_BACK A(KC_LEFT)
#define B_FWD  A(KC_RIGHT)

