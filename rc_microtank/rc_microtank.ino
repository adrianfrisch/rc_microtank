/* 
Motor setup for the two motors
Motor A is on the right of the vehicle
*/


void setup()
{
  enableMotors();
  Serial.begin(9600);  
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);    
  goForward();// wait for a second  
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);       
  goBackward();
}

