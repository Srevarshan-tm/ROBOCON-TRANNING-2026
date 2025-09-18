//setting up the input pins
int in_1=13;//right
int in_2=11;//right
int in_3=7;//left
int in_4=9;//left
//setting up the enable pins
int en_a=10;
int en_b=5;
//setting up  the pins for ul
int echo=3;
int trig=2;
//setting up variables
int duration;
float distance;
void setup()
{
  //setting up the pins function
  pinMode(in_1,INPUT);
  pinMode(in_2,INPUT);
  pinMode(in_3,INPUT);
  pinMode(in_4,INPUT);
  pinMode(en_a,INPUT);
  pinMode(en_b,INPUT);
  pinMode(echo,INPUT);
  pinMode(trig,OUTPUT);
  
}

void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=((duration*0.034))/2;
  if(distance>=100 && distance<=150){
    //turning left
    digitalWrite(in_1,HIGH);
    digitalWrite(in_2,LOW);
    digitalWrite(in_3,LOW);
    digitalWrite(in_4,HIGH);
    //turning slow
    analogWrite(en_a,128);
    analogWrite(en_b,128);
    delay(3000);
    digitalWrite(in_3,HIGH);
    digitalWrite(in_4,LOW);
    digitalWrite(en_a,HIGH);
    digitalWrite(en_b,HIGH);
  }
  else if(distance>150 && distance<=400){
    digitalWrite(in_1,HIGH);
    digitalWrite(in_2,LOW);
    digitalWrite(en_a,HIGH);
    digitalWrite(in_3,HIGH);
    digitalWrite(in_4,LOW);
    digitalWrite(en_b,HIGH);
  }
  else if(distance<100){
    //turning right
    digitalWrite(in_1,LOW);
    digitalWrite(in_2,HIGH);
    digitalWrite(in_3,HIGH);
    digitalWrite(in_4,LOW);
    //turning slow
    analogWrite(en_a,128);
    analogWrite(en_b,128);
    delay(3000);
    digitalWrite(in_1,HIGH);
    digitalWrite(in_2,LOW);
    digitalWrite(en_a,HIGH);
    digitalWrite(en_b,HIGH);
  }
  
}