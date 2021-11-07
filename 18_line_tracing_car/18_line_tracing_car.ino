// 5pin: right forward
// 6pin: right backward
// 10pin: left forward
// 11pin: left backward
int motorPin[4] = {5, 6, 10, 11};
// 2pin: right line sensor
// 3pin: left line sensor
int sensorPin[2] = {2, 3};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(motorPin[i], OUTPUT);
  }
  for (int j = 0; j < 2; j++) {
    pinMode(sensorPin[j], INPUT);
  }
}

int motorPower = 100;

void loop() {
  int lineRight = digitalRead(2);
  int lineLeft = digitalRead(3);
  if (lineRight == 1 && lineLeft == 1) { // go straiht
    analogWrite(5, motorPower);
    analogWrite(6, 0);
    analogWrite(10, motorPower);
    analogWrite(11, 0);
  } else if (lineRight == 1 && lineLeft == 0) { // turn right
    analogWrite(5, motorPower + 75);
    analogWrite(6, 0);
    analogWrite(10, motorPower);
    analogWrite(11, 0);
  } else if (lineRight == 0 && lineLeft == 1) { // turn left
    analogWrite(5, motorPower);
    analogWrite(6, 0);
    analogWrite(10, motorPower + 75);
    analogWrite(11, 0);
  } else if (lineRight == 0 && lineLeft == 0) { // rotate right at the end or out of line
    analogWrite(5, motorPower + 75);
    analogWrite(6, 0);
    analogWrite(10, 0);
    analogWrite(11, motorPower + 75);
  }
}
