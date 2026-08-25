#include <ArduinoPatterns.h>

const uint8_t kPins[] = {2, 3, 4};
constexpr uint8_t kTriggerPin = 7;
const PatternStep kSequence[] = {
    {0b001, 150}, {0b011, 150}, {0b111, 300}, {0b000, 150},
};
LedBank lights(kPins, 3);
LedAnimator sequence(lights, kSequence, 4, false);
bool previousTrigger = HIGH;

void setup() {
  pinMode(kTriggerPin, INPUT_PULLUP);
  lights.begin();
}

void loop() {
  const bool trigger = digitalRead(kTriggerPin);
  if (previousTrigger == HIGH && trigger == LOW && !sequence.running()) {
    sequence.start(millis());
  }
  previousTrigger = trigger;
  sequence.update(millis());
}
