void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(6, INPUT);
  pinMode(11, OUTPUT);
 
}

void loop()
{
  int b1=digitalRead(2);
  int b2=digitalRead(3);
  int b3=digitalRead(4);
  int b4=digitalRead(6);
 
  if(b1==1){
    tone(11,233,100);
  }
  delay(100);
  if(b2==1){
    tone(11,270,100);
  }
  delay(100);
  if(b3==1){
    tone(11,360,100);
  }
  delay(100);
  if(b4==1){
    tone(11,470,100);
  }
 delay(100);
}
