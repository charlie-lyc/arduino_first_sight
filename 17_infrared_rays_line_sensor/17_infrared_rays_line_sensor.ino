void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
}

int rightVal = 0;
int leftVal = 0;

void loop() {
  rightVal = digitalRead(2);
  leftVal = digitalRead(3);
  Serial.print("Right Sensor: ");
  Serial.println(rightVal); // 0 or 1(black ground)
  Serial.print("Left Sensor: ");
  Serial.println(leftVal); // 0 or 1(black ground)
  delay(500);
}
