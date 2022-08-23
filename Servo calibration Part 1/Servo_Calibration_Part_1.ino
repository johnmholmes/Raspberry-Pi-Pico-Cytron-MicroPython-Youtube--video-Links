/* 
 *  This sketch is used to control 2 servos conected to a Rasberry Pi Pico Cryton Maker pi Rp2040 board.
 *  I am programming it in C/C++ using the servo.h library which sort of works for what I need it to do.
 *  It does not give me full 0 - 180 degrees of movement but for turnouts it gives enough.
 *  The board can have upto 4 servos attached to it on GP pins 12-15
 *  
 *  This is for demonstration purposes only and a better method will be found in the future. 
 *  The servos used in this case are sg90 clones marked as ky66 from ebay.
 *  
 *  I am also using writeMicroseconds for the movement in this case but it could be done using degrees.
*/

#include <Servo.h>
Servo myservo1;  // create servo object to control a servo
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

const int homePos = 1500;
void setup() {
  myservo1.attach(15);  // attaches the servo on GIO2 to the servo object
  myservo1.writeMicroseconds(homePos);
  myservo.attach(13);  // attaches the servo on GIO2 to the servo object
  myservo.writeMicroseconds(homePos);
  delay(5000);
  
}


void loop() {
  myservo.writeMicroseconds(600);
  delay(500);
  myservo.writeMicroseconds(1500);
  delay(500);
  myservo.writeMicroseconds(2200);
  delay(500);
  myservo.writeMicroseconds(1500);
  delay(500);
  int pos;

  for (pos = 600; pos <= 2200; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo1.writeMicroseconds(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 2200; pos >= 600; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo1.writeMicroseconds(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
