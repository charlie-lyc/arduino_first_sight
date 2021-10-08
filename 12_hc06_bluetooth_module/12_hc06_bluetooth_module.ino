# include <SoftwareSerial.h>

# define RX 0
# define TX 1
SoftwareSerial hc06(RX, TX);

void setup() {
  Serial.begin(9600);
  hc06.begin(9600);
}

void loop() {
  if (hc06.available() > 0) {
    Serial.write(hc06.read());
    delay(50);
  }
  if (Serial.available() > 0) {
    hc06.write(Serial.read());
    delay(50);
  }
}
