void setup() {
  // put your setup code here, to run once:
  
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //led 13 verde
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  
  //led 12 vermelho
   digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  
  //led 11 amarelo
   digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);
}
