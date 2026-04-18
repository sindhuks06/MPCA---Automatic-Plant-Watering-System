int soilPin = A0;
int waterPin = A1;
int lightPin = A2;

int relayPin = 7;

// Adjust these after testing
int soilThreshold = 500;   // dry if above this
int waterThreshold = 300;  // water present if above this
int lightThreshold = 500;  // light present if BELOW this (important!)

void setup() {
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, HIGH); // pump OFF initially
  Serial.begin(9600);
}

void loop() {

  int soil = analogRead(soilPin);
  int water = analogRead(waterPin);
  int light = analogRead(lightPin);

  Serial.print("Soil: ");
  Serial.print(soil);
  Serial.print(" | Water: ");
  Serial.print(water);
  Serial.print(" | Light: ");
  Serial.println(light);

  // LOGIC
  if (soil > soilThreshold && water > waterThreshold && light < lightThreshold) {
    digitalWrite(relayPin, LOW);  // Pump ON
    Serial.println("PUMP ON");
  } else {
    digitalWrite(relayPin, HIGH); // Pump OFF
    Serial.println("PUMP OFF");
  }

  delay(1000);
}