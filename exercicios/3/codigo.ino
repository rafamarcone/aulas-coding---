void setup()
{
  pinMode(4, OUTPUT);//led vermelho
  pinMode(3, OUTPUT);//led laranja
  pinMode(5, OUTPUT);//led amarelo
  pinMode(6, OUTPUT);//led branco
  pinMode(7, OUTPUT);//led verde
}

void loop()
{
  digitalWrite(3, HIGH);
  delay(2000);
  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(5, HIGH);
  delay(2000);
  digitalWrite(6, HIGH);
  delay(2000);
  digitalWrite(7, HIGH);
  delay(2000);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  delay(1000);
}
