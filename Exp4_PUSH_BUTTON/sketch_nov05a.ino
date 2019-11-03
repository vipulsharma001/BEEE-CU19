int led=13;
int switchpin=12;
  void setup()
{
  pinMode(led,OUTPUT);
  pinMode(switchpin,INPUT);
  }
  void loop()
  {
    boolean a=digitalRead(switchpin);
    if(a==1)
      digitalWrite(led,HIGH);
    else
      digitalWrite(led,LOW);
  }
