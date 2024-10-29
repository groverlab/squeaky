void setup() {
  setup_pins();
}

void loop() {
  for(int pump=0; pump<4; pump++) run(pump, CW);
  delay(1000);
}