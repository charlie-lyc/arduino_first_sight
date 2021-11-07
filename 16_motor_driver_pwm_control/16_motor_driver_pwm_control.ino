void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// 150/255(3V) signal output
int motorPower = 150;

void loop() {
  // 1. Check Motor Drive
  // analogWrite(5, motorPower);
  // analogWrite(6, motorPower);
  // analogWrite(10, motorPower);
  // analogWrite(11, motorPower);
  // 2. Program Movement: rotate right and left at 3 seconds interval
  analogWrite(5, motorPower); // 5pin: right forward
  analogWrite(6, 0);
  analogWrite(10, 0);
  analogWrite(11, motorPower);// 11pin: left backward
  delay(3000);
  analogWrite(5, 0);
  analogWrite(6, motorPower); // 6pin: right backward
  analogWrite(10, motorPower);// 10pin: left forward
  analogWrite(11, 0);
  delay(3000);
}
