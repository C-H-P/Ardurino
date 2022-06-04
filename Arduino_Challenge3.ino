    
    // constant = doesn't change. Used to set pin numbers
    
    const int buttonPin = 2;     // digital port for pushbutton
    const int ledPin =  13;      // digital port for ledpin on the board
    
    // variables change
    int buttonState = 0;         // variable for pushbutton status
    
    void setup()
    {
      pinMode(ledPin, OUTPUT);   // initialize the LED pin as an output
      pinMode(buttonPin, INPUT);  // initialize the pushbutton pin as an input
    }
    
    void loop()
    {
      
      buttonState = digitalRead(buttonPin); // Interpret the state of the pushbutton value
    
      
      if (buttonState == HIGH) // If button is HIGH (5v, pushed)
      {
        digitalWrite(ledPin, HIGH); // turn LED on
      } else {  // If button is LOW (0v, Not pushed)
        digitalWrite(ledPin, LOW);  // turn LED off:
      }
    }
