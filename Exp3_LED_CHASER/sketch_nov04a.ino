int pin;
void setup()
{
  for(pin=5;pin<9;pin++)
  {
    pinMode(pin,OUTPUT);
  }
}
void loop()
{
  for(pin=5;pin<=8;pin++)
  {
   
    digitalWrite(pin,HIGH);
    delay(1000);
    digitalWrite(pin,LOW);
    
  }

  for(pin=8;pin>=5;pin--)
  {
    
    digitalWrite(pin,HIGH);
    delay(1000);
    digitalWrite(pin,LOW);
    
  }
}
