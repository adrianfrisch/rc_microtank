# rc_microtank
Arduino Code for the RC controlled Microtank
<a href="https://drive.google.com/uc?export=view&id=13sXFCwcgJ3NBBF7Vqo1msWkTlgnKhG09"><img src="https://drive.google.com/uc?export=view&id=13sXFCwcgJ3NBBF7Vqo1msWkTlgnKhG09" style="width: 480px; max-width: 100%; height: auto" title="Click for the larger version." /></a>

## Remark
This is work in progress. I currently assembling the hardware. Code will follow progress on the hardware.

## Idea
A few years ago, I bought an Arduino Robot kit which was using two simple gear motors and a L298N motor driver.
It has an acrylic plate as chassis and a third free rotating wheel. Nice to experiment with it. But really 
boring design. So while watching Ivan Miranda on Youtube, I got the idea to give it a chain drive and convert it 
into a "micro tank".

## Plan
- Use the motors and electric components of the kit
- Arduino Nano as Brains
- Make it small enough to be printed on almost any printer
- Make it remote controlled via Bluetooth
- Autonomous mode driving using an ultrasonic range finder to detect obstacles

## Materials required
- Print parts
- Arduino Nano
- HC-05 Bluetooth module
- L298N dual motor driver
- 2 gear motors e.g. Adafruit-DC-Gearbox-Motor-TT or similar
- M3 Rods nuts and washers 

## Wiring
The motor power supply goes on the 12V and GND pins of the L298N. The GND of the power supply and the Arduino need to be also connected.
The two gear motors are connected to the two outputs of the L298N.
Arduino is connected as follows:
| L298N pin | Arduino pin |
| --------- | ----------- |
| enA       | D9          |
| enB       | D10         |
| IN1       | A0          |
| IN2       | A1          |
| IN3       | A2          |
| IN4       | A3          |
| 5V        | 5V          |
| GND       | GND         |

The HC-05 modul for the communication is connected as follows:
| HC05 | Arduino |
| --- | --- |
| 5V | 5V |
| Gnd | Gnd |
| RX | D3 |
| TX | D2 |



## Progression
2021-04-08: Initial setup of code. 
2021-04-12: Manual steering via Bluetooth completed. Using App [Bluetooth RC Controller](https://play.google.com/store/apps/details?id=braulio.calle.bluetoothRCcontroller).

## 3D-Printfiles
You can find the files for the microtank on [Thingiverse](https://www.thingiverse.com/thing:4820194).
