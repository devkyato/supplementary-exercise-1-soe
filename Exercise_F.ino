// dalawang leds na magbi-blink
// magkaiba ang timing kaya parang alternating blink effect

int led1 = 9;
int led2 = 10;

void setup() {

  // sine-set ang pins bilang output para makapag control ng leds

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {

  // parehong off ang leds sa simula

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);

  // maghihintay ng kalahating segundo
  delay(500);

  // led2 lang ang naka on

  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);

  delay(500);

  // led1 naman ang naka on habang led2 naka off

  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);

  delay(500);

  // parehong leds naka on

  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);

  delay(500);
}
