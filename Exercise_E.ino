//exercise e
int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
 
void setup() {
  pinMode (led_1,OUTPUT);
  pinMode (led_2,OUTPUT);
  pinMode (led_3,OUTPUT);
  pinMode (led_4,OUTPUT);
}
 
void loop() {
  digitalWrite (led_1, LOW); //1
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, LOW); //2
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, LOW); //3
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, LOW); //4
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, LOW); //5
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, LOW); //6
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, LOW); //7
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, HIGH); //8
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, HIGH); //9
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, HIGH); //10
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, HIGH); //11
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, HIGH); //12
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, HIGH); //13
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);
  digitalWrite (led_1, HIGH); //14
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);
  digitalWrite (led_1, HIGH); //15
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);
}
