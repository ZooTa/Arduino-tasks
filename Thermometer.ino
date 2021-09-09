int ledB = 13;
int ledR = 12;
int PB = 8;
int BPD = 0;
int TMP = A0;
int TMPV = 0;
int temp = 0;


void setup()
{
  pinMode(ledB, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(PB, INPUT);
  pinMode(TMP, INPUT);
  Serial.begin(9600);
}

void loop()
{
  BPD = digitalRead(PB);
  TMPV =analogRead(TMP);
  temp = map(TMPV,31,368,0,50);
  Serial.println(BPD);
  if (BPD == HIGH){
    if(temp < 25){
      digitalWrite(ledB, HIGH);
      delay(100);
      digitalWrite(ledB, LOW);
    }
     else{
       digitalWrite(ledR, HIGH);
       delay(100);
       digitalWrite(ledR, LOW);
      }
  }
}
