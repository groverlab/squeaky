#define OFF 0
#define CW 1
#define CCW 2

void run(int pump_number, int direction) {
  int pin1 = 0;
  int pin2 = 0;
  switch (pump_number) {
    case 0:
      pin1 = 2;
      pin2 = 3;
      break;
    case 1:
      pin1 = 4;
      pin2 = 5;
      break;
    case 2:
      pin1 = 6;
      pin2 = 7;
      break;
    case 3:
      pin1 = 8;
      pin2 = 9;
      break;
    case 4:
      pin1 = 10;
      pin2 = 11;
      break;
    case 5:
      pin1 = 14;
      pin2 = 15;
      break;
  }
  if (direction == OFF) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
  }
  if (direction == CW) {
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, HIGH);
  }
  if (direction == CCW) {
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, LOW);
  }
}

void all_off() {
  for (int i = 0; i < 6; i++) {
    run(i, OFF);
  }
}

void exercise() {
  for (int pump = 0; pump < 6; pump++) {
    run(pump, CW);
    delay(1000);
    run(pump, CCW);
    delay(1000);
    run(pump, OFF);
  }
  for (int pump = 0; pump < 6; pump++) run(pump, CW);
  delay(3000);
  for (int pump = 0; pump < 6; pump++) run(pump, CCW);
  delay(3000);
  for (int pump = 0; pump < 6; pump++) run(pump, OFF);
}

