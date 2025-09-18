int en_a=10;
int in3=12;
int in4=13;
int pot_pin=A1;

void setup(){
  pinMode(en_a,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(pot_pin,INPUT);
  
}
void loop()
{
  int pot_val=analogRead(pot_pin);
  pot_val=map(pot_val,0,1023,0,255);
  digitalWrite(in3,HIGH);
  digitalWrite(in4,LOW);
  analogWrite(en_a,pot_val);
   
  delay(2500);
  
  
}