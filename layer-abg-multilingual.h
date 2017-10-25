// Define the ABG multilingual layer

/* Since this layer DOES NOT contain PgUp, PgDn or Num keys, it is recommended to
 * use one of the ABG Fn layers so that PgUp, PgDn and Num can be accessed.
 */

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

KEYMAP_STACKED
  (___,                       Key_1, Key_2, Key_3, Key_4, Key_5, Key_LEDEffectNext,
   Key_Backtick,              Key_Q, Key_W, Key_E, Key_R, Key_T, Key_Tab,
   Key_Backslash,             Key_A, Key_S, Key_D, Key_F, Key_G,
   Key_NonUsBackslashAndPipe, Key_Z, Key_X, Key_C, Key_V, Key_B, Key_Escape,
   Key_LeftControl, Key_Backspace, Key_LeftShift, Key_LeftAlt,
   ShiftToLayer(FUNCTION),

   Key_Minus,    Key_6, Key_7, Key_8,     Key_9,      Key_0,         Key_Equals,
   Key_Enter,    Key_Y, Key_U, Key_I,     Key_O,      Key_P,         Key_LeftBracket,
                 Key_H, Key_J, Key_K,     Key_L,      Key_Semicolon, Key_Quote,
   Key_RightGui, Key_N, Key_M, Key_Comma, Key_Period, Key_Slash,     Key_RightBracket,
   Key_RightAlt, Key_RightShift, Key_Spacebar, Key_RightControl,
   ShiftToLayer(FUNCTION))

// *INDENT-ON*