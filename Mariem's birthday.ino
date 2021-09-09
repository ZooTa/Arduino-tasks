#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

byte heart[8] = 

              {

                0b00000,

                0b01010,

                0b11111,

                0b11111,

                0b11111,

                0b01110,

                0b00100,

                0b00000

              };


byte smile[8] = 

              {

                0b00000,

                0b00000,

                0b01010,

                0b00000,

                0b10001,

                0b01110,

                0b00000,

                0b00000

              };

int led = 6;


void setup()

{
  lcd.createChar(1, heart);
  lcd.createChar(2, smile);
  pinMode(led, OUTPUT);
  lcd.begin(16, 2);
  lcd.print("  Happy 19th birthday Mariem ");
  lcd.write(1);
  lcd.print("  ");
  lcd.setCursor(0, 1);
  
  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);
  
  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);
  
  lcd.write(1);lcd.write(2);lcd.write(1);lcd.write(2);

}


void loop()

{
    delay(2000);
  
  for (int i = 0; i < 16; i++) {

    lcd.scrollDisplayLeft();

    delay(250);
  }
  
  delay(2000);
  
  for (int i = 0; i < 16; i++) {

    lcd.scrollDisplayRight();

    delay(250);
  }



}


 
