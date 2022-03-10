/**
 * @file Relay.ino
 * @author Nithin Palagani()
 * @brief Code for Ardunio Relay control
 * @version 0.1
 * @date 2022-03-08
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/**
 * @brief defining 12th pin as buttonpin
 * 
 */
const int buttonPin = 12;

/**
 * @brief defining 7th pin as transistorpin
 * 
 */
const int transistorPin = 7;

/**
 * @brief declaring button state as 0
 * 
 */

int buttonState = 0;

void setup() 
{
 
 pinMode(buttonPin, INPUT_PULLUP);
 pinMode(transistorPin, OUTPUT);
 
}

void loop() 
{
 
 buttonState = digitalRead(buttonPin);

 /**
 * @brief if buttonState is low it will set transistorpin as high
 * 
 */
 
 if (buttonState == LOW) 
  {
  
   digitalWrite (transistorPin, HIGH); 
    
  }

  /**
 * @brief if buttonState is high it will set transistorpin as low
 * 
 */
 
 else 
  {
   
   digitalWrite (transistorPin, LOW);  

  }
  
}
