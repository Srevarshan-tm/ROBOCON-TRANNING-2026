int ledpin=13;
int rand_val;
bool done=true;

void setup()
{
  pinMode(ledpin,OUTPUT);
  randomSeed(analogRead(A0));
  rand_val = random(0, 1000);
}

void loop()
{
  if(done==false){
    digitalWrite(ledpin,LOW);
    delay(15000);
  }
  if(rand_val==0){
    digitalWrite(ledpin,LOW);
    delay(1500);
  }
  String binary_val="";
  int temp=rand_val;
  while(temp>0){
    binary_val+=char((temp%2)+'0');
    temp=temp/2;
  }
  for(int i=binary_val.length()-1;i>=0;i--){
    if(binary_val[i]=='0'){
      digitalWrite(ledpin,LOW);
    }
    else{
      digitalWrite(ledpin,HIGH);
    }
    delay(1000);
  }
  done=false;   
}