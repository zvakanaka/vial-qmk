# PMW3389-RP2040

Split keyboard with PMW3389 trackball on the right side.

## Build

Default build (trackball on right side):
```
qmk compile -kb pmw3389_rp2040 -km default
```

Build with trackball on left side:
```
qmk compile -kb pmw3389_rp2040 -km default -e TRACKBALL_SIDE=left
```

## Layout

Default configuration (trackball on right):
- Left side: 3x5 + 3 thumb keys
- Right side: 3x5 + 2 thumb keys + PMW3389 trackball

Left trackball configuration:
- Left side: 3x5 + 2 thumb keys + PMW3389 trackball
- Right side: 3x5 + 3 thumb keys

Split communication: TRS cable (3-pin)

## Pin Assignments

### Matrix (both sides)

| Function | Pins |
| -------- | ---- |
| Rows | GP8, GP9, GP10 |
| Columns | GP11, GP12, GP13, GP14, GP15, GP16 |

### Split Communication

| Function | Pin |
| -------- | --- |
| Soft serial | GP1 |

### PMW3389 (trackball side)

| PMW3389 | RP2040 |
| ------- | ------ |
| VIN | 3.3V |
| GND | GND |
| SCLK | GP2 |
| MOSI | GP7 |
| MISO | GP0 |
| CS | GP5 |

## Configuration

- Diode direction: ROW2COL
- Default CPI: 2000
- Transport: Serial over TRS cable

## Sources

https://ryanis.cool/cosmos/docs/qmk-rp2040/
