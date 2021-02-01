# MCU name
MCU = STM32F303

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes        # Virtual DIP switch configuration
EXTRAKEY_ENABLE = yes         # Audio control and System control
NKRO_ENABLE = yes             # USB Nkey Rollover
ENCODER_ENABLE = yes
# AUDIO_ENABLE = no             # Audio output
# MOUSEKEY_ENABLE = no          # Mouse keys
# COMMAND_ENABLE = no         # Commands for debug and configuration
# CONSOLE_ENABLE = no         # Console for debug
# BLUETOOTH_ENABLE = no       # Enable Bluetooth
# COMBO_ENABLE = no
# TAPDANCE_ENABLE = no
# BACKLIGHT_ENABLE = no         # Enable keyboard backlight functionality
# RGB_MATRIX_ENABLE = WS2812
# RGBLIGHT_ENABLE = no       # Enable keyboard RGB underglow

# SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend,
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
