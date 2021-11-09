int cds = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // CDS Sensor: 1~50 kilo-ohm
  // Resistor: 10 kilo-ohm
  cds = analogRead(A0); // Analog Read: 0 ~ 1023
  Serial.println(cds);
  delay(100);
}
