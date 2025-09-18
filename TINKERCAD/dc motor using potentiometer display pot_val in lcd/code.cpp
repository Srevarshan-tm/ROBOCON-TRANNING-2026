
#include <LiquidCrystal_I2C.h>
int in_3=2;
int in_4=4;
int en_a=5;
int pot_pin=A2;
LiquidCrystal_I2C lcd(0x20, 16, 2);//had address error perviously  
void setup() {
  lcd.init();
  lcd.backlight();
  lcd.display();
}

void loop() {
  lcd.setCursor(0,0);
  digitalWrite(in_3,HIGH);
  digitalWrite(in_4,LOW);
  int pot_val=analogRead(pot_pin);
  lcd.print(pot_val);
  map(pot_val,0,1023,0,255);
  analogWrite(en_a,pot_val);
  
  delay(1000);
  
}
