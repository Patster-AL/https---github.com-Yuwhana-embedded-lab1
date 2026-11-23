#include <Arduino.h> 

#define LED_OUTPUT 23
#define BUTTON_INPUT 22

bool ledState = true;
    int lastButtonState = LOW;


void setup() { 

    pinMode(LED_OUTPUT, OUTPUT);
    pinMode(BUTTON_INPUT, INPUT_PULLDOWN);
    digitalWrite(LED_OUTPUT, HIGH);
} 
void loop() { 
        int buttonState = digitalRead(BUTTON_INPUT);

    if (buttonState == HIGH && lastButtonState == LOW) {
        ledState = !ledState;
        digitalWrite(LED_OUTPUT, ledState);
        delay(200);
    }
    lastButtonState = buttonState;

} 