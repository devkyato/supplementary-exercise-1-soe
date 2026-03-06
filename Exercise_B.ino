int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
 
 
int led_delay1 = 5000;
int led_delay2 = 2000;
int led_delay3 = 5000;
 
void setup() {
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
 
 
  // put your setup code here, to run once:
 
}
 
void loop() {
 
  digitalWrite(led_1, HIGH); //
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW); //
 
  delay(5000);
 
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH); //
  digitalWrite(led_3, LOW);
 
  delay(2000);
 
  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);
 
  delay(5000);
}
