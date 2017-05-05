#include <Servo.h>
int pinLF=14;
int pinLB=15;
int pinRF=16;
int pinRB=17;


#define LEFT 'a' //左转编码
#define RIGHT 'd'//右转编码
#define GO 'w'//前进编码
#define BACK 's'//后退编码
#define STOP ' '//停止编码



void setup()
 {
  Serial.begin(9600);
  pinMode(pinLB,OUTPUT);
  pinMode(pinLF,OUTPUT);
  pinMode(pinRB,OUTPUT);
  pinMode(pinRF,OUTPUT);

  initCar();
  Serial.println("Serial Car Init");


 }
void back(int a)
    {
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinRB,LOW);
             // analogWrite(pinRF,150);
             // analogWrite(pinRB, 0);
     digitalWrite(pinLF,HIGH);
     digitalWrite(pinLB,LOW);
             // analogWrite(pinLF,150);
             // analogWrite(pinLB,0);
     delay(a * 200);
    }


void left(int b)
    {
     digitalWrite(pinRF,LOW);
     digitalWrite(pinRB,LOW);
             analogWrite(pinRF,0);
             analogWrite(pinRB, 0);
     digitalWrite(pinLF,HIGH);
     digitalWrite(pinLB,LOW);
             analogWrite(pinLF,150);
             analogWrite(pinLB,0);
     delay(b * 100);
    }
void right(int c)
    {
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinRB,LOW);

     digitalWrite(pinLF,LOW);
     digitalWrite(pinLB,LOW);

     delay(c * 100);
    }
void turnL(int d)
    {
     digitalWrite(pinRF,LOW);
     digitalWrite(pinRB,HIGH);

     digitalWrite(pinLF,HIGH);
     digitalWrite(pinLB,LOW);

     delay(d * 100);
    }
void turnR(int e)
    {
     digitalWrite(pinRF,HIGH);
     digitalWrite(pinRB,LOW);

     digitalWrite(pinLF,LOW);
     digitalWrite(pinLB,HIGH);

     delay(e * 100);
    }
void stopp(int f)
    {
     digitalWrite(pinRB,LOW);
     digitalWrite(pinRF,LOW);
     digitalWrite(pinLB,LOW);
     digitalWrite(pinLF,LOW);
     delay(f * 1);
    }
void advance(int g)
 {
     digitalWrite(pinRF,LOW);
     digitalWrite(pinRB,HIGH);
             // analogWrite(pinRF,0);
             // analogWrite(pinRB, 150);
     digitalWrite(pinLF,LOW);
     digitalWrite(pinLB,HIGH);
             // analogWrite(pinLF,0);
             // analogWrite(pinLB,150);
     delay(g * 200);
    }


void loop() {
    char buf = ' ';
    if(Serial.available() > 0)
    {
      buf = char(Serial.read());
      if(buf ==  GO){
        Serial.println("go");
         //前进
         advance(1);
         buf = ' ';
         
      }else if(buf ==BACK){
        Serial.println("back");
         //后退
         back(1);
         buf = ' ';
         
      }else if(buf == LEFT){
         //左转
         Serial.println("left");
         turnL(1);
         buf = ' ';
         
      }else if(buf == RIGHT) {
        //右转
        Serial.println("right");
        turnR(1);
        buf = ' ';
        
      }else if(buf == STOP){
        //停车
        Serial.println("stop");
        stopp(1);
        buf = ' ';
      }

    }
    delay(100);
    stopp(1);
}
//void loop()
//{
//  advance(3);
//  back(3);
//
//}

void initCar(){
  //默认全是低电平 停止状态
  stopp(0);
}













