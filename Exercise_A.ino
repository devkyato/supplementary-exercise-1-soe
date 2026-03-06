int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;


int led_delay1 = 500;
int led_delay2 = 1000;
int led_delay3 = 1500;


void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}


void loop() {
  // PATTERN 1 (LED 1, 3, 5) > 500ms > (LED 2, 4, 6)
  digitalWrite(led_1, HIGH); //
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH); //
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH); //
  digitalWrite(led_6, LOW);
  delay(500);
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH); //
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH); //
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH); //


  // delay between pattern
  delay(1000);
 
  // PATTERN 2 (LED 1, 2, 3) > 1000ms > (LED 4, 5, 6)
  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);


  delay(1000);


  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);


  // delay between pattern
  delay(1000);


  // PATTERN 3 (LED 1, 2) > 1500ms > (LED 4, 5) > 1500ms > (LED 5, 6)
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
