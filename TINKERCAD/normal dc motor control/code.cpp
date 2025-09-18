// C++ code
//
int dc_pin=3;

void setup()
{
  pinMode(dc_pin,OUTPUT);
 
  
}

void loop()
{
  digitalWrite(dc_pin,HIGH);
  delay(3500);
}