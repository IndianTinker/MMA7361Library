/*
  MMA7361.h - Library to play with the MMA7361 3 Axis Accelerometer by Freescale
  Created by Rohit Gupta on 2nd Nov 2014 in Pune India
  MIT Liscence
*/
#ifndef MMA7361_h
#define MMA7361_h

#define gsel 0
#include "Arduino.h"

class Acc
{
  public:
 Acc(int pinX);
 Acc(int pinX, int pinY);
 Acc(int pinX, int pinY, int pinZ);
    int valX();
    float voltageX();
    float gX();
    int valY();
    float voltageY();
    float gY();
    int valZ();
    float voltageZ();
    float gZ();
  private:
    int _pinX;
    int _pinY;
    int _pinZ;
    float val2v(int v);
    float val2g(int v);	
	
};

#endif
