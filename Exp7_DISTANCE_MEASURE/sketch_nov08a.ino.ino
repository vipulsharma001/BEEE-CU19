long duration;
void setup()
{
pinMode(10,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(11,INPUT);
  Serial.begin(9600);
}
void loop()
{
digitalWrite(10,LOW);
  delayMicroseconds(2);
  digitalWrite(10,HIGH);
  delayMicroseconds(10);
  digitalWrite(10,LOW);
  duration=pulseIn(11,HIGH);
  long dist=(duration*0.034)/2;
  Serial.println(dist);
 analogWrite(3,dist);
 
}
