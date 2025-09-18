int trig=10;
int echo=9;
int duration;
float distance;
int temp;
float speed;
void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()){
    temp=Serial.parseInt();
    Serial.print("the temp is:");
    Serial.println(temp);
  }
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration=pulseIn(echo,HIGH);
  speed = (331.5 + 0.6 * temp) * 100 / 1000000.0;
  distance=speed*duration/2;
  Serial.println("The Distance is:");
  Serial.println(distance); 
  delay(1000);
  
  
  
    
}