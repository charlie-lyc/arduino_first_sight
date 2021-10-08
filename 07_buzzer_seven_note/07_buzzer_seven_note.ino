int buzz = 3;
// 4 Octave 'do' ~ 'si'
float sevenNote[7] = { 261.6, 311.1, 329.6, 349.2, 392.0, 440.0, 493.9 };

void setup() {
  Serial.begin(9600);
  pinMode(buzz, OUTPUT);
}

void loop() {
  for (int i = 0; i < 7; i ++) {
    Serial.println(sevenNote[i]);
    tone(buzz, sevenNote[i]);
    delay(500);
  }
}
