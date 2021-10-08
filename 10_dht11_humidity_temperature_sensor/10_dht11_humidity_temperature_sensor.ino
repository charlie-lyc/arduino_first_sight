# include <DHT.h>

# define DHTPIN 7
# define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(3000);
  int humidity = dht.readHumidity(); // 20~80 %RH
  int temperature = dht.readTemperature(); // 0~50 Celsius
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %RH");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" Celsius");
}
