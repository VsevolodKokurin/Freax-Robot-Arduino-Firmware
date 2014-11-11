/* 
* CMotor.h
*
* Created: 11/11/2014 13:48:30
* Author: Anastasiya
*/

#include "IMotorDriver.h"
#include "Arduino.h"

class CMotor : public IMotorDriver
{
	
	public:
	
	CMotor(uint8_t dirPin, uint8_t speedPin);
	void setSpeed(int speed);
	int getSpeed() const;
	
	private:
	
	uint8_t motorDirPin;
	uint8_t motorSpeedPin;
	int currentSpeed;
	
};