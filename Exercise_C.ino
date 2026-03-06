// =============================================
// exercise c - knight rider led effect
// parang scanning light effect
// gumagalaw ang ilaw mula kaliwa papunta kanan
// tapos babalik ulit pabalik
// =============================================

int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;

void setup() {

  // lahat ng leds ay gagawing output

  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
  pinMode(led_4,OUTPUT);
}

void loop() {

  // ======================
  // forward direction
  // ======================

  digitalWrite(led_1, HIGH);
  delay(500);
  digitalWrite(led_1, LOW);

  digitalWrite(led_2, HIGH);
  delay(500);
  digitalWrite(led_2, LOW);

  digitalWrite(led_3, HIGH);
  delay(500);
  digitalWrite(led_3, LOW);

  digitalWrite(led_4, HIGH);
  delay(500);
  digitalWrite(led_4, LOW);

  // ======================
  // reverse direction
  // ======================

  digitalWrite(led_3, HIGH);
  delay(500);
  digitalWrite(led_3, LOW);

  digitalWrite(led_2, HIGH);
  delay(500);
  digitalWrite(led_2, LOW);

  digitalWrite(led_1, HIGH);
  delay(500);
  digitalWrite(led_1, LOW);
}
