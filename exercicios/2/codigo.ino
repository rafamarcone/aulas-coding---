void setup()
{
  pinMode(4, OUTPUT);//led verde
  pinMode(3, OUTPUT);//led vermelho
}

void loop()
{
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  delay(1000); 
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  delay(1000);
}
