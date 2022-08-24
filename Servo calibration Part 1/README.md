# Raspberry-Pi-Pico-Cryton-Maker-Pi-Rp2040-2-Servo-control
This folder contains the details and the files for the youtube video here
https://www.youtube.com/watch?v=GwmygA1y4L0


This sketch is to control 2 servos on a Pi Pico using Arduino Ide and C/C++

![IMG_1661](https://user-images.githubusercontent.com/60571002/186388069-66ad7a9a-388d-4177-ad40-2d6d4ec36222.jpg)

The servos will be on GP pins 13 and 15 in this example and it uses the Earlephilhower's board manager to allow uploading 
to the various Raspberry Pi Pico boards

It uses his version of the Servo.h library which differes from the Arduino version in that he has set the min and max dutycycles to 1000, and 2000 
which means you will not get full servo movement.
