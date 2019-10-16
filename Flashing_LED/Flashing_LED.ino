#define LED_PIN 6

int wait = 1000;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(wait);
  digitalWrite(LED_PIN, HIGH);
  delay(wait);
}
