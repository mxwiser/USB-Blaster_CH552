# USB-Blaster Firmware for "REV. C USB BLASTER" board with CH552G chip.

This is a fork of [CH55x-USB-Blaster firmware by VladimirDuan](https://github.com/VladimirDuan/CH55x-USB-Blaster) that runs on a cheap clone Altera USB Blaster with CH552G chip.
It works correctly in Linux and Windows with my limited testing(I am testing with MAX V CPLD), no special drivers required.

#
- This fork added all needed files for correct build.
- Implement CI to build and release binary files so you don't need to setup or download any build tools or sdk files.
- Support AS mode.
- Support hardware SPI now.

#
CH552G can be replaced by CH551G and CH554G, in fact these models have the same Die.

|   PIN   | CH552G |
|:-------:|:------:|
|   LED   |  P1.1  |
|   NCS   |  P1.4  |
|   TDI   |  P1.5  |
|   TDO   |  P1.6  |
|   TCK   |  P1.7  |
|   TMS   |  P3.2  |
|   ASDO  |  P3.3  |
|   NCE   |  P3.4  |

![example](example.png "example")
