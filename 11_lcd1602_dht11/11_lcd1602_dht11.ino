# include <LiquidCrystal.h>
# include <DHT.h>

DHT dht(8, DHT11);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
}

void loop() {
  delay(3000);
  int humidity = dht.readHumidity();
  int temperature = dht.readTemperature();
  lcd.setCursor(0, 0); // (Column, Row)
  lcd.print("Humid: ");
  lcd.print(humidity);
  lcd.print(" %");
  lcd.setCursor(0, 1);
  lcd.print("Temper: ");
  lcd.print(temperature);
  lcd.print(" C");
  delay(3000);
  lcd.clear();
}
