int step=7;
int dir=6;
int pot_pin=A0;
int perv_potval;
void check(x){
  if(x<50 && x>0){
  digitalWrite(step, HIGH);
  digitalWrite(dir, HIGH);
  delay(1000);
  return false;
  }
  else if(x>50){
    return true;
  }
  else if(x=0){
    digitalWrite(step, HIGH);
    digitalWrite(dir, HIGH);
    int local_dalay=map(perv_potval,0,1023,1,30);
    delay(local_delay);
  }
}

void setup() {
  pinMode(step, INPUT);
  pinMode(dir, INPUT);
  pinMode(pot_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int pot_val=analogRead(pot_pin);
  for(int i=0;i<180;i++){
    int diff =abs(pot_val-prev_potval);
    if (check(diff)){
      int cur_potval=analogRead(pot_pin);
      cur_potval=map(0,1023,1,30);
      digitalWrite(step, HIGH);
      digitalWrite(dir, HIGH);
      delay(cur_potval);
    }
  perv_potval=pot_val;
  }



}
