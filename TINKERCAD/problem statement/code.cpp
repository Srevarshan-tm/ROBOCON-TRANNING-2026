#include<Servo.h>
Servo s;
int switch_con=13;
int servo_pin=3;
int trig1=9;
int echo1=10;
int duration1;
int duration2;
float dis1;
float dis2;
int trig2=6;
int echo2=5;
void setup()
{
  s.attach(servo_pin);
  pinMode(trig1,OUTPUT);
  pinMode(echo1,INPUT);
  pinMode(trig2,OUTPUT);
  pinMode(echo2,INPUT);
  
}

void loop()
{
  //u1
  digitalWrite(trig1,LOW);
  delayMicroseconds(2);
  digitalWrite(trig1,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig1,LOW);
  duration1=pulseIn(echo1,HIGH);
  dis1=(duration1*0.034)/2;
  //u2
  digitalWrite(trig2,LOW);
  delayMicroseconds(2);
  digitalWrite(trig2,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig2,LOW);
  duration2=pulseIn(echo2,HIGH);
  dis2=(duration2*0.034)/2;
  if(dis1<200){
    s.write(0);
  }
  if(dis1>200){
    s.write(180);
  }
  int switch_val=digitalRead(switch_con);
  if(switch_val==0){
    s.write(0);//intial is 0
  }
  if(switch_val==1){
    s.write(180);
  }
  //u2 speed control
  map(dis2,2,400,5,30);
  for(int i=0;i<180;i++){
    s.write(i);
    delay(dis2);
  }
  
}