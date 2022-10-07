const int buttonPin = 13;  // the number of the pushbutton pin
const int ledPin    = 12;  // the number of the led pin
 
void setup()
{
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);  
  // initialize the LED pin as an output:
  pinMode(LED0, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); 
}

void loop()
{
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
   digitalWrite(LED0, HIGH);
   digitalWrite(ledPin, HIGH);
  } else {
   digitalWrite(LED0, LOW);
   digitalWrite(ledPin, LOW); 
  }
}
