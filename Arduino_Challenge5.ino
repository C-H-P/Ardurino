// constant doesn't change
const int analogPin = A0;   // the "input" received from the middle pin of the potentiometer
const int ledCount = 10;    // total number of LEDs

int ledPins[] =
{
  2, 3, 4, 5, 6, 7, 8, 9, 10, 11
};   //Ports where LEDS are connected to

void setup()//initial setup
{
  for (int thisLed = 0; thisLed < ledCount; thisLed++) //Loop 10 times to set all ports in the ledPins to be output
  {
    pinMode(ledPins[thisLed], OUTPUT);
  }
  //Serial.begin(9000);
}

void loop()
{
  int sensorReading = analogRead(analogPin); // the "input" received from the middle pin of the potentiometer (A0)
  int ledLevel = map(sensorReading, 0, 1023, 0, ledCount);  // change the scale for sensorReading from 0 to 1023 to a scale of 0 to ledCount

  // Serial.println(sensorReading);
  //delay(1);

  for (int thisLed = 0; thisLed < ledCount; thisLed++) // loop over the LED array (0 to 9, 10 times)
  {
    if (thisLed < ledLevel) { // if the array element's index is less than ledLevel,
      digitalWrite(ledPins[thisLed], HIGH); // turn the pin for this element on:
    }
    else {
      digitalWrite(ledPins[thisLed], LOW);// turn off all pins higher than the ledLevel:
    }
  }
}
