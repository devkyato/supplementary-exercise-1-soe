/*
  Button-controlled pause and resume example.
  Wire a button from BUTTON_PIN to GND (INPUT_PULLUP).
  Opens serial and toggles a paused flag on press.
*/
const int BUTTON_PIN = 2;
bool paused = false;
bool lastStable = HIGH;
unsigned long lastDebounceMs = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);
  Serial.println("Button pause/resume example");
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);
  if (reading != lastStable && (millis() - lastDebounceMs) > 30) {
    lastDebounceMs = millis();
    lastStable = reading;
    if (reading == LOW) {
      paused = !paused;
      Serial.println(paused ? "PAUSED" : "RESUMED");
    }
  }
  if (!paused) {
    // do work while running
    delay(10);
  }
}
