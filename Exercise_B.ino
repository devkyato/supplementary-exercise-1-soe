// tatlong leds para sa traffic light
int led_1 = 6; // green
int led_2 = 7; // yellow
int led_3 = 8; // red

// delay values para sa bawat ilaw
int led_delay1 = 5000;
int led_delay2 = 2000;
int led_delay3 = 5000;

void setup() {

  // set pins as output
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {

  // green light
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  delay(5000); // 5 seconds green

  // yellow light
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);

  delay(2000); // 2 seconds yellow

  // red light
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);

  delay(5000); // 5 seconds red
}
