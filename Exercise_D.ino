// gumagamit ito ng array para sa mga led pins
// mas madali ito kapag maraming leds ang gagamitin

int ledPins[] = {6, 7, 8, 9, 10, 11};

// kinukuha dito kung ilang leds ang nasa array
// ginagamit ito sa loops para hindi mano-manong ilagay ang bilang

int numLeds = sizeof(ledPins) / sizeof(ledPins[0]);

// delay value sa bawat pagbabago ng led
int delayTime = 500;

void setup() {

  // ginagamit ang for loop para i-set lahat ng leds bilang output
  // mas efficient ito kaysa isa-isang pinMode

  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  // tatawagin ang dalawang functions
  // una ang count up at pagkatapos ang count down

  countUp();
  countDown();
}

void countUp() {

  // sa count up phase
  // isa-isang i-o-on ang leds mula led1 hanggang led6

  for (int i = 0; i < numLeds; i++) {

    digitalWrite(ledPins[i], HIGH);

    // delay para makita ang step by step na pag-on ng leds
    delay(delayTime);
  }
}

void countDown() {

  // sa count down phase
  // isa-isang i-o-off ang leds mula sa huli pabalik sa una

  for (int i = numLeds - 1; i >= 0; i--) {

    digitalWrite(ledPins[i], LOW);

    // delay ulit para makita ang pagbaba ng count
    delay(delayTime);
  }
}
