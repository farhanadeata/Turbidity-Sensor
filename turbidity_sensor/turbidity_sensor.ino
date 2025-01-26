#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3f, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);

int sensorPin = A0;
void setup()
{
  lcd.begin(16,2);
  pinMode(3,OUTPUT);
  pinMode(5, OUTPUT);

}

void loop() {
  int sensorValue = analogRead(sensorPin);
  int turbidity = map(sensorValue, 0,640, 100, 0);
  delay(100);
  lcd.setCursor(0, 0);
  lcd.print("turbidity:");
  lcd.print("   ");
  lcd.setCursor(10, 0);
  lcd.print(turbidity);
  delay(100);
  if (turbidity < 50) {
    lcd.print(" bersih");
  }
  
}

//full code please Contact me
//fadeatalarik@gmail.com
//farhanadeata (IG)

