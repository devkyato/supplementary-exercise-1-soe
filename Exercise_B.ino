// =============================================
// exercise b - traffic light simulation
// ginagaya nito ang basic na traffic light system
// gamit lamang ang tatlong leds
// =============================================

// bawat led ay may specific role
// green = go
// yellow = slow down
// red = stop

int led_1 = 6; // green
int led_2 = 7; // yellow
int led_3 = 8; // red

void setup() {

  // dito siniset ang pins bilang output
  // para makapag control ang arduino ng leds

  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {

  // ======================
  // green light phase
  // ======================
  // ibig sabihin pwede dumaan ang sasakyan

  digitalWrite(led_1, HIGH);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, LOW);

  // 5 seconds naka on ang green
  delay(5000);

  // ======================
  // yellow light phase
  // ======================
  // warning ito na malapit na mag red

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, HIGH);
  digitalWrite(led_3, LOW);

  delay(2000);

  // ======================
  // red light phase
  // ======================
  // ibig sabihin stop ang traffic

  digitalWrite(led_1, LOW);
  digitalWrite(led_2, LOW);
  digitalWrite(led_3, HIGH);

  delay(5000);
}
