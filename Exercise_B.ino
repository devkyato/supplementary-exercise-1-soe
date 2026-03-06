// mga variable para sa tatlong leds
// ginagaya nito ang kulay ng traffic light
// led_1 = green, led_2 = yellow, led_3 = red

int led_1 = 6;
int led_2 = 7;
int led_3 = 8;

// delay values para sa bawat phase ng traffic light
// 5000 ms = 5 seconds
// 2000 ms = 2 seconds

int led_delay1 = 5000;
int led_delay2 = 2000;
int led_delay3 = 5000;

void setup() {

  // dito sine-set ang bawat pin bilang output
  // para makontrol ng arduino ang pag on at off ng leds

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {

  // green light phase
  // ibig sabihin pwede dumaan ang sasakyan

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  delay(5000);

  // yellow light phase
  // warning ito na malapit na mag red light

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);

  delay(2000);

  // red light phase
  // ibig sabihin stop ang traffic

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);

  delay(5000);
}
