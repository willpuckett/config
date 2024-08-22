# Firmware Build Settings

## ebb42

| Heading                          | Setting        |
| -------------------------------- | -------------- |
| µc Architecture                  | STM32          |
| Processor Model                  | STM32G0B1      |
| Build deployment                 | ✅ 8 Kib       |
| Clock ref                        | 8 MHz 🔮       |
| Comm interface                   | CAN on PB0/PB1 |
| App/bootloader offset            | 8 KiB          |
| CAN bus speed                    | 1M             |
| set GPIO                         | none           |
| bootloader on radid double click | ✅             |
| Enable bootloader on button      | no             |
| Enable LED                       | nope           |

## Fly-D5

```sudo dfu-util -a 0 -d 0483:df11 --dfuse-address 0x08000000:force:leave -D ~/katapult/out/katapult.bin```

| Heading                          | Setting                |
| -------------------------------- | ---------------------- |
| µc Architecture                  | STM32                  |
| Processor Model                  | STM32F072              |
| Build deployment                 | ✅ 8 Kib               |
| Clock ref                        | 8 MHz 🔮               |
| Comm interface [katapult]        | USB (PA11/PA12)        |
| Comm interface [klipper]         | Bridge USB (PA11/PA12) |
| Comm interface [klipper]         | Bridge CAN (PB8/PB9)   |
| App/bootloader offset            | 8 KiB                  |
| CAN bus speed                    | 1M                     |
| set GPIO                         | none                   |
| bootloader on radid double click | ✅                     |
| Enable bootloader on button      | no                     |
| Enable LED                       | nope                   |

