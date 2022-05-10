void setup() {
  // put your setup code here, to run once:
pinMode(3,INPUT);
pinMode(12,OUTPUT);//LED
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(3)==LOW){
  digitalWrite(12,HIGH);
}
else{
  digitalWrite(12,LOW);
}
}
