#include<Servo.h>
int trig=9;
int echo=10;
int pot_pin=A0;
int duration;
float distance;
Servo s1;
Servo s2;
void setup()
{ 
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(pot_pin,INPUT);
  s1.attach(3);
  s2.attach(5);
}

void loop()
{
  int pot_val=analogRead(pot_pin);
  map(pot_val,0,1023,5,30);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  distance=(duration*0.034)/2;
  map(distance,2,400,5,30);
  for(int i=0;i<180;i++){
    s1.write(i);
    delay(distance);
  }
  for(int j=0;j<180;j++){
    s2.write(j);
    delay(pot_val);
  }
}