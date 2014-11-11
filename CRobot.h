/* 
* CRobot.h
*
* Created: 11/11/2014 15:03:17
* Author: Anastasiya
*/

#define ENABLE_ARDUINO_MOTOR_DRIVER

#ifdef ENABLE_ARDUINO_MOTOR_DRIVER
#include "CMotor.h"
#define RIGHT_MOTOR_INIT 4, 5
#define LEFT_MOTOR_INIT 7, 6
#endif

class CRobot
{
	public:
	
	CRobot();
	void initialize();
	void run();
	
	protected:
	
	void remote();
	void move(int speed);
	void stop();
		
	bool isMoving();
	bool isStopped();
	bool isRemoteON();
	
	
	private:
	
	CMotor leftMotor;
	CMotor rightMotor;
	enum State { STOPPED, MOVING, REMOTE };
	State state;
};