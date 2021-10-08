# include <LiquidCrystal.h> // * Standard Library

LiquidCrystal lcd(12, 11, 5, 4, 3 ,2); // In Sequence

void setup() {
  lcd.begin(16, 2); // LCD Size(Full Size): width x height
  lcd.print("Hello, world!");
}

void loop() {
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(500);
}
