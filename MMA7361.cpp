#include "MMA7361.h"
#include "Arduino.h"

int pinX, pinY, pinZ;
void globalize(int a,int b,int c)
{
	pinX=a;
	pinY=b;
	pinZ=c;
}
Acc::Acc(int pinX)
{
	_pinX=pinX;
}
Acc::Acc(int pinX,int pinY)
{
	_pinX=pinX;
	_pinY=pinY;

}
Acc::Acc(int pinX,int pinY, int pinZ)
{
	_pinX=pinX;
	_pinY=pinY;
	_pinZ=pinZ;
	globalize(pinX,pinY,pinZ);


}

int Acc::valX()
{
 return analogRead(pinX);
}
int Acc::valY()
{
 return analogRead(pinY);
}

int Acc::valZ()
{
 return analogRead(pinZ);
}

float Acc::val2v(int val)
{
return ((val/1023.0)*5.0);

}

float Acc::voltageX()
{
 return val2v(valX());
}
float Acc::voltageY()
{
 return val2v(valY());
}
float Acc::voltageZ()
{
 return val2v(valZ());
}

float Acc::val2g(int val)
{
if(gsel)
return ((((val/1023.0)*5000.0)/206.0)-8.25);
else
return ((((val/1023.0)*5000.0)/800.0)-2.0625);
}
float Acc::gX()
{
 return val2g(valX());
}
float Acc::gY()
{
 return val2g(valY());
}
float Acc::gZ()
{
 return val2g(valZ());
}


