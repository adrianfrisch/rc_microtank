# rc_microtank
Arduino Code for the RC controlled Microtank

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

## Wirering
|-|-|
|L298N pin|Arduino pin|
|enA|D9|
|enB|D10|


## Progression
2021-04-08: Initial setup of code. 

## 3D-Printfiles
You can find the files for the microtank on [https://www.thingiverse.com/thing:4820194](Thingiverse).
