#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int sensorPin = A0;
int buzzer = 8;
int sensorValue = 0;

void setup() {

  pinMode(buzzer, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0,0);
  lcd.print(" SMART WATER ");
  
  lcd.setCursor(0,1);
  lcd.print(" MONITORING ");

  delay(3000);

  lcd.clear();
}

void loop() {

  sensorValue = analogRead(sensorPin);

  lcd.setCursor(0,0);
  lcd.print("Turbidity:");
  lcd.print(sensorValue);
  lcd.print("   ");

  // THRESHOLD VALUE
  if(sensorValue > 200)
  {
    lcd.setCursor(0,1);
    lcd.print(" WATER DIRTY ");

    digitalWrite(buzzer, HIGH); // buzzer ON
  }

  else
  {
    lcd.setCursor(0,1);
    lcd.print(" WATER CLEAN ");

    digitalWrite(buzzer, LOW); // buzzer OFF
  }

  delay(1000);
}