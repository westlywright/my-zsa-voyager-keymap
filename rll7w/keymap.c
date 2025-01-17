#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE


enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_215_255_250,
  HSV_176_255_255,
  HSV_45_255_241,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LGUI(KC_LBRC),                                  RGUI(KC_RBRC),  KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_DELETE,      KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           OSL(1),                                         TG(3),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,
    MT(MOD_LCTL, KC_ESCAPE),KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_MEH,                                                                         KC_EQUAL,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,
    SC_LSPO,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       SC_RSPC,
    KC_TRANSPARENT, KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,    KC_LEFT_GUI,    TG(2),                                                                                                          KC_MEDIA_PLAY_PAUSE,KC_LBRC,        KC_RBRC,        KC_UP,          KC_DOWN,        RGUI(KC_RIGHT_ALT),
    KC_SPACE,       KC_BSPC,        LGUI(KC_SPACE),                 KC_TAB,         KC_HYPR,        KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 TO(4),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    OSM(MOD_LSFT),  KC_TRANSPARENT, KC_MAC_CUT,     KC_MAC_COPY,    KC_MAC_PASTE,   KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, CW_TOGG,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_PAGE_UP,     KC_PGDN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_DELETE,      KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_EQUAL
  ),
  [2] = LAYOUT_moonlander(
    AU_TOGG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,                  KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SLASH,       KC_ASTR,        KC_MINUS,       KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PLUS,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_4,           KC_5,           KC_6,           KC_ENTER,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_1,           KC_2,           KC_3,           KC_DOT,                                         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, HSV_215_255_250,HSV_176_255_255,HSV_45_255_241, KC_TRANSPARENT, KC_TRANSPARENT,
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, RGB_TOG,        RGB_VAI,        RGB_VAD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 RGB_SLD,        RGB_SPI,        RGB_SPD,        RGB_MODE_FORWARD,KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_HUI,        RGB_HUD,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};
const uint16_t PROGMEM combo0[] = { KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_F, KC_J, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(1)),
    COMBO(combo1, TO(2)),
    COMBO(combo2, RGUI(KC_SPACE)),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {159,218,204}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187}, {200,237,187} },

    [2] = { {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {41,255,255}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239}, {164,252,239} },

    [3] = { {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239}, {91,219,239} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_215_255_250:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(215,255,250);
        }
        return false;
    case HSV_176_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(176,255,255);
        }
        return false;
    case HSV_45_255_241:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(45,255,241);
        }
        return false;
  }
  return true;
}



