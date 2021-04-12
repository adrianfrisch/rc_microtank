#include <ArduinoBlue.h>
#include <SoftwareSerial.h>

SoftwareSerial btSerial(2,3);

// Startup with standard command 'D' -> Disconnected
byte input = 'D';
// Last bluetooth command reception time
int lastActive;

void setup()
{
  enableMotors();
  // Enable PC serial communication for debugging and testing.
  Serial.begin(115200);  
  Serial.write("==========================\n");
  Serial.write("== RC-Microtank started ==\n");
  Serial.write("==========================\n");
  // Begin serial communication over bluetooth 
  btSerial.begin(9600);
  // Initialize last activity time as now.
  lastActive = millis();
}

void loop(){
  
  if (btSerial.available()){    
    // Update activity time
    lastActive = millis();
    // Read the new command
    input = btSerial.read();
    // Mirror the command to the PC Serial
    Serial.write(input);
    // And execute.
    executeCommand(input);
  }
  if (lastActive + 2000 < millis()){
    // Timeout because of disconnect. Reset to disconnected and execute.
    input = 'D';
    executeCommand(input);
  }
}

