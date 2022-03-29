# MCU name
MCU = atmega32u4
# sloooow
F_CPU = 8000000
# default atmega32u4 bootloader
BOOTLOADER = atmel-dfu
# make it smaller
EXTRAFLAGS += -flto


# Do not put the microcontroller into power saving mode
# when we get USB suspend event. We want it to keep updating
# backlight effects.
OPT_DEFS += -DNO_SUSPEND_POWER_DOWN


# Build Options
#   comment out to disable the options.
#
BACKLIGHT_ENABLE = no              # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = no
LED_MATRIX_ENABLE = no
RGB_MATRIX_ENABLE = no
BOOTMAGIC_ENABLE = lite            # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no              # Mouse keys
EXTRAKEY_ENABLE = no              # Audio control and System control
CONSOLE_ENABLE = no                # Console for debug
COMMAND_ENABLE = no                # Commands for debug and configuration
SLEEP_LED_ENABLE = no              # Breathing sleep LED during USB suspend
NKRO_ENABLE = no                  # USB Nkey Rollover
AUDIO_ENABLE = no                  # Audio output on port C6
NO_USB_STARTUP_CHECK = no          # Disable initialization only when usb is plugged in
#SERIAL_LINK_ENABLE = yes

CIE1931_CURVE = yes
