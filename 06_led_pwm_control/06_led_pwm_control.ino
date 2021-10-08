int pwm = 3;

void setup() {
  Serial.begin(9600);
  pinMode(pwm, OUTPUT);
}

void loop() {
  for (int i = 0; i < 255; i += 10) {
    Serial.println(i);
    analogWrite(pwm, i); // Analog Write: 0 ~ 255
    delay(300);
  }
}
