A low cost small size USB dev board based on WCH CH552G.

CH552G can be replaced by CH551G and CH554G, in fact these models have the same Die.

CH559G/CH558G/CH557G/CH556G can also be soldered on CH552Nano board. Six GPIOs will change in this case.

|  PIN  | CH552G | CH549G |
|:-----:|:------:|:------:|
|   1   |  P3.2  |  P1.1  |
|   7   |  P3.1  |  P3.0  |
|   8   |  P3.0  |  P3.1  |
|   9   |  P1.1  |  P3.4  |
|  10   |  P3.3  |  P2.2  |
|  11   |  P3.4  |  P2.4  |

![example](image/example.png "example")

# USB-Blaster Firmware for "REV. C USB BLASTER" board with CH552G chip.

This is a fork of [CH55x-USB-Blaster firmware by VladimirDuan](https://github.com/VladimirDuan/CH55x-USB-Blaster) that runs on a cheap clone Altera USB Blaster with CH552G chip.
It works correctly in Linux and Windows with my limited testing(I am testing with MAX V CPLD), no special drivers required.

#
- This fork added all needed files for correct build.
- Implement CI to build and release binary files so you don't need to setup or download any build tools or sdk files.
- Support AS mode.
- Support hardware SPI now.
