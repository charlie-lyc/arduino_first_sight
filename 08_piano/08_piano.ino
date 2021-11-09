int buzz = 5;
int pins[8] = { 6, 7, 8, 9, 10, 11, 12, 13 };

void setup() {
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
  for (int i = 0; i < 8; i ++) {
    pinMode(pins[i], INPUT);
  }
}

void loop() {
  // 3 Octave 'Do' ~ 4 Octave 'Do'
  if (digitalRead(pins[0]) == HIGH) {
    Serial.println(130.8);
    tone(buzz, 130.8);
  } else if (digitalRead(pins[1]) == HIGH) {
    Serial.println(146.8);
    tone(buzz, 146.8);
  } else if (digitalRead(pins[2]) == HIGH) {
    Serial.println(164.8);
    tone(buzz, 164.8);
  } else if (digitalRead(pins[3]) == HIGH) {
    Serial.println(174.6);
    tone(buzz, 174.6);
  } else if (digitalRead(pins[4]) == HIGH) {
    Serial.println(196.0);
    tone(buzz, 196.0);
  } else if (digitalRead(pins[5]) == HIGH) {
    Serial.println(220.0);
    tone(buzz, 220.0);
  } else if (digitalRead(pins[6]) == HIGH) {
    Serial.println(246.9);
    tone(buzz, 246.9);
  } else if (digitalRead(pins[7]) == HIGH) {
    Serial.println(261.6);
    tone(buzz, 261.6);
  } else {
    noTone(buzz);
  }
}
