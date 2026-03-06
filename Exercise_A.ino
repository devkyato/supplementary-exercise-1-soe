// dito natin dine-declare yung variables ng bawat led
// bawat variable ay naka assign sa pin number ng arduino
// ibig sabihin kung saan naka connect yung led sa board
int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;

// delay variables para mas madaling baguhin ang timing ng lights
// milliseconds ang unit ng delay
// halimbawa 1000 = 1 second
int led_delay1 = 500;
int led_delay2 = 1000;
int led_delay3 = 1500;

void setup() {

  // ang setup() function ay tumatakbo lang isang beses kapag nag start ang arduino
  // dito natin sine-set ang bawat pin bilang output
  // kailangan ito para makapag send ang arduino ng signal sa leds

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  // ang loop() function ay paulit ulit tumatakbo habang naka power ang arduino
  // dito nangyayari ang iba't ibang led patterns

  // pattern kung saan ang led 1,3,5 ay naka on
  // habang ang led 2,4,6 ay naka off

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);

  // maghihintay muna ng kalahating segundo bago mag change ng pattern
  delay(500);

  // reverse naman ang pattern
  // ngayon ang led 2,4,6 ang naka on

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);

  // hintay ng isang segundo bago next sequence
  delay(1000);

  // bagong pattern kung saan unang tatlong leds ang naka on

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);

  // habang ang huling tatlo ay naka off

  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1000);

  // reverse ulit ng pattern

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);

  delay(1000);

  // pattern kung saan ang led 1 at led 6 lang ang naka on

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);

  // mas mahaba ang delay dito kaya 1.5 seconds
  delay(1500);

  // bagong combination ng leds

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);

  delay(1500);

  // huling combination ng leds sa sequence

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1500);
}
