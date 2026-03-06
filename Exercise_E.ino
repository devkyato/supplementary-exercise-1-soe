// exercise e
// binary counter gamit ang 4 leds
// bawat led ay kumakatawan sa isang binary bit

// dito dine-define kung anong pin naka connect ang bawat led
int led_1 = 6;
int led_2 = 7;
int led_3 = 8;
int led_4 = 9;
 
void setup() {

  // sine-set ang bawat pin bilang output
  // kailangan ito para makapag send ang arduino ng signal sa leds

  pinMode (led_1,OUTPUT);
  pinMode (led_2,OUTPUT);
  pinMode (led_3,OUTPUT);
  pinMode (led_4,OUTPUT);
}
 
void loop() {

  // binary 0001
  // led4 lang ang naka on
  digitalWrite (led_1, LOW); //1
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 0010
  // led3 naman ang naka on
  digitalWrite (led_1, LOW); //2
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 0011
  // led3 at led4 naka on
  digitalWrite (led_1, LOW); //3
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 0100
  // led2 lang ang naka on
  digitalWrite (led_1, LOW); //4
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 0101
  // led2 at led4 naka on
  digitalWrite (led_1, LOW); //5
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 0110
  // led2 at led3 naka on
  digitalWrite (led_1, LOW); //6
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 0111
  // led2, led3, led4 naka on
  digitalWrite (led_1, LOW); //7
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 1000
  // led1 lang ang naka on
  digitalWrite (led_1, HIGH); //8
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 1001
  // led1 at led4 naka on
  digitalWrite (led_1, HIGH); //9
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 1010
  // led1 at led3 naka on
  digitalWrite (led_1, HIGH); //10
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 1011
  // led1, led3, led4 naka on
  digitalWrite (led_1, HIGH); //11
  digitalWrite (led_2, LOW);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 1100
  // led1 at led2 naka on
  digitalWrite (led_1, HIGH); //12
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 1101
  // led1, led2, led4 naka on
  digitalWrite (led_1, HIGH); //13
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, LOW);
  digitalWrite (led_4, HIGH);
  delay(1000);

  // binary 1110
  // led1, led2, led3 naka on
  digitalWrite (led_1, HIGH); //14
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, LOW);
  delay(1000);

  // binary 1111
  // lahat ng leds naka on
  digitalWrite (led_1, HIGH); //15
  digitalWrite (led_2, HIGH);
  digitalWrite (led_3, HIGH);
  digitalWrite (led_4, HIGH);
  delay(1000);
}
