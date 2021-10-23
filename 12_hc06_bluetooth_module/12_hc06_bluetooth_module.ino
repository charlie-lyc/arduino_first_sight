// 정상적인 물리적 연결
// Arduino RX(0) -> HC06 TXD
// Arduino TX(1) -> HC06 RXD

// 다만 여기서는 앱을 통해 블루투스 모듈에 신호를 보내는 것이 아니라
// 블루투스 모듈에 보낼 신호를 시리얼을 통해 쓰고(write)
// 블루투스 모듈이 받은 신호를 다시 그대로 시리얼에 출력(print)하기 위해
// 임시적으로 아래와 같이 물리적 연결을 실행
// Arduino RX(0) -> HC06 RXD
// Arduino TX(1) -> HC06 TXD

# include <SoftwareSerial.h>

# define RX 0 // 아두이노 보드 설정 그대로
# define TX 1 // 아두이노 보드 설정 그대로
SoftwareSerial hc06(RX, TX); // 시리얼과 통신하는 HC06 블루투스 모듈 객체 정의

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
