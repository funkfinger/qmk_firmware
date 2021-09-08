# My QMK Keymap for QMK / GMMK Pro

What I wat

-   Mac-like functionality
-   per led control - I really only want one led and cap-lock indicator
-   some better layers

## Things I've Learned

-   I can flash the [original GMK firmware](https://gloriouscore.nyc3.digitaloceanspaces.com/Glorious_Core/%28QMK%29GMMK%20_PRO_US_2021_04_07_V0035_DFU_FW.bin) using the [QMK toolbox](https://github.com/qmk/qmk_toolbox)
-   the default QMK bootloader mode is `LAYER 2 -> BACKSLASH`
-   plugging in the keyboard while holding `ESC` solved a pain in the butt problem for me where the keymap was all wrong and not fixing itself with new flashing - even flashing stock firmware over QMK
    -   [`EEPROM_RESET` found here may have fixed the above issue](https://beta.docs.qmk.fm/using-qmk/simple-keycodes/quantum_keycodes) but I couldn't get the keys to respond correctly, so likely not

## Issues

-   aggressive `BACKSPACE` key
    -   changed debounce to 8 in `gmmk/pro/config.h` - seeing if that works...
