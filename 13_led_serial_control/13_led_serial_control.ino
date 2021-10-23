// 정상적인 물리적 연결
// Arduino RX(0) -> HC06 TXD
// Arduino TX(1) -> HC06 RXD

// 다만 여기서는 앱을 통해 블루투스 모듈에 신호를 보내는 것이 아니라
// 블루투스 모듈에 보낼 신호를 시리얼을 통해 쓰고(write)
// 블루투스 모듈이 받은 신호를 다시 그대로 시리얼에 출력(print)하기 위해
// 임시적으로 아래와 같이 물리적 연결을 실행
// Arduino RX(0) -> HC06 RXD
// Arduino TX(1) -> HC06 TXD

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
    Serial.println(message);
    // 시리얼을 통해 숫자를 입력하게 되면 문자로 전송됨!
    // 따라서 Apply ASCII !
    switch (message - 48) {
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
