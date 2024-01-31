const int soilMoisturePin = A0;
const int ledPin = 13;
const int moistureThreshold = 500;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int soilMoisture = analogRead(soilMoisturePin);
  Serial.print("Soil Moisture: ");
  Serial.println(soilMoisture);

  if (soilMoisture > moistureThreshold) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
