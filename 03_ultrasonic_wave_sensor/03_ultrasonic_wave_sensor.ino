int trig = 2;
int echo = 3;

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}

void loop() {
  digitalWrite(trig, HIGH);
  delayMicroseconds(10); // micro seconds
  digitalWrite(trig, LOW);
  // Ultrasonic Wave Velocity: 340 m/s
  // UW Travels Back and Forth: ? / 2
  // Trigger OUT, Echo IN: ? / 1000000 seconds
  // Convert 'm' => 'cm': ? X 100
  int distance = pulseIn(echo, HIGH) * 340 / 2 / 10000;
  Serial.print(distance);
  Serial.println("cm");
  delay(100); // milli seconds
}
