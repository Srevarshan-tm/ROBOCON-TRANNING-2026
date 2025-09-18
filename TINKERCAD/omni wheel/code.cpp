int in_4_dc_1=13;
int in_3_dc_1=12;
int in_1_dc_2=11;
int in_2_dc_2=10;
int en_dc_1=9;
int en_dc_2=6;
int in_4_dc_3=4;
int in_3_dc_3=2;
int en_dc_3=5;
void setup(){
  pinMode(in_4dc_1,INPUT);
  pinMode(in_3_dc_1,INPUT);
  pinMode(in_1_dc_2,INPUT);
  pinMode(in_2_dc_2,INPUT);
  pinMode(en_dc_1,INPUT);
  pinMode(en_dc_2,INPUT);
  pinMode(en_dc_3,INPUT);
  pinMode(in_4_dc_3,INPUT);
  pinMode(in_3_dc_3,INPUT);
  Serial.begin(9600);
}
void loop(){
  Serial.println("1,2,3,4:for respective direction");
  delay(500);
  int input;
  if(Serial.available()){
    input=Serial.parseInt();
  }
  if(input==1){
    digitalWrite(in_4_dc_3,HIGH);
    digitalWrite(in_3_dc_3,LOW);
    digitalWrite(in_1_dc_2,HIGH);
    digitalWrite(in_2_dc_2,LOW);
    digitalWrite(en_dc_3,HIGH);
    digitalWrite(en_dc_2,HIGH);
    digitalWrite(en_dc_1,LOW);
    digitalWrite(in_1_dc_1,HIGH);
    digitalWrite(in_2_dc_1,LOW);
  }
  if(input==2){
    digitalWrite(in_4_dc_3,LOW);
    digitalWrite(in_3_dc_3,HIGH);
    digitalWrite(in_1_dc_2,LOW);
    digitalWrite(in_2_dc_2,HIGH);
    digitalWrite(en_dc_3,HIGH);
    digitalWrite(en_dc_2,HIGH);
    digitalWrite(en_dc_1,LOW);
    digitalWrite(in_1_dc_1,HIGH);
    digitalWrite(in_2_dc_1,LOW);
  }
  if(input==3){
    digitalWrite(in_1_dc_1,HIGH);
    digitalWrite(in_2_dc_1,LOW);
    digitalWrite(en_dc_1,HIGH);
    digitalWrite(in_3_dc_2,HIGH);
    digitalWrite(in_4_dc_2,LOW);
    digitalWrite(en_dc_2,HIGH):
    digitalWrite(en_dc_3,LOW);
  }
  if(input==4){
    digitalWrite(in_1_dc_1,LOW);
    digitalWrite(in_2_dc_1,HIGH);
    digitalWrite(en_dc_1,HIGH);
    digitalWrite(in_3_dc_3,LOW);
    digitaLWrite(in_4_dc_3,HIGH);
    digitalWrite(en_dc_3,HIGH);
    digitalWrite(en_dc_2,LOW);
  }
  
    
    
    
    
    
    
  