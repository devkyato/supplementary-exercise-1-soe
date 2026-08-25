#include <ArduinoPatterns.h>

constexpr uint8_t kStatusPin = 8;
const PatternStep kReady[] = {{1, 120}, {0, 880}};
LedBank statusBank(&kStatusPin, 1);
LedAnimator status(statusBank, kReady, 2);

void setup() {
  statusBank.begin();
  status.start(millis());
}

void loop() {
  status.update(millis());
  // Other non-blocking application work can run here.
}
