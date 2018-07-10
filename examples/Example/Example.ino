#include <MMA7361.h> //Include the library


 Acc myacc(A0,A1,A2); //Create an object of Acc class and name it whatever you want. 
void setup()
{
  Serial.begin(9600);  //Init Serial

}

void loop()
{
  Serial.print("X Axis Parameters :");
  Serial.print("Analog :");
  Serial.print(myacc.valX());   //Returns Raw analog value
  Serial.print(" ");
  Serial.print("Voltage :");
  Serial.print(myacc.voltageX()); //Returns Voltage (in Volts)
  Serial.print(" ");
  Serial.print("G value :");
  Serial.println(myacc.gX());   //Returns g value for specified sensitivity and reduction value (See Readme)
  Serial.print("Y Axis Parameters :");
  Serial.print("Analog :");
  Serial.print(myacc.valY());
  Serial.print(" ");
  Serial.print("Voltage :");
  Serial.print(myacc.voltageY());
  Serial.print(" ");
  Serial.print("G value :");
  Serial.println(myacc.gY());
  Serial.print("Z Axis Parameters :");
  Serial.print("Analog :");
  Serial.print(myacc.valZ());
  Serial.print(" ");
  Serial.print("Voltage :");
  Serial.print(myacc.voltageZ());
  Serial.print(" ");
  Serial.print("G value :");
  Serial.println(myacc.gZ());
  
  delay(500);
}
