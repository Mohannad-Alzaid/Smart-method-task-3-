#include <Servo.h>. 

Servo myServo;
Servo myServo1; 

int switch1 = 2;
int switch2 = 3;
int switch3 = 4;
int switch4 = 5;

void setup() {
  
 
  

  myServo.attach(8);
myServo1.attach(9); 
 myServo.write(0);
  myServo1.write(0);
}
void loop() {
  // rotates the servo motor from 15 to 165 degrees
  
  int state1=digitalRead(switch1);
 int state2=digitalRead(switch2);
 int state3=digitalRead(switch3);
 int state4=digitalRead(switch4);
  
  if(state1 == HIGH){  
  myServo.write(0);
  
  delay(10);
 
  }
   if(state2 == HIGH){  
  myServo.write(180);
  
  delay(10);
 
  }
   if(state3 == HIGH){  
  myServo1.write(0);
  
  delay(10);
 
  }
   if(state4 == HIGH){  
  myServo1.write(180);
  
  delay(10);
 
  }
 

  
  }

  
   
