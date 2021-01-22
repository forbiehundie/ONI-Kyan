/* Copyright 2021 forbiehundie
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

/*// Combos
enum combos {
	QW_TAB,
	AS_ESC,
	ZX_SHIFT,
	OP_BSPC,
	LSCOL_QUOTE,
	DSLSH_ENT
};

const uint16_t PROGMEM qw_combo[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM as_combo[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM zx_combo[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM op_combo[] = {KC_O, KC_P, COMBO_END};
const uint16_t PROGMEM lscol_combo[] = {KC_L, KC_SCOLON, COMBO_END};
const uint16_t PROGMEM dslsh_combo[] = {KC_DOT, KC_SLASH, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
	[QW_TAB] = COMBO(qw_combo, KC_TAB),
	[AS_ESC] = COMBO(as_combo, KC_ESC),
	[ZX_SHIFT] = COMBO(zx_combo, KC_LSHIFT),
	[OP_BSPC] = COMBO(op_combo, KC_BSPACE),
	[LSCOL_QUOTE] = COMBO(lscol_combo, KC_QUOTE),
	[DSLSH_ENT] = COMBO(dslsh_combo, KC_ENTER),
};*/

/* //Tap Dance
// Tap Dance Declarations
enum {
	TD_SCOL_QUOTE,
};
// Tap Dance Definitions
qk_tap_dance_action_t tap_dance_actions[] = {
	//Tap once for Semi-Colon, twice for Quote
	[TD_SCOL_QUOTE] = ACTION_TAP_DANCE_DOUBLE(KC_SCOLON, KC_QUOTE)
};*/

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN1,
	_FN2
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT(
	KC_Q,        KC_W,        KC_E,            KC_R,          KC_T,            KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,      \
    KC_A,        KC_S,        KC_D,            KC_F,          KC_G,            KC_H,       KC_J,       KC_K,       KC_L,       KC_SCOLON, \
	KC_Z,        KC_X,        KC_C,            KC_V,          KC_B,            KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,  \
	                                             LT(_FN1,KC_BSPC),              LT(_FN2,KC_SPACE)
	),
[_FN1] = LAYOUT(
	KC_1,       KC_2,        KC_3,            KC_4,          KC_5,             KC_6,       KC_7,       KC_8,       KC_9,       KC_0,      \
	KC_TAB,     KC_ESC,      KC_DEL,          KC_BSPC,       KC_ENTER,         KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_QUOTE,  \
	KC_LCTRL,   KC_LGUI,     KC_LALT,         A(KC_TAB),     KC_CAPS,          KC_ASRP,    KC_ASDN,    KC_ASUP,    KC_ASTG,    KC_SFTENT, \
	                                                  KC_TRNS,                       KC_BSPC
	),
[_FN2] = LAYOUT(
	KC_EXLM,    KC_AT,       KC_HASH,         KC_DLR,        KC_PERC,         KC_CIRC,    KC_AMPR,    KC_ASTR,    KC_LPRN,    KC_RPRN,   \
	KC_MINS,    KC_EQL,      KC_LBRC,         KC_RBRC,       KC_BSLS,         KC_LEFT,    KC_DOWN,    KC_UP,      KC_RIGHT,   KC_QUOTE,  \
	C(KC_Z),    C(KC_X),     C(KC_C),         C(KC_V),       C(KC_Y),         KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_SFTENT, \
	                                                  KC_BSPC,                       KC_TRNS
	),
};