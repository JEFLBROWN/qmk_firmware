#define _DF 0
#define _FN 1
#define _UT 2
#define _ME 3
#define _SP 4

// layers
#define FNCTN LT(_FN, KC_LCTL)
#define UTLTY LT(_UT, DISPUTT)
#define SPECL LT(_SP, DISMUTE)
#define MEDIA LT(_ME, KC_ESC)

// Encoder
#define ENCDR KC_MUTE

// Mod Taps
#define SHIFTY MT(KC_LSFT, KC_LEAD)  // Left Shift when held, Escape when tapped
#define CTLESC CTL_T(KC_ESC)

// OS & General
#define DSKTOPL C(LGUI(KC_LEFT))   // Desktop left
#define DSKTOPR C(LGUI(KC_RIGHT))  // Desktop right
#define FULLSCR KC_F11             // fullscreen

#define WINSNIP SGUI(KC_S)     // Windows Snip
#define MACSCSH SGUI(KC_3)     // Mac Screenshot
#define MACSNIP G(C(S(KC_4)))  // Command-Control-Shift-4

// Combos
#define KC_ZOMO C(KC_MINS)  // Zoom In
#define KC_ZOMI C(KC_EQL)   // Zoom Out
#define KC_ZOM0 C(KC_0)     // Zoom 100%
#define ZENMODE S(KC_F11)   // Zen Mode

// Browser
#define PRVWIN C(S(KC_P))       // New private window
#define NEWTABS C(KC_T)         // New Tab
#define CLSETAB C(KC_W)         // Close window
#define TABRIGT C(KC_PGDN)      // Next tab to the right
#define TABLEFT C(KC_PGUP)      // Next tab to the left
#define DARKMOD A(S(KC_D))      // Dark mode for browers (DARK READER EXTENSION)
#define RELOAD C(KC_R)          // Reload
#define FOCUSRL C(KC_L)         // focus search bar AND Center cursor in text editing

// Text Editor
#define SIDEBAR C(KC_F1)        // for sidebar toggling
#define SBSELCT C(KC_0)         // focus cursor on sidebar
#define FOCUS S(KC_F11)         // focus
#define SELLINE C(KC_L)         // select to the beginning of the line
#define DELLINE C(S(KC_K))      // delete line
#define BKSELCT C(S(KC_M))      // selects inside the brakcets
#define INDENT C(KC_RBRC)       // indent
#define DEINDNT C(KC_LBRC)      // deintent
#define LINEU C(S(KC_UP))       // line up
#define LINED C(S(KC_DOWN))     // line down
#define FOLD C(S(KC_LBRC))      // Fold
#define UNFOLD C(S(KC_RBRC))    // Unfold
#define TRMNL C(KC_GRV)

// VS Code
#define CHORD   C(KC_K)              // Activate Chord
#define ACTYBAR C(S(KC_F1))          // open close activity bar
#define CURSRUP LCA(KC_UP)           // add cursor below
#define CURSRDN LCA(KC_DOWN)         // add cursor below
#define CWORDLF C(KC_LEFT)           // move cursor by word to the left
#define CWORDRT C(KC_RIGHT)          // move cursor by word to the right
#define EXPLORE C(S(KC_E))           // toggle file explorer
#define OUTLINE C(S(KC_O))           // toggle outline
#define JUMPERS C(S(KC_O))           // Jump to symbol
#define OPENERS C(KC_P)              // Quick Go-to File
#define ICVAL00 HYPR(KC_MINS)        // increase value by .1
#define ICVAL01 LCA(KC_MINS)         // increase value by 1
#define ICVAL10 MEH(KC_MINS)         // increase value by 10
#define DCVAL00 HYPR(KC_EQL)         // decrease value by .1
#define DCVAL01 LCA(KC_EQL)          // decrease value by 1
#define DCVAL10 MEH(KC_EQL)          // decrease value by 10
#define DUPLCTE C(KC_D)              // duplicate selected word
#define ONECOLU MEH(KC_1)            // One Column Layout
#define TWOCOLU MEH(KC_2)            // Two Column Layout
#define TYPEWRI C(S_KC_T)           // typewriter mode toggle
#define MTABRT LCA(KC_RGHT)          // move tab to the right
#define MTABLF LCA(KC_LEFT)          // move tab to the left
#define HOZVERT S(A(KC_0))           // toggles view from horizontal split to vertical split
#define MARKPRV A(S(KC_F))           // Markdown: format a table

// Design
#define FRONT C(S(KC_RBRC))          // send to front
#define LAYERUP C(KC_RBRC)           // Layer up/forward one *Lead+W
#define LAYERDN C(KC_LBRC)           // Layer Down/back one *Lead+S
#define BACK C(S(KC_LBRC))           // send to back
#define GROUP C(KC_G)                // Group
#define UNGROUP C(S(KC_G))           // Ungroup

// In Game
#define DISOVER C(S(KC_F13))  // Toggle Overlay
#define DISMUTE C(S(KC_F14))  // Mute
#define DISDEAF C(S(KC_F15))  // Deafen
#define DISPUTT C(S(KC_F16))  // Push To talk
#define DISTOGG C(S(KC_F17))  // toggles between push to talk and auto detect voice

// Cleanup

#define CTRL KC_LCTRL
#define PGUP KC_PGUP
#define PGDN KC_PGDN
#define HOME KC_HOME
#define SHFT KC_LSHFT
