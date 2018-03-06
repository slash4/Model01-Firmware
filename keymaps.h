/** The Model 01's key layouts are defined as 'keymaps'. By default, there are three
  * keymaps: The standard QWERTY keymap, the "Function layer" keymap and the "Numpad"
  * keymap.
  *
  * Each keymap is defined as a list using the 'KEYMAP_STACKED' macro, built
  * of first the left hand's layout, followed by the right hand's layout.
  *
  * Keymaps typically consist mostly of `Key_` definitions. There are many, many keys
  * defined as part of the USB HID Keyboard specification. You can find the names
  * (if not yet the explanations) for all the standard `Key_` defintions offered by
  * Kaleidoscope in these files:
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keyboard.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_consumerctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_sysctl.h
  *    https://github.com/keyboardio/Kaleidoscope/blob/master/src/key_defs_keymaps.h
  *
  * Additional things that should be documented here include
  *   using ___ to let keypresses fall through to the previously active layer
  *   using XXX to mark a keyswitch as 'blocked' on this layer
  *   using ShiftToLayer() and LockLayer() keys to change the active keymap.
  *   the special nature of the PROG key
  *   keeping NUM and FN consistent and accessible on all layers
  *
  *
  * The "keymaps" data structure is a list of the keymaps compiled into the firmware.
  * The order of keymaps in the list is important, as the ShiftToLayer(#) and LockLayer(#)
  * macros switch to key layers based on this list.
  *
  *

  * A key defined as 'ShiftToLayer(FUNCTION)' will switch to FUNCTION while held.
  * Similarly, a key defined as 'LockLayer(NUMPAD)' will switch to NUMPAD when tapped.
  */

/**
  * Layers are "0-indexed" -- That is the first one is layer 0. The second one is layer 1.
  * The third one is layer 2.
  * This 'enum' lets us use names like QWERTY, FUNCTION, and NUMPAD in place of
  * the numbers 0, 1 and 2.
  */

/*
 * Enable and disable optional features by editing the include directives below.
 * In general, only one option of each group should be enabled at any time.
 * Note that these work by defining aliases and so the order of inclusion is important.
 */


/*
 * Choose modifier key layout
 */

// Use stock modifier key layount
#include "aliases-std-modifiers.h"

// Use kinesis-style modifier key layout
//include "aliases-abg-modifiers-thumb-enter.h"

// Use ABG's friendly modifier layout
//include "aliases-abg-modifiers.h"

// Use Japanese modifier layout
//include "aliases-abg-modifiers-japan.h"

/*
 * Choose mouse scrolling behaviour
 * Note: mouse scrolling is not enabled in standard layers
 */

// Use traditional mouse scrolling
#include "aliases-abg-scroll-wheel-traditional.h"

// Use "natural" mouse scrolling
//include "aliases-abg-scroll-wheel-natural.h"


/*
 * Choose the arrangement of the orphan keys 
 * These are referred to by the qwerty-paramaterized layer
 */

// Use merlin's second orphan key set for Class 1 QWERTY and non-QWERTY keymaps
// (Dvorak, AZERTY, BEPO, QWERTZ, Turkish F/Q, Canadian, Italian, Nordic)
#include "aliases-abg-orphans-merlin2.h"

// Use ngetal's variation on merlin's orphan keys for Class 2 QWERTY keymaps
// (International English, Dutch, Programmer Polish)
//include "aliases-abg-orphans-ngetal2.h"

// Use Latin American Spanish orphan keys for Class 3 QWERTY keymaps
//include "aliases-abg-orphans-latam.h"

// Use Brazilian orphan keys for Class 4 QWERTY keymaps (Brazilian Portugese)
//include "aliases-abg-orphans-brazil.h"

// Use Japanese orphan keys.
// If you enable this, you should also enable "modifiers-japan" above.
//include "aliases-abg-orphans-japan.h"

// Use merlin's third orphan key set for Class 5 QWERTY keymaps
// (European Spanish, Swiss French/German)
//include "aliases-abg-orphans-merlin3.h"

// Use stock orphan key set
//include "aliases-std-orphans.h"


/*
 * Define our layer names. These must match the layer structure below.
 */

enum { QWERTY, NUMPAD, ALEX, FUNCTION }; // layers

/*
 * Enable and disable layers by editing the various include directives below.
 * Beware that the include directives MUST be on a line by themselves.
 */

const Key keymaps[][ROWS][COLS] PROGMEM = {
  [QWERTY] =
#include "layer-std-qwerty-parameterized.h"
  , [NUMPAD] =
#include "layer-abg-numpad-apple.h"
  , [ALEX] =
#include "layer-abg-numpad-apple.h"
  , [FUNCTION] =
#include "layer-abg-function-inverted-t.h"
};

