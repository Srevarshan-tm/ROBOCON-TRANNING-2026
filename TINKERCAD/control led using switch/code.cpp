// C++ code
//
int SWITCHSTATE=7;
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(SWITCHSTATE,INPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int pot=analogRead(A5);
  Serial.println(pot);
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