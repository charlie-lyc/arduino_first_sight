void setup() {
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // 0/255(0V) or 150/255(3V) signal output
  // rotate right and left at 3 seconds interval
  analogWrite(5, 150);  // 5pin: right forward
  analogWrite(6, 0);
  analogWrite(10, 150); // 10pin: left backward
  analogWrite(11, 0);
  delay(3000);
  analogWrite(5, 0);
  analogWrite(6, 150);  // 6pin: right backward
  analogWrite(10, 0);
  analogWrite(11, 150); // 11pin: left forward
  delay(3000);
}
