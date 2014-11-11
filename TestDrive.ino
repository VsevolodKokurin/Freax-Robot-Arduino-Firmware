/*
 * TestDrive.ino
 *
 * Created: 11/11/2014 1:07:50 PM
 * Author: Anastasiya
 */ 

#include "CRobot.h"

CRobot freax;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	freax.run();
}
