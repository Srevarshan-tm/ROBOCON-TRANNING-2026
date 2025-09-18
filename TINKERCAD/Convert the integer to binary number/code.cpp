int led1pin=13;
int led2pin=12;
int led3pin=11;
int led4pin=10;
int led5pin=9;
int led6pin=8;
int led7pin=7;
int led8pin=6;
int led9pin=5;
int led10pin=4;
int input=0;//some value
bool val=true;
int ledPins[] = { led1pin=13, led2pin=12, led3pin=11, led4pin=10,led5pin=9, led6pin=8, led7pin=7, led8pin=6, led9pin=5, led10pin=4};

void setup()
{
  pinMode(led1pin,OUTPUT);
  pinMode(led2pin,OUTPUT);
  pinMode(led3pin,OUTPUT);
  pinMode(led4pin,OUTPUT);
  pinMode(led5pin,OUTPUT);
  pinMode(led6pin,OUTPUT);
  pinMode(led7pin,OUTPUT);
  pinMode(led8pin,OUTPUT);
  pinMode(led9pin,OUTPUT);
  pinMode(led10pin,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(val!=true){
    digitalWrite(led1pin,HIGH);
  delay(500);
  digitalWrite(led2pin,HIGH);
  delay(500);
  digitalWrite(led3pin,HIGH);
  delay(500);
  digitalWrite(led4pin,HIGH);
  delay(500);
  digitalWrite(led5pin,HIGH);
  delay(500);
  digitalWrite(led6pin,HIGH);
  delay(500);
  digitalWrite(led7pin,HIGH);
  delay(500);
  digitalWrite(led8pin,HIGH);
  delay(500);
  digitalWrite(led9pin,HIGH);
  delay(500);
  digitalWrite(led10pin,HIGH);
  delay(500);
}
  Serial.println("Enter the value");
  if(Serial.available()){
    
    input=Serial.parseInt();
  }
  
  Serial.println(input); 
  if(input==0){
    digitalWrite(led1pin,LOW);
    delay(500);
    digitalWrite(led2pin,LOW);
    delay(500);
    digitalWrite(led3pin,LOW);
    delay(500);
    digitalWrite(led4pin,LOW);
    delay(500);
    digitalWrite(led5pin,LOW);
    delay(500);
    digitalWrite(led6pin,LOW);
    delay(500);
    digitalWrite(led7pin,LOW);
    delay(500);
    digitalWrite(led8pin,LOW);
    delay(500);
    digitalWrite(led9pin,LOW);
    delay(500);
    digitalWrite(led10pin,LOW);
    delay(500);
    
  }
  String bin_val="";
  int temp=input;
  while(temp>0){
    bin_val+=char((temp%2)+'0');
    temp=temp/2;
  }
  while (bin_val.length() < 10) {
  bin_val += '0';
  }
  for(int i=0;i<=10;i++){
    if(bin_val[i]=='1'){
      digitalWrite(ledPins[i],HIGH);
    }
    else{
      digitalWrite(ledPins[i],LOW);
    } 
  }
  delay(3500);
  val=false;
  
  
   
}