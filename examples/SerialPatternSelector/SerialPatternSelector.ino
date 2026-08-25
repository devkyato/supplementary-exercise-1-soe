#include <ArduinoPatterns.h>

const uint8_t kPins[] = {2, 3, 4, 5};
const PatternStep kScanner[] = {
    {0b0001, 120}, {0b0010, 120}, {0b0100, 120},
    {0b1000, 120}, {0b0100, 120}, {0b0010, 120},
};
const PatternStep kAlternating[] = {{0b0101, 300}, {0b1010, 300}};
LedBank lights(kPins, 4);
LedAnimator scanner(lights, kScanner, 6);
LedAnimator alternating(lights, kAlternating, 2);
LedAnimator* active = &scanner;

void selectPattern(char command) {
  active->stop();
  if (command == '1') {
    active = &scanner;
  } else if (command == '2') {
    active = &alternating;
  } else {
    lights.clear();
    return;
  }
  active->start(millis());
}

void setup() {
  Serial.begin(9600);
  lights.begin();
  selectPattern('1');
}

void loop() {
  active->update(millis());
  if (Serial.available() > 0) {
    selectPattern(Serial.read());
  }
}
