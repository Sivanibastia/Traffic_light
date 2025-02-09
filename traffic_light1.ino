const int redLed = 2;
const int yellowLed = 3;
const int greenLed = 4;
const int buttonPin = 5;
void setup() {
    pinMode(redLed, OUTPUT);
    pinMode(yellowLed, OUTPUT);
    pinMode(greenLed, OUTPUT);
    pinMode(buttonPin, INPUT); }
void loop() {
    if (digitalRead(buttonPin) == HIGH) {
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, HIGH);
        delay(5000);  }
  else if (digitalRead(buttonPin) == LOW){
        digitalWrite(greenLed, HIGH);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, LOW);
        delay(2000);
      
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, HIGH);
        digitalWrite(redLed, LOW);
        delay(2000);
    
        digitalWrite(greenLed, LOW);
        digitalWrite(yellowLed, LOW);
        digitalWrite(redLed, HIGH);
        delay(2000);    
    } }



