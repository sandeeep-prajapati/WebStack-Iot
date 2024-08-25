#define LED 15  
// S1 pin will be selected
int brightness = 0;
int brightAmount = 1;

void setup() {
  Serial.begin(115200);
  pinMode(LED, OUTPUT);
}

void loop() {
  analogWrite(LED, brightness);
  brightness = brightness + brightAmount;
  if (brightness <= 0 || brightness >= 255) {
    brightAmount = -brightAmount; // Change the sign of brightAmount
  }
  Serial.println(brightness);
  delay(10);
}
