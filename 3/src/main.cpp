#include <Arduino.h>

String password = "AABBCCDD";
String input = ""; 
int index = 0; 

void setup() {
  Serial.begin(9600); // 初始化串口通讯，波特率设置为9600
}

void loop() {
  while (Serial.available() > 0) { 
    char incomingChar = Serial.read();
    if (incomingChar == '\n') { 
      if (input == password.substring(0, index)) { 
        index++; 
        if (index >= password.length()) { // 如果已经输入完整密码
          Serial.println("密码正确"); 
          input = ""; 
          index = 0; 
        }
      } else { 
        Serial.println("密码错误"); 
        input = ""; 
        index = 0; 
      }
    } else { 
      input += incomingChar; 
    }
  }
}