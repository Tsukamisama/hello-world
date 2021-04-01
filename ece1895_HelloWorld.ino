void setup() 
{
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
}

void loop() 
{
  digitalWrite(13, 1);    // sets the digital pin 13 on
  delay(50);             // waits for a second
  digitalWrite(13, 0);    // sets the digital pin 13 off
  delay(50);             // waits for a second
}
