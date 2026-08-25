#include <ArduinoPatterns.h>

const uint8_t kPins[] = {2, 3, 4, 5};
constexpr uint8_t kSensorPin = A0;
constexpr uint32_t kSampleIntervalMs = 50;
LedBank meter(kPins, 4);
uint32_t lastSampleAt = 0;

uint32_t levelMask(int reading) {
  const uint8_t level = static_cast<uint8_t>(map(reading, 0, 1023, 0, 4));
  return level == 0 ? 0 : (1UL << level) - 1;
}

void setup() {
  meter.begin();
}

void loop() {
  const uint32_t now = millis();
  if (now - lastSampleAt < kSampleIntervalMs) {
    return;
  }
  lastSampleAt = now;
  meter.writeMask(levelMask(analogRead(kSensorPin)));
}
