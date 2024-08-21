# Settings for Firmware Builds

## ebb42

| Heading                          | Setting        |
| -------------------------------- | -------------- |
| µc Architecture                  | STM32          |
| Processor Model                  | STM32G0B1      |
| Build deployment                 | ✅ 8Kib        |
| Clock ref                        | 8 MHz 🔮       |
| Comm interface                   | CAN on PB0/PB1 |
| App/bootloader offset            | 8 KiB          |
| CAN bus speed                    | 1M             |
| set GPIO                         | none           |
| bootloader on radid double click | ✅             |
| Enable bootloader on button      | no             |
| Enable LED                       | nope           |

# Robin Nano V3

| Heading                          | Setting       |
| -------------------------------- | ------------- |
| µc Architecture                  | STM32         |
| Processor Model                  | STM32F407     |
| Build deployment                 | ✅ 16 Kib     |
| Clock ref                        | 8 MHz 🔮      |
| Comm interface [kat]      | USB (PA11/PA12) |
| Comm interface [klip]      | CANBridge (PD0/PD1) |
| App/bootloader offset            | 16 KiB        |
| CAN bus speed                    | 1M            |
| set GPIO                         | none          |
| bootloader on radid double click | ✅            |
| Enable bootloader on button      | ❌            |
| Enable LED                       | ❌            |
