enum combos {
  AB_ESC,
  DTC_COL,
  QW_SFT,
};

const uint16_t PROGMEM ab_combo[] = {KC_A, KC_B, COMBO_END};
const uint16_t PROGMEM dtc_combo[] = {SE_DOT, SE_COMM, COMBO_END};
const uint16_t PROGMEM cm_combo[] = {SE_COMM, KC_M, COMBO_END};
const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [AB_ESC]  = COMBO(ab_combo, KC_ESC),
  [DTC_COL] = COMBO(dtc_combo, SE_COLN),
  [QW_SFT]  = COMBO(qw_combo, KC_LSFT)
};

