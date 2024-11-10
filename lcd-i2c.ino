#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {lcd.init();
lcd.backlight();
lcd.setCursor(0, 0);
lcd.clear();
lcd.print("goodbye world");
}

void loop() {
for(int i=15; i>=0;i)
{lcd.setCursor(i, 0);
  lcd.print("hello world");
  Serial.println("********");
  delay(100);
}

}
