int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  val = digitalRead(2);
  if (val == HIGH) {
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(3, LOW);
  }
  Serial.println(val);
}
