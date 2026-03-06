// =============================================
// exercise d - led counting simulation
// nagpapakita ito ng count up at count down
// gamit ang 6 leds
// =============================================

// array ng pins ng leds
int ledPins[] = {6,7,8,9,10,11};

int numLeds = 6;

void setup() {

  // gagamit ng loop para i-set lahat ng leds
  // bilang output

  for(int i=0;i<numLeds;i++){
    pinMode(ledPins[i],OUTPUT);
  }
}

void loop(){

  // =====================
  // count up
  // =====================
  // isa isa i-o-on ang leds

  for(int i=0;i<numLeds;i++){
    digitalWrite(ledPins[i],HIGH);
    delay(500);
  }

  // =====================
  // count down
  // =====================
  // isa isa naman i-o-off

  for(int i=numLeds-1;i>=0;i--){
    digitalWrite(ledPins[i],LOW);
    delay(500);
  }
}
