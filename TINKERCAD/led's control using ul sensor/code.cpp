int trig = 3;
int echo = 4;
float distance;
int duration;
int led1_pin=13;
int led2_pin=10;
int led3_pin=8;

void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
  pinMode(led1_pin,OUTPUT);
  pinMode(led2_pin,OUTPUT);
  pinMode(led3_pin,OUTPUT);
}

void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);
  distance = duration * 0.0343 / 2;

  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println(" cm");
  if(distance>250){
    digitalWrite(led1_pin,LOW);
    digitalWrite(led2_pin,LOW);
    digitalWrite(led3_pin,LOW);
  }
  else if(distance>175 && distance<=250){
    digitalWrite(led1_pin,HIGH);
    digitalWrite(led2_pin,LOW);
    digitalWrite(led3_pin,LOW);
  }
  else if(distance>100 && distance<=175){
    digitalWrite(led1_pin,HIGH);
    digitalWrite(led2_pin,HIGH);
    digitalWrite(led3_pin,LOW);
  }
  else if(distance<=100){
    digitalWrite(led1_pin,HIGH);
    digitalWrite(led2_pin,HIGH);
    digitalWrite(led3_pin,HIGH);    
  }
  delay(500);
}