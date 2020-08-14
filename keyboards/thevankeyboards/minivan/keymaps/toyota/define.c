#define _DF 0
#define _GM 1
#define _SY 2
#define _NM 3
#define _FN 4
#define _UT 5
#define _XT 6

//Layers
#define GAMES TG(_GM) //toggle game layer
#define SYMBOL LT(_SY, KC_ENT) //toggle Shift layer
#define NUMBER LT(_NM, KC_TAB) //toggle Numpad layer
#define FUNCTN LT(_FN, KC_END) //toggle Function layer
#define UTILTY LT(_UT, KC_HOME) //toggle Function layer
#define EXTRAS LT(_XT, KC_ESC) //Special Escape
#define SPECAL LT(_NM, KC_PAST) // For Games

// OS & General
#define FULL KC_F11 // fullscreen
#define DESKSL C(LGUI(KC_LEFT)) // Desktop left
#define DESKSR C(LGUI(KC_RIGHT)) // Desktop right
#define KC_ZOMI C(KC_EQL) // Zoom Out
#define KC_ZOMO C(KC_MINS) // Zoom In
#define KC_ZOM0 C(KC_0) // zoom 100
#define SETTING C(KC_COMM) // Open Settings

// Browser
#define NEWTAB C(KC_T) //New Tab
#define PRVWIN C(S(KC_P)) // New private window
#define CLSETAB C(KC_W) // Close window
#define TBRIGHT C(KC_PGDN) //next tab to the right
#define TBLEFT C(KC_PGUP) //next tab to the left
#define DARKMOD A(S(KC_D)) // Dark mode for browers (DARK READER EXTENSION)
#define RELOAD C(KC_R)

// Text Editing
#define SIDEBAR C(KC_F1) // for sidebar toggling
#define SBSELCT C(KC_0) // focus cursor on sidebar
#define FOCUS S(KC_F11) // focus
#define SELLINE C(KC_L) // select to the beginning of the line
#define DELLINE C(S(KC_K)) // delete line
#define BKSELCT C(S(KC_M)) // selects inside the brakcets
#define INDEN C(KC_RBRC) // indent
#define DEIND C(KC_LBRC) // deintent
#define LINEU C(S(KC_UP)) // line up
#define LINED C(S(KC_DOWN)) // line down
#define FOLD C(S(KC_LBRC)) // Fold
#define UNFOLD C(S(KC_RBRC)) // Unfold
#define LAYOUT1 A(S(KC_1)) // Single Layout
#define LAYOUT2 A(S(KC_2)) // Single Layout
#define VIEW01 C(KC_1) // focus group 1
#define VIEW02 C(KC_2) // focus group 2
#define CURSEUP C(S(KC_UP)) // Add cursor above
#define CURSEDN C(S(KC_DOWN)) // Add cursor Below

//Design Apps
#define LAYUP C(KC_RBRC) // Layer up/forward one
#define FRONT C(S(KC_RBRC))// send to front
#define LAYDN C(KC_LBRC) // Layer Down/back one
#define BACK C(S(KC_LBRC))// send to back
#define GROUP C(KC_G)
#define UNGROUP C(S(KC_G))

// Game Mods
#define _SHFT SFT_T(KC_COMM)// shift hold to run, tap to something (ping in R6)
#define _CTRL CTL_T(KC_DOT)// Control held, tap to do something (Deploy drone in R6)

//Discord
#define DISOVER C(S(KC_F13)) // Toggle Overlay
#define DISMUTE C(S(KC_F14)) // Mute
#define DISDEAF C(S(KC_F15)) // Deafen
#define DISPUTT C(S(KC_F16)) // Push To talk
#define DISTOGG C(S(KC_F17)) // toggles between push to talk and auto detect voice
