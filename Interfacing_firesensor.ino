void setup()
{
  pinMode(8, INPUT); //initialize Flame sensor output pin connected pin as input.
  pinMode(LED_BUILTIN, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);// initialize serial communication @ 9600 baud:
}

void loop()
{
  if (digitalRead(2) == 1 )
  {
    digitalWrite(LED_BUILTIN, HIGH); // Led ON
    Serial.println("** Warning!!!!   Fire detected!!! **");
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW); // Led OFF
    Serial.println("No Fire detected");
  }
  delay(100);
}