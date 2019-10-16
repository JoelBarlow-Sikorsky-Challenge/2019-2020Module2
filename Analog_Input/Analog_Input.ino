#define LED_PIN 6
#define ANALOG_IN 0

int wait = 10;
int index = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
    if(index > 255) index = -index;
    
    analogWrite(LED_PIN, Math.abs(index)); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
    index++;
    delay((analogRead(ANALOG_IN) / 1023) * 5000);
}
