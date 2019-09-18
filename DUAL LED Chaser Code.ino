void setup() {
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);

}

void loop() {
  int i=5;
  for(;i<=11;i=i+2);
  {
    if(i<11)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i+2,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(i+2,LOW);
    }
    if(i==11)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-6,HIGH);
      delay(1000);
      digitalWrite(i,LOW);
      digitalWrite(i-6,LOW);
    }
  }
  

}
