#define enA 9
#define in1 14
#define in2 15
#define enB 10
#define in3 16
#define in4 17

byte speedRight;
byte speedLeft;

void enableMotors(){
  speedLeft = 120;
  speedRight= 120;

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void goForward()
{
  // turn on Motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, speedRight);
  // turn on motor B
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, speedLeft);
}

void goBackward(){
  // turn on Motor A
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, speedRight);
  // turn on motor B
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(enB, speedLeft);
}

void stopMotors(){
    analogWrite(enA, 0);
    analogWrite(enB, 0);
}
