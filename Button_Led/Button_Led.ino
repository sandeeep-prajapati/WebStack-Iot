
#define BUTTON 5
#define LED 0
int button_state;

void setup() {
  pinMode(BUTTON, INPUT_PULLUP);
  pinMode(LED, OUTPUT);
}

void loop() {
  button_state = digitalRead(BUTTON);
  if (button_state == LOW) { // Button is pressed
    digitalWrite(LED, LOW); // Turn off LED
  } else { // Button is not pressed
    digitalWrite(LED, HIGH); // Turn on LED
  }
}
