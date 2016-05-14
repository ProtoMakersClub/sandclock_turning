//============================
// 4x SAND CLOCK TURNING
// GPL v3 (c) protomakers.club
// v.20160514.6.0957
//============================


// Include these library for working with servos

#include <Servo.h>


// Servo object creation

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;

// Setup of servomotor. Connect servo1 to pin 2, servo2 to 3, servo3 to 4 and servo4 to 5.

void setup() 
{
   servo1.attach(2);
   servo2.attach(3);
   servo3.attach(4);
   servo4.attach(5);
}


// Continous execution

void loop() 
{
  
  // value < 90 CCW, value>90 CW
  servo1.write(80);
  servo2.write(80);
  servo3.write(80);
  servo4.write(80);
}
