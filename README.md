# My Keyboard Repository

Firmwares and configuration for my keyboards

## KpRepublic BM40 HS RGB (ver 1)

- In `/qmk-configurator`: `keymap.json` to load into [QMK Configurator](https://config.qmk.fm)

## CXT Studio 12E4

Current Vial supports only the 12E3 but not the 12E4. This is my take on a Vial layout for 12E4.

- Vial firmware in `/keyboards/cxt_studio/12e4`
- Current firmware size:  `28312/28672 (98%, 360 bytes free)` (99.11% deployed)
- **Features**
  - 8 Vial layers
  - Only breathing RGB animation available
  - Assigned color per layer
- **Disabled QMK features** (to squeeze into the limited ROM)
  - MOUSEKEY_ENABLE = no
  - SPACE_CADET_ENABLE = no
  - GRAVE_ESC_ENABLE = no
  - MAGIC_ENABLE = no
- **Default keymap**
  - Rotary encoders
    - Dedicated encoder for switching layers
    - Other rotary encoders handle scrolling, audio volume & zoom
  - Bootloader mode key on Layer 1
  - Toggle RGB lighting
