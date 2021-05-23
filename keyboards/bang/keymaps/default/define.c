#define TRANS _______

//Layer Names
#define _DF 0 // Default
#define _GM 1 // Function
#define _FN 2 // Utility
#define _UT 3 // Media
#define _ME 4 // Special
#define _SP 5 // Games

// Layer Function Keys
#define SYMBOL LT(_SY, KC_ENT) //toggle Shift layer
#define NUMBER LT(_NM, KC_TAB) //toggle Numpad layer
#define FUNCTN LT(_FN, KC_END) //toggle Function layer
#define UTILTY LT(_UT, KC_HOME) //toggle Function layer
#define MEDIUM LT(_ME, KC_ESC) // Special Escape
#define SPECAL LT(_NM, KC_PAST) // For Games

// Cleaner Code

#define SHFT KC_LSFT // Left Shift
#define ALT KC_LALT // Left Alt
#define CTRL KC_LCTL // Left Control
#define CMD KC_LGUI // Left Windows/Control
#define ENCDR KC_F12 // Encoder push-button
