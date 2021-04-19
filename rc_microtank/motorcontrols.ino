/*
 * Motor controls. Motor A is on the right side of the vehicle. 
 * 
 */
#define enA 9
#define in1 15
#define in2 14
#define enB 10
#define in3 16
#define in4 17

// Always maximum speed currently.
byte motorSpeed=110;

void enableMotors(){
  // Switch on all output pins for the motor control.
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  TCCR1B = TCCR1B & B11111000 | B00000101;
}

void goLeft(){
   // turn on Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, motorSpeed);
  // turn on motor B
  analogWrite(enB, 0);  
}

void goRight(){
  // turn on Motor A
  analogWrite(enA, 0);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, motorSpeed);
}
void turnLeft(){
   // turn on Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, motorSpeed);
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, motorSpeed);
}

void turnRight(){
   // turn on Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, motorSpeed);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, motorSpeed);
}

void goForward()
{
  // turn on Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, motorSpeed);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, motorSpeed);
}

void goBackward(){
  // turn on Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, motorSpeed);
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, motorSpeed);
}

void goBackRight(){
  // turn on Motor A
  analogWrite(enA, 0);
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, motorSpeed);
}

void goBackLeft(){
    // turn on Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, motorSpeed);
  // turn on motor B  
  analogWrite(enB, 0);
}

void stopMotors(){
    analogWrite(enA, 0);
    analogWrite(enB, 0);
}

byte lastInput = 'D';

void executeCommand(byte input){
  if (input == lastInput)
    return;
  lastInput = input;
  Serial.write("New command");
  Serial.write(input);
  Serial.write('\n');
  switch (input){
      case 'D': // Disconnected Phone. Stop car.
        stopMotors();
        break;
      case 'F': // Forward
        goForward();
        break;
      case 'S': // Stop
        stopMotors();
        break;
      case 'B': // Back
        goBackward();
        break;
      case 'L': // Left
        turnLeft();
        break;
      case 'R': // Right
        turnRight();
        break;
      case 'G': // Front+Left
        goLeft();
        break;
      case 'I': // Front+Right
        goRight();
        break;
      case 'H': // Back+Left
        goBackLeft();
        break;
      case 'J': // Back+Right
        goBackRight();
        break;
      case 'U': // Backlights on
      case 'u': // Backlights off
      case 'W': // Frontlights on
      case 'w': // Frontlights off
      case 'V': // Sound on
      case 'v': // Sound off
      case 'X': // Special on
      case 'x': // Special off


      case '0': 
        motorSpeed = 110;
        break;
      case '1':
        motorSpeed = 120;
        break;
      case '2':
        motorSpeed = 135;
        break;
      case '3':
        motorSpeed = 150;
        break;
      case '4':
        motorSpeed = 165;
        break;
      case '5':
        motorSpeed = 180;
        break;
      case '6':
        motorSpeed = 195;
        break;
      case '7':
        motorSpeed = 210;
        break;
      case '8':
        motorSpeed = 225;
        break;
      case '9':
        motorSpeed = 240;
        break;
      case 'q': 
        motorSpeed = 255;
        break;
      default: 
        stopMotors();
        break;
  }
}


