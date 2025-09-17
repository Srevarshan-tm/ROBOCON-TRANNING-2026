// C++ code
//
int led1pin=6;
int led2pin=4;
int led3pin=2;
int led4pin=1;
int potpin=A3;
void setup()
{
  pinMode(led1pin, OUTPUT);
  pinMode(led2pin, OUTPUT);
  pinMode(led3pin, OUTPUT);
  pinMode(led4pin, OUTPUT);
  pinMode(potpin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int pot_val;
  pot_val=analogRead(potpin);
  Serial.println(pot_val);
  if(pot_val>0&&pot_val<=250){
    digitalWrite(led1pin,HIGH);
    digitalWrite(led2pin,LOW);
    digitalWrite(led3pin,LOW);
    digitalWrite(led4pin,LOW);
  }
  else if(pot_val>250&&pot_val<=500){
    digitalWrite(led1pin,HIGH);
    digitalWrite(led2pin,HIGH);
    digitalWrite(led3pin,LOW);
    digitalWrite(led4pin,LOW);
  }
  else if(pot_val>500&&pot_val<=1000){
    digitalWrite(led1pin,HIGH);
    digitalWrite(led2pin,HIGH);
    digitalWrite(led3pin,HIGH);
    digitalWrite(led4pin,LOW);
  }
  else if(pot_val>1000&&pot_val<=1023){
    digitalWrite(led1pin,HIGH);
    digitalWrite(led2pin,HIGH);
    digitalWrite(led3pin,HIGH);
    digitalWrite(led4pin,HIGH);
  }
  else{
    digitalWrite(led1pin,LOW);
    digitalWrite(led2pin,LOW);
    digitalWrite(led3pin,LOW);
    digitalWrite(led4pin,LOW);
  }
}