#include <Arduino.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(8, 9, 10, 11, 12, 13);

int pwmPin = 6;       
int brightness = 128; 

void setup() {

  //pinMode(pwmPin, OUTPUT); 
  Serial.begin(9600);
  lcd.begin(16, 2);
  
  // analogWrite(pwmPin, brightness);

  
  lcd.setCursor(0, 0);
  lcd.print("hello,world!");
}

void loop() {
  //打印亮度值到 LCD 的第二行
  lcd.setCursor(0, 1);
  lcd.print("Brightness: ");
  lcd.print(brightness);
  lcd.print("   ");  // 清除旧数据的残留
  
  // 模拟改变亮度
  brightness = (brightness + 10) % 256;  // 逐渐增加亮度，循环从0到255
  analogWrite(pwmPin, brightness);      // 更新PWM值
  
  // 延迟 750 毫秒
  delay(750);        
}
