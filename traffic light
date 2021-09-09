int ledR1 = 13;
int ledR2 = 11;
int ledR3 = 9;
int ledG1 = 12;
int ledG2 = 10;
int ledG3 = 8;

void setup()
{
  pinMode(ledR1, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledR3, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledG2, OUTPUT);
  pinMode(ledG3, OUTPUT);
}

void loop()
{
  for(int i = 0;i<2;i++){
  digitalWrite(ledR1, HIGH);
  digitalWrite(ledR2, HIGH);
  digitalWrite(ledR3, HIGH);
  delay(500);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, LOW);
  digitalWrite(ledR3, LOW);
  digitalWrite(ledG1, HIGH);
  digitalWrite(ledG2, HIGH);
  digitalWrite(ledG3, HIGH);
  delay(500);
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, LOW);
  }
  
  delay(100);
  
  for(int i = 0;i<3;i++){
  digitalWrite(ledR1, HIGH);
  delay(100);
  digitalWrite(ledG1, HIGH);
  delay(100);
  digitalWrite(ledR1, LOW);
  digitalWrite(ledR2, HIGH);
  delay(100);
  digitalWrite(ledG1, LOW);
  digitalWrite(ledG2, HIGH);
  delay(100);
  digitalWrite(ledR3, HIGH);
  digitalWrite(ledR2, LOW);
  delay(100);
  digitalWrite(ledG2, LOW);
  digitalWrite(ledG3, HIGH);
  delay(100);
  digitalWrite(ledR3, LOW);
  delay(100);
  digitalWrite(ledG3, LOW);
  delay(100);
  }
}
