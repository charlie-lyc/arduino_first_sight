int resistance = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  resistance = analogRead(A0); // Analog Read: 0 ~ 1023
  Serial.println(val);
  delay(100);
}