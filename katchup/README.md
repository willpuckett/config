# Firmware Build Settings

## ebb42 (rotary)

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

## HermitCrab Can (hermie)

_note_ you can change this to 4kib app offset if katapult build is small enough

| Heading                          | Setting        |
| -------------------------------- | -------------- |
| µc Architecture                  | STM32          |
| Processor Model                  | STM32F072      |
| Build deployment                 | ✅ 8 Kib       |
| Clock ref                        | 8 MHz 🔮       |
| Comm interface                   | CAN on PB8/PB9 |
| App/bootloader offset            | 8 KiB          |
| CAN bus speed                    | 1M             |
| set GPIO                         | none           |
| bootloader on radid double click | ✅             |
| Enable bootloader on button      | no             |
| Enable LED                       | nope           |

## Pico

| Heading                          | Setting    |
| -------------------------------- | ---------- |
| µc Architecture                  | RP2040     |
| Flash Chip                       | W25Q080    |
| Build deployment                 | ✅ 16Kib   |
| Bootloader Offset                | 16 KiB     |
| Comm interface [katapult]        | USB        |
| Comm interface [klipper]         | U2C Bridge |
| CAN RX gpio                      | gpio0      |
| CAN TX gpio                      | gpio1      |
| CAN bus speed                    | 1M         |
| set GPIO                         | none       |
| bootloader on radid double click | ✅         |
| Enable bootloader on button      | no         |
| Enable LED                       | nope       |
