# rc_microtank
Arduino Code for the RC controlled Microtank
<a href="https://drive.google.com/uc?export=view&id=1334GY6rUDta5F0j1D3IIxgwWuF2fBBTM"><img src="https://drive.google.com/uc?export=view&id=1334GY6rUDta5F0j1D3IIxgwWuF2fBBTM" style="width: 480px; max-width: 100%; height: auto" title="Click for the larger version." /></a>

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
- Autonomous mode driveing using an ultrasonic range finder to detect obstacles

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




## Progression
2021-04-08: Initial setup of code. 

## 3D-Printfiles
You can find the files for the microtank on [https://www.thingiverse.com/thing:4820194](Thingiverse).
