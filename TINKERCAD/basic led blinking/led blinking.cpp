int SWITCHSTATE=7;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(SWITCHSTATE,INPUT);
}

void loop()
{
  int switch1=digitalRead(SWITCHSTATE);
  if(switch1==HIGH){
  digitalWrite(13, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(13, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  }
  else{
    digitalWrite(13,LOW);
  }
}