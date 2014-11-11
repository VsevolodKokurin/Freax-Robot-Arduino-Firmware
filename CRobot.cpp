/*
* CRobot.cpp
*
* Created: 11/11/2014 15:03:17
* Author: Anastasiya
*/

#include "CRobot.h"

CRobot::CRobot(): rightMotor(RIGHT_MOTOR_INIT), leftMotor(LEFT_MOTOR_INIT)
{
	initialize();
}

void CRobot::initialize()
{
	
}

void CRobot::run()
{	
	remote();

}

void CRobot::remote()
{
	leftMotor.setSpeed(0);
	rightMotor.setSpeed(0);
	state = REMOTE;
}

void CRobot::move(int speed) 
{
	leftMotor.setSpeed(speed);
	rightMotor.setSpeed(speed);
	state = MOVING;
}

void CRobot::stop()
{
	leftMotor.setSpeed(0);
	rightMotor.setSpeed(0);
	state = STOPPED;
}

void CRobot::turnLeft() 
{
	leftMotor.setSpeed(-255);
	rightMotor.setSpeed(255);
	state = TURNING;
}

void CRobot::turnRight()
{
	leftMotor.setSpeed(255);
	rightMotor.setSpeed(-255);
	state = TURNING;
}

bool CRobot::isMoving() 
{
	return state == MOVING;
}

bool CRobot::isStopped() 
{
	return state == STOPPED;
}

bool CRobot::isTurning()
{
	return state == TURNING;
}

bool CRobot::isRemoteON()
{
	return state == REMOTE;
}