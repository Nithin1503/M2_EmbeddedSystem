const int buttonPin = 12;
const int transistorPin = 7;

int buttonState = 0;

void setup() 
{
 
 pinMode(buttonPin, INPUT_PULLUP);
 pinMode(transistorPin, OUTPUT);
 
}

void loop() 
{
 
 buttonState = digitalRead(buttonPin);
 
 if (buttonState == LOW) 
  {
  
   digitalWrite (transistorPin, HIGH); 
    
  }
 
 else 
  {
   
   digitalWrite (transistorPin, LOW);  

  }
  
}
