MMA7361 Library for Arduino
============================

This library helps you to easily *play* with the almost universal 3 axis accelerometer available in most **Hobby** markets that is based on [Freescale's MMA7361](http://www.freescale.com/files/sensors/doc/data_sheet/MMA7361L.pdf).

In order to get in working you have to pull-up the sleep pin using a `10K` resistor to the 3.3V pin.
All other connections are labelled.

Just for *curious* ones:

* **X,Y,Z** give Analog Voltage outputs based on the orientation
* **SL** - Sleep (Pulled up)
* **0g** - It gives a signal when 0g is detected.
* **5v,3v,GND** - Usual Power Connections 3V is produced internally if 5v is applied
* **GS** - Sensitivity select- the IC allows 1.5g and 6g settings ( see gselect in *.cpp* file, Default is 1.5g)
* **ST** - Self Test

Enjoy!

