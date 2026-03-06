// mga variable para sa led pins
// ibig sabihin nito kung saang pin naka-connect ang bawat led
int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;

// delay values para sa iba't ibang patterns
// milliseconds ang unit (1000 = 1 second)
int led_delay1 = 500;
int led_delay2 = 1000;
int led_delay3 = 1500;

void setup() {

  // sinasabi dito sa arduino na ang pins na ito ay output
  // ibig sabihin gagamitin sila para mag-on or off ng led
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  // pattern 1
  // led 1,3,5 naka-on
  digitalWrite(led_1, HIGH); // on
  digitalWrite(led_2, LOW);  // off
  digitalWrite(led_3, HIGH); // on
  digitalWrite(led_4, LOW);  // off
  digitalWrite(led_5, HIGH); // on
  digitalWrite(led_6, LOW);  // off

  delay(500); // hintay ng 0.5 seconds

  // opposite pattern
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);

  delay(1000); // pause bago next pattern

  // pattern 2
  // unang 3 leds naka-on
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);

  // huling 3 leds off
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1000);

  // reverse naman
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);

  delay(1000);

  // pattern 3
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);

  delay(1500);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);

  delay(1500);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1500);
}
