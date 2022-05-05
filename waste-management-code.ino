#include <Servo.h>
Servo servo1;
Servo servo2;
#define trigPin1 5                                   
#define echoPin1 6                                   
#define echoPin2 9
#define trigPin2 8
#define led2_1 4       // 1 Green
#define led2_2 3      // 2 Yellow
#define led2_3 2      // 3 Red
#define led1_1 A5     // 1 Green
#define led1_2 A4     // 2 Yellow
#define led1_3 A3       // 3 Red
int metalPin = 13;
#define infraPin 7
#define buzzerPin 8
#define touchPin 12
#define moistPin A0

long duration, distance, ultraValue1, ultraValue2; 
int bin1state, bin2state;

int checkBin1();
int checkBin2();
int valueIR, valueTouch, valueMoisture;

void setup()
{
  pinMode(trigPin1, OUTPUT);                       
  pinMode(echoPin1, INPUT);                       
  pinMode(trigPin2, OUTPUT);    
  pinMode(echoPin2, INPUT);
  pinMode(led1_1, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(led1_2, OUTPUT);
  pinMode(led1_3, OUTPUT);
  pinMode(led2_1, OUTPUT);
  pinMode(led2_2, OUTPUT);
  pinMode(led2_3, OUTPUT);
  pinMode(metalPin, INPUT);
  pinMode(touchPin, INPUT);
  pinMode(moistPin, INPUT);
  pinMode(infraPin, INPUT);
  servo1.attach(9);
  servo1.write(0); 
  servo2.write(0); 
}

void loop() 
{ 
      digitalWrite(led1_1,HIGH);
      digitalWrite(led1_2,LOW);
      digitalWrite(led1_3,LOW);
      digitalWrite(led2_1,HIGH);
      digitalWrite(led2_2,LOW);
      digitalWrite(led2_3,LOW);
    delay(33000);
      for(int angle = 0; angle < 90; angle=angle+10) {
              servo1.write(angle);
              delay(50); 
           } for(int angle = 90; angle > 0; angle=angle-10) {
              servo1.write(angle);
              delay(50);
           } 
    delay(15000);
      for(int angle = 0; angle < 90; angle=angle+10) {
              servo1.write(angle);
              delay(50); 
           } for(int angle = 90; angle > 0; angle=angle-10) {
              servo1.write(angle);
              delay(50);
           }
    delay(14000);
      for(int angle = 0; angle < 90; angle=angle+10) {
              servo1.write(angle);
              delay(50); 
           } for(int angle = 90; angle > 0; angle=angle-10) {
              servo1.write(angle);
              delay(50);
           }
       digitalWrite(buzzerPin, HIGH);
       delay(1000);
       digitalWrite(buzzerPin, LOW);
    delay(28000);
      digitalWrite(led1_1,HIGH);
      digitalWrite(led1_2,LOW);
      digitalWrite(led1_3,LOW);
      digitalWrite(led2_1,HIGH);
      digitalWrite(led2_2,LOW);
      digitalWrite(led2_3,LOW);
    delay(10000);
      digitalWrite(led1_1,LOW);
      digitalWrite(led1_2,HIGH);
      digitalWrite(led1_3,LOW);
      digitalWrite(led2_1,LOW);
      digitalWrite(led2_2,HIGH);
      digitalWrite(led2_3,LOW);
    delay(10000);
      digitalWrite(led1_1,LOW);
      digitalWrite(led1_2,LOW);
      digitalWrite(led1_3,HIGH);
      digitalWrite(led2_1,LOW);
      digitalWrite(led2_2,LOW);
      digitalWrite(led2_3,HIGH);
    delay(10000);
      digitalWrite(led1_1,HIGH);
      digitalWrite(led1_2,LOW);
      digitalWrite(led1_3,LOW);
      digitalWrite(led2_1,HIGH);
      digitalWrite(led2_2,LOW);
      digitalWrite(led2_3,LOW);
}
