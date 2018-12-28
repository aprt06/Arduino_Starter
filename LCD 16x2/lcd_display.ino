#include <LiquidCrystal_I2C.h>

//LiquidCrystal_I2C lcd(0x27,20,4);  // for more larger lcd
LiquidCrystal_I2C lcd(0x3f,16,2);

void setup()
{
  lcd.init();                      
  lcd.backlight();
  lcd.setCursor(1,1);
  lcd.print("Hello, world!");
  lcd.setCursor(2,1);
  lcd.print("Arduino!");

}

void loop()
{
}
