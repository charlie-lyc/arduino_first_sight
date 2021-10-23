// 정상적인 물리적 연결
// Arduino RX(0) -> HC06 TXD
// Arduino TX(1) -> HC06 RXD

# include <SoftwareSerial.h>

# define RX 0
# define TX 1
SoftwareSerial hc06(RX, TX);

int message;

void setup() {
  Serial.begin(9600);
  hc06.begin(9600);
  pinMode(5, OUTPUT); // Green LED
  pinMode(6, OUTPUT); // Yellow LED
  pinMode(7, OUTPUT); // Red LED
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

void loop() {
  if (hc06.available() > 0) {
    message = hc06.read();
    Serial.println(message);
    // 안드로이드 앱을 통해 전송되는 값은 숫자임!
    // 따라서 Not Apply ASCII !
    switch (message) {
      case 0: // Green Off
        digitalWrite(5, LOW);
        break;
      case 1: // Green On
        digitalWrite(5, HIGH);
        break;
      case 2: // Yellow Off
        digitalWrite(6, LOW);
        break;
      case 3: // Yellow On
        digitalWrite(6, HIGH);
        break;
      case 4: // Red Off
        digitalWrite(7, LOW);
        break;
      case 5: // Red On
        digitalWrite(7, HIGH);
        break;
    }
  }
}
