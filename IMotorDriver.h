/* 
* IMotorDriver.h
*
* Created: 11/11/2014 13:33:33
* Author: Anastasiya
*/

class IMotorDriver
{
	public:
	
	virtual void setSpeed(int speed) = 0;
	
	virtual int getSpeed() const = 0;
};
