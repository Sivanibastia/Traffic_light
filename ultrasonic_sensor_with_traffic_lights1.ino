const int trigPin = 9;
const int echoPin = 10;
const int greenLedPin = 13;
const int orangeLedPin = 12;
const int redLedPin = 11; 
const int buttonPin = 8;
const int greenThreshold = 150;
const int orangeThreshold = 250;
void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(greenLedPin, OUTPUT);
    pinMode(orangeLedPin, OUTPUT);
    pinMode(redLedPin, OUTPUT);
    pinMode(buttonPin, INPUT); 
    digitalWrite(greenLedPin, LOW);
    digitalWrite(orangeLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    Serial.begin(9600);}
void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);

    long duration = pulseIn(echoPin, HIGH);
    int distance = duration / 58;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");
  
    if (digitalRead(buttonPin) == HIGH) {  
        digitalWrite(greenLedPin, LOW);
        digitalWrite(orangeLedPin, LOW);
        digitalWrite(redLedPin, HIGH);
        delay(2000); } 
    else {  
        if (distance < greenThreshold) {
            digitalWrite(greenLedPin, HIGH);
            digitalWrite(orangeLedPin, LOW);
            digitalWrite(redLedPin, LOW);
        } 
        else if (distance >= greenThreshold && distance <= orangeThreshold) {
            digitalWrite(greenLedPin, LOW);
            digitalWrite(orangeLedPin, HIGH);
            digitalWrite(redLedPin, LOW);
        } 
        else {
            digitalWrite(greenLedPin, LOW);
            digitalWrite(orangeLedPin, LOW);
            digitalWrite(redLedPin, HIGH);}}
    delay(100);
}
