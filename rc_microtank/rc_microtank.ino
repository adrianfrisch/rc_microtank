/* 
Motor setup for the two motors
Motor A is on the right of the vehicle
*/
#include <ArduinoBlue.h>
#include <SoftwareSerial.h>

SoftwareSerial btSerial(2,3);

int drivingSpeed = 120;
int prevSteering = 49;
int throttle, steering, sliderVal, sliderId, button;
byte input = 'D';
void setup()
{
  enableMotors();
  Serial.begin(115200);  
  Serial.write("TEST started");
  btSerial.begin(9600);

}

void loop(){
  if (Serial.available()){
    //Serial.write("incoming");
    //Serial.read();
  }
  if (btSerial.available()){    
    input = btSerial.read();
    Serial.write(input);
    executeCommand(input);
  }
}

