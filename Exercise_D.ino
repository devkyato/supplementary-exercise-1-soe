int ledPins[] = {6, 7, 8, 9, 10, 11}; 
int numLeds = sizeof(ledPins) / sizeof(ledPins[0]); 
int delayTime = 500;

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  countUp();
  countDown();
}

void countUp() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(delayTime);
  }
}

void countDown() {
  for (int i = numLeds - 1; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(delayTime);
  }
}
