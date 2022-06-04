const int potentiometerPort = A0;
int motor = 3;

void setup()
{
  pinMode(motor, OUTPUT); //Declare motor as output
  Serial.begin(9000);
}

void loop()
{
  int sensorReading = analogRead(potentiometerPort); // the "input" received from the middle pin of the potentiometer (A0)
  int motorSpeed = map(sensorReading, 0, 1023, 0, 255);  // change the scale for sensorReading from 0 to 1023 to a scale of 0 to 255
  Serial.println(motorSpeed);
  analogWrite(motor, motorSpeed); //Motor runs at inputted speed (A0)
}
