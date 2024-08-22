# Robin Nano V3.1

## Upstream Docs

- [Robin Nano V3.1 Repo](https://github.com/makerbase-mks/MKS-Robin-Nano-V3.X/tree/main/hardware/MKS%20Robin%20Nano%20V3.1_001)
- [Robin Nano V3.1 Schematic](https://pux.deno.dev/makerbase-mks/MKS-Robin-Nano-V3.X@main/hardware/MKS%20Robin%20Nano%20V3.1_001/MKS%20Robin%20Nano%20V3.1_001%20SCH.pdf?b)
- [danorder config](https://pux.deno.dev/danorder/Flsun-super-racer-Full-klipper-config-@main/printer.cfg)

## Pins

- [Robin Nano V3.1 Pinout PDF](https://pux.deno.dev/makerbase-mks/MKS-Robin-Nano-V3.X@main/hardware/MKS%20Robin%20Nano%20V3.1_001/MKS%20Robin%20Nano%20V3.1_001%20PIN.pdf?b)

![Robin Nano V3.1 Pinout](https://pux.deno.dev/makerbase-mks/MKS-Robin-Nano-V3.X@main/hardware/Image-V3/MKS_Robin_Nano_V3_PIN.png)

![Robin Nano V3.1 Wiring](https://pux.deno.dev/makerbase-mks/MKS-Robin-Nano-V3.X@main/hardware/Image-V3/MKS_Robin_Nano_V3_WIRING.jpg)

### Stepper Pins

| STEPPER | EN  | STEP | DIR | UART/CS | DIAG |
| ------- | --- | ---- | --- | ------- | ---- |
| X       | PE4 | PE3  | PE2 | PD5     | PA15 |
| Y       | PE1 | PE0  | PB9 | PD7     | PD2  |
| Z       | PB8 | PB5  | PB4 | PD4     | PC8  |
| E0      | PB3 | PD6  | PD3 | PD9     | PC4  |
| E1      | PA3 | PD15 | PA1 | PD8 PE7 |      |

### TMC SPI Mode

| MOSI | SCLK | MISO |
| ---- | ---- | ---- |
| PD14 | PD0  | PD1  |

PD0/PD1 are also 5v tolerant CAN capable pins.

## Flashing Katapult

1. Using a Xiao flashed as debugger connect the following pins:

| Xiao | Robin Nano |
| ---- | ---------- |
| GND  | GND        |
| 3.3V | 3.3V       |
| D9   | SWDIO      |
| D10  | SWCLK      |

2. Run command (from within this directory):

   `openocd -f stm_katapult.cfg -s /usr/share/openocd/scripts`

3. Double press the reset button on the Robin Nano to enter bootloader mode.

4. Find the can address with `flash_can.py -q`
