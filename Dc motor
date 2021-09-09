int PB = 13;
int motor = 2;
int pushed = 0;

void setup()
{
  pinMode(motor, OUTPUT);
  pinMode(PB, INPUT);
}

void loop()
{
  pushed = digitalRead(PB);
  if (pushed == LOW) {
    digitalWrite(motor, HIGH);
  }
  else {
    digitalWrite(motor, LOW);
  }
}
