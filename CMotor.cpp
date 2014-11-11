/* 
* CMotor.cpp
*
* Created: 11/11/2014 13:48:30
* Author: Anastasiya
*/

#include "CMotor.h"

CMotor::CMotor(uint8_t dirPin, uint8_t speedPin): IMotorDriver(), motorDirPin(dirPin), motorSpeedPin(speedPin), currentSpeed(0) {}
	
void CMotor::setSpeed(int speed)
{
	currentSpeed = speed;
	if(speed>0) {
		digitalWrite(motorDirPin, HIGH);
		analogWrite(motorSpeedPin, currentSpeed);
	}
	else if(speed<0) {
		digitalWrite(motorDirPin, LOW);
		analogWrite(motorSpeedPin, -currentSpeed);
	}
	else {
		digitalWrite(motorDirPin, LOW);
		analogWrite(motorSpeedPin, 0);
	}
}

int CMotor::getSpeed() const {
	return currentSpeed;
}
