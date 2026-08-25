#include <ArduinoPatterns.h>

const uint8_t kPatternPins[] = {2, 3, 4};
const PatternStep kChase[] = {{0b001, 100}, {0b010, 100}, {0b100, 100}};
LedBank chaseBank(kPatternPins, 3);
LedAnimator chase(chaseBank, kChase, 3);
PeriodicOutput heartbeat(8, 500);

void setup() {
  chaseBank.begin();
  chase.start(millis());
  heartbeat.begin(millis());
}

void loop() {
  const uint32_t now = millis();
  chase.update(now);
  heartbeat.update(now);
}
