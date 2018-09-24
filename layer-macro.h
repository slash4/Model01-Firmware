// Define the ABG multilingual layer

/* Since this layer DOES NOT contain PgUp, PgDn or Num keys, it is recommended to
 * use one of the ABG Fn layers so that PgUp, PgDn and Num can be accessed.
 */

/* This comment temporarily turns off astyle's indent enforcement
 *   so we can make the keymaps actually resemble the physical key layout better
 */
// *INDENT-OFF*

KEYMAP_STACKED
  (___, M(MACRO_RUBYPLACEHOLDER), M(MACRO_PLUS), ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___, ___, ___, ___,
   ___, ___, ___, ___,
   ___,

   ___,  ___, ___, ___,     ___,      ___,         ___,
   ___,  ___, M(MACRO_GITCOPREPROD), M(MACRO_GITCOMASTER),     M(MACRO_GITMERGEPREPROD),      M(MACRO_GITMERGEMASTER),         ___,
                  ___, M(MACRO_GITCOMMIT), M(MACRO_GITST),     ___,      ___, ___,
   ___, ___, ___, ___, ___, ___,     ___,
   ___, ___, ___, ___,
   ___)

// *INDENT-ON*
