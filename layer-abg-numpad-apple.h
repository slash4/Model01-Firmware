// Define the ABG Apple numpad layer

/* This layer leaves the rightmost column as passthrough. It is expected that
 * Num is located under one of these keys in a lower layer.
 *
 * This layer is recommended for use with both std and abg base layers.
 *
 * The numpad is moved to be properly homed under the right hand. Zero is moved
 * to the thumb as per Kinesis. The usual non-numeric keys are arranged around
 * the tenkey in an Apple standard layout. This should be broadly compatible.
 *
 * Extra arrow keys are provided in an inverted-T under the left hand. The non-
 * mouse keys from the left hand of abg-function-inverted-t are also duplicated.
 */

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

KEYMAP_STACKED
  (LockLayer(FUNCTION),      LALT(Key_4),         LALT(Key_5),           LALT(Key_Spacebar),           LALT(LEFT_OF_Z),            LALT(Key_Z),               Key_LEDEffectNext,
   Key_Tab,  LALT(Key_2), LALT(Key_3),   Key_UpArrow,   LALT(Key_X),    LALT(Key_C),        Key_Enter,
   Key_Home, LGUI(Key_L),         Key_LeftArrow, Key_DownArrow, Key_RightArrow, LGUI(Key_Slash),
   Key_End,  LGUI(RIGHT_OF_P),  LGUI(Key_C),         LGUI(Key_H),         LGUI(Key_U),          LGUI(Key_K),        Key_Spacebar,
   Key_Delete, ___, ___, ___,
   ___,

   M(MACRO_VERSION_INFO),  ___,                 Key_KeypadClear, Key_KeypadEquals,   Key_KeypadDivide,   Key_KeypadMultiply, ___,
   Key_Tab,                    ___,                 Key_Keypad7,     Key_Keypad8,        Key_Keypad9,        Key_KeypadSubtract, ___,
                           Key_Backspace,       Key_Keypad4,     Key_Keypad5,        Key_Keypad6,        Key_KeypadAdd,      ___,
   LSHIFT(Key_Backtick),                    Key_V,    Key_Keypad1,     Key_Keypad2,        Key_Keypad3,        Key_KeypadEnter,    ___,
   ___, ___, Key_KeypadDot, Key_Keypad0,
   ___)

// *INDENT-ON*
