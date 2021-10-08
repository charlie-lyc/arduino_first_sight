int message;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT); // Green LED
  pinMode(6, OUTPUT); // Yellow LED
  pinMode(7, OUTPUT); // Red LED
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void loop() {
  if (Serial.available() > 0) {
    message = Serial.read();
//    Serial.println(message);
    switch (message - 48) {
      case 0:
        digitalWrite(5, LOW);
        break;
      case 1:
        digitalWrite(5, HIGH);
        break;
      case 2:
        digitalWrite(6, LOW);
        break;
      case 3:
        digitalWrite(6, HIGH);
        break;
      case 4:
        digitalWrite(7, LOW);
        break;
      case 5:
        digitalWrite(7, HIGH);
        break;
    }
  }
}