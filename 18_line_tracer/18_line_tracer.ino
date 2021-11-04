void setup() {
  pinMode(5, OUTPUT);  // 5pin: right forward
  pinMode(6, OUTPUT);  // 6pin: right backward
  pinMode(10, OUTPUT); // 10pin: left backward
  pinMode(11, OUTPUT); // 11pin: left forward
  pinMode(2, INPUT);   // 2pin: right line sensor
  pinMode(3, INPUT);   // 3pin: left line sensor
}

int motorPower = 100;

void loop() {
  int lineRight = digitalRead(2);
  int lineLeft = digitalRead(3);
  if (lineRight == 1 && lineLeft == 1) { // go straiht
    analogWrite(5, motorPower);
    analogWrite(6, 0);
    analogWrite(10, 0);
    analogWrite(11, motorPower);
  } else if (lineRight == 1 && lineLeft == 0) { // turn right
    analogWrite(5, motorPower);
    analogWrite(6, 0);
    analogWrite(10, 0);
    analogWrite(11, motorPower + 50);
  } else if (lineRight == 0 && lineLeft == 1) { // turn left
    analogWrite(5, motorPower + 50);
    analogWrite(6, 0);
    analogWrite(10, 0);
    analogWrite(11, motorPower);
  } else if (lineRight == 0 && lineLeft == 0) { // rotate right at the end or out of line
    analogWrite(5, motorPower);
    analogWrite(6, 0);
    analogWrite(10, motorPower);
    analogWrite(11, 0);
  }

}
