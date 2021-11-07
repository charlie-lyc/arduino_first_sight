// 5pin: right forward
// 6pin: right backward
// 10pin: left forward
// 11pin: left backward
int motorPin[4] = {5, 6, 10, 11};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 4; i++) {
    pinMode(motorPin[i], OUTPUT);
  }
}

void loop() {

}

void serialEvent() {
  if (Serial.available() > 2) {
    byte pinout = Serial.read();
    byte left_speed = Serial.read();
    byte right_speed = Serial.read();
    for (int i = 0; i < 4; i ++) {
      if (i < 2) {
        analogWrite(motorPin[i], (0x01 & (pinout >> i)) == 1 ? right_speed : 0);
      } else {
        analogWrite(motorPin[i], (0x01 & (pinout >> i)) == 1 ? left_speed : 0);
      }
    }
  }
}
