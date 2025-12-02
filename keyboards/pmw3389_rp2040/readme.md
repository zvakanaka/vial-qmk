# PMW3360-RP2040

## Usage

Copy and paste this folder to `qmk_firmware\keyboards\`, and build:
```
qmk compile -kb pmw3360_rp2040 -km default
```

> Tested on QMK version `0.21.6`.

## Pin Map

| PMW3360 PCB | RP2040 |
| ----------- | ------ |
| VIN         | 3.3V   |
| GND         | GND    |
| SCLK        | GP22   |
| MOSI        | GP23   |
| MISO        | GP20   |
| CS          | GP21   |
| MOTION      | --     |
| RESET       | --     |

- "--" means do not connect.
- 3.3V config.
