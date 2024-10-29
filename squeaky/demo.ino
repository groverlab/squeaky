void setup() {
  for (int pin = 0; pin < 16; pin++) {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, LOW);
  }
}

void loop() {
  exercise();
}