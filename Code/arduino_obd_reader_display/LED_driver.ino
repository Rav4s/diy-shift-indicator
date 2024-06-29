// LED Driver file contains functions to display certain values using the 7 LEDs on the device

// Startup sequence runs when device is connected and initializes a connection with the ECU
// TODO: turn on all lights starting from left (green) to right (red) and flash three times to show successful startup
void startup() {
  digitalWrite(GREEN_ONE, HIGH);
  delay(250);
  digitalWrite(GREEN_TWO, HIGH);
  delay(250);
  digitalWrite(GREEN_THREE, HIGH);
  delay(250);
  digitalWrite(YELLOW_ONE, HIGH);
  delay(250);
  digitalWrite(YELLOW_TWO, HIGH);
  delay(250);
  digitalWrite(RED_ONE, HIGH);
  delay(250);
  digitalWrite(RED_TWO, HIGH);
  delay(250);
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, LOW);
  delay(500);
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
  digitalWrite(RED_ONE, HIGH);
  digitalWrite(RED_TWO, HIGH);
  delay(500);
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, LOW);
  delay(500);
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
  digitalWrite(RED_ONE, HIGH);
  digitalWrite(RED_TWO, HIGH);
  delay(500);
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, LOW);
  delay(500);
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
  digitalWrite(RED_ONE, HIGH);
  digitalWrite(RED_TWO, HIGH);
  delay(500);
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, LOW);
}

// TODO: describe the one-seven functions
void one() {
  digitalWrite(GREEN_ONE, HIGH);
}

void two() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
}

void three() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
}

void four() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
}

void five() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
}

void six() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
  digitalWrite(RED_ONE, HIGH);
}

void seven() {
  digitalWrite(GREEN_ONE, HIGH);
  digitalWrite(GREEN_TWO, HIGH);
  digitalWrite(GREEN_THREE, HIGH);
  digitalWrite(YELLOW_ONE, HIGH);
  digitalWrite(YELLOW_TWO, HIGH);
  digitalWrite(RED_ONE, HIGH);
  digitalWrite(RED_TWO, HIGH);
}

// Turn off all LEDs
void reset() {
  digitalWrite(GREEN_ONE, LOW);
  digitalWrite(GREEN_TWO, LOW);
  digitalWrite(GREEN_THREE, LOW);
  digitalWrite(YELLOW_ONE, LOW);
  digitalWrite(YELLOW_TWO, LOW);
  digitalWrite(RED_ONE, LOW);
  digitalWrite(RED_TWO, LOW);
}

// TODO: describe this
void displayRPM(int RPM) {

  reset();

  // Use RPM value to determine which display option to use
  if (RPM <= xxxx) {
    one():
  } else if (RPM <= xxxx) {
    two();
  } else if (RPM <= xxxx) {
    three();
  } else if (RPM <= xxxx) {
    four();
  } else if (RPM <= xxxx) {
    five();
  } else if (RPM <= xxxx) {
    six();
  } else (RPM <= xxxx) {
    seven();
  }
}