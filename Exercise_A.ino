// =============================================
// exercise a - alternating lights
// ginawa ito para mag simulate ng iba't ibang
// led patterns gamit ang 6 leds
// =============================================

// dito natin nilalagay kung anong pin naka connect
// ang bawat led sa arduino
// halimbawa: led_1 ay nasa pin 6 ng arduino
int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
int led_5 = 10;
int led_6 = 11;

// mga delay values para sa iba't ibang patterns
// delay ay gumagamit ng milliseconds
// 1000 milliseconds = 1 second
int led_delay1 = 500;
int led_delay2 = 1000;
int led_delay3 = 1500;

void setup() {

  // ang setup() function ay tumatakbo lamang isang beses
  // kapag nag start ang arduino program

  // dito natin sinasabi sa arduino na ang pins na ito
  // ay gagamitin bilang output
  // ibig sabihin ang arduino ang magbibigay ng signal
  // para i-on o i-off ang leds

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop() {

  // ang loop() function ay paulit ulit na tumatakbo
  // hangga't naka power ang arduino

  // ==========================
  // pattern 1
  // ==========================
  // led 1,3,5 naka on
  // led 2,4,6 naka off

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, LOW);

  // maghihintay muna bago mag change ng pattern
  delay(500);

  // ==========================
  // reverse pattern
  // ==========================
  // ngayon baliktad naman ang naka on

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, HIGH);

  delay(1000);

  // ==========================
  // pattern 2
  // ==========================
  // unang tatlong leds naka on

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, HIGH);

  // huling tatlong leds naka off

  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1000);

  // reverse ulit

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  digitalWrite(led_4, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_6, HIGH);

  delay(1000);

  // ==========================
  // pattern 3
  // ==========================
  // iba't ibang combinations ng leds

  digitalWrite(led_1, HIGH);
  digitalWrite(led_6, HIGH);

  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_5, LOW);

  delay(1500);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_5, HIGH);
  digitalWrite(led_3, LOW);
  digitalWrite(led_4, LOW);
  digitalWrite(led_6, LOW);

  delay(1500);

  digitalWrite(led_3, HIGH);
  digitalWrite(led_4, HIGH);

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_5, LOW);
  digitalWrite(led_6, LOW);

  delay(1500);
}
