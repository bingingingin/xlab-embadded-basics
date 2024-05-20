#include <Arduino.h>

const int LED1 = 2; // 定义LED1引脚为2
const int LED2 = 3; // 定义LED2引脚为3
const int LED3 = 4; // 定义LED3引脚为4
const int LED4 = 5; // 定义LED4引脚为5
const int LED5 = 6; // 定义LED5引脚为6
const int LED6 = 7; // 定义LED6引脚为7

void setup() {
  Serial.begin(9600); // 初始化串口通讯，波特率设置为9600
  pinMode(LED1, OUTPUT); // 设置LED1引脚为输出模式
  pinMode(LED2, OUTPUT); // 设置LED2引脚为输出模式
  pinMode(LED3, OUTPUT); // 设置LED3引脚为输出模式
  pinMode(LED4, OUTPUT); // 设置LED4引脚为输出模式
  pinMode(LED5, OUTPUT); // 设置LED5引脚为输出模式
  pinMode(LED6, OUTPUT); // 设置LED6引脚为输出模式
}

void loop() {
  if (Serial.available() > 0) { // 检查是否有串口数据可读
    String input = Serial.readStringUntil('\n'); // 读取串口输入的字符串，直到换行符
    input.trim(); // 去掉字符串前后的空白字符

    if (input == "1") {
      digitalWrite(LED1, HIGH); // 点亮LED1
      Serial.println("LED1亮"); // 发送反馈信息
    } else if (input == "-1") {
      digitalWrite(LED1, LOW); // 关闭LED1
      Serial.println("LED1灭"); // 发送反馈信息
    } else if (input == "2") {
      digitalWrite(LED2, HIGH); // 点亮LED2
      Serial.println("LED2亮"); // 发送反馈信息
    } else if (input == "-2") {
      digitalWrite(LED2, LOW); // 关闭LED2
      Serial.println("LED2灭"); // 发送反馈信息
    } else if (input == "3") {
      digitalWrite(LED3, HIGH); // 点亮LED3
      Serial.println("LED3亮"); // 发送反馈信息
    } else if (input == "-3") {
      digitalWrite(LED3, LOW); // 关闭LED3
      Serial.println("LED3灭"); // 发送反馈信息
    } else if (input == "4") {
      digitalWrite(LED4, HIGH); // 点亮LED4
      Serial.println("LED4亮"); // 发送反馈信息
    } else if (input == "-4") {
      digitalWrite(LED4, LOW); // 关闭LED4
      Serial.println("LED4灭"); // 发送反馈信息
    } else if (input == "5") {
      digitalWrite(LED5, HIGH); // 点亮LED5
      Serial.println("LED5亮"); // 发送反馈信息
    } else if (input == "-5") {
      digitalWrite(LED5, LOW); // 关闭LED5
      Serial.println("LED5灭"); // 发送反馈信息
    } else if (input == "6") {
      digitalWrite(LED6, HIGH); // 点亮LED6
      Serial.println("LED6亮"); // 发送反馈信息
    } else if (input == "-6") {
      digitalWrite(LED6, LOW); // 关闭LED6
      Serial.println("LED6灭"); // 发送反馈信息
    } else {
      Serial.println("未知指令"); // 发送反馈信息
    }
  }
}
