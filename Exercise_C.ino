// apat na leds na gagamitin para sa knight rider effect
// parang scanning light na gumagalaw mula kaliwa papunta kanan tapos babalik

int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;

void setup() {

  // dito sine-set ang bawat led pin bilang output
  // kailangan ito para makapag control ang arduino kung on o off ang leds

  pinMode (led_1,OUTPUT);
  pinMode (led_2,OUTPUT);
  pinMode (led_3,OUTPUT);
  pinMode (led_4,OUTPUT);
}

void loop() {

  // unang led naka on, yung iba naka off
  // ito ang simula ng movement ng light

  digitalWrite (led_1, HIGH);
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);

  // delay para makita ang movement
  delay(1000);

  // lilipat ang ilaw sa led 2

  digitalWrite (led_1, LOW);
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);

  delay(1000);

  // lilipat naman sa led 3

  digitalWrite (led_3, HIGH);
  digitalWrite (led_1, LOW);
  digitalWrite (led_2, LOW);
  digitalWrite (led_4, LOW);

  delay(1000);

  // huling led sa kanan

  digitalWrite (led_4, HIGH);
  digitalWrite (led_1, LOW);
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);

  delay(1000);

  // babalik pabalik ang ilaw

  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);

  delay(1000);

  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);

  delay(1000);
}
