#include <Servo.h>
Servo s1;
Servo s2;
int input;
// C++ code
//
void setup()
{
  s1.attach(6);
  s2.attach(5);
  Serial.begin(9600);
}

void loop(){
  Serial.println("enter the rotation angledefault =0:");
  if(Serial.available()){
    input=Serial.parseInt();
  }
  Serial.println(input);
  for(int i=0;i<=input;i++){
    Serial.println(input);
    s1.write(i);
    s2.write(180-i);
    delay(15);
  }
  
  delay(1500);
}

    