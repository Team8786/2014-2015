#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  motorA,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorB,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  motorC,           ,             tmotorNXT, openLoop)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop, reversed, driveRight)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop, driveLeft)
#pragma config(Motor,  mtr_S1_C2_1,      ,             tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,      ,             tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "JoystickDriver.c" //Joystick is included in this program

task main()
{
	int threshold = 15; //to avoid unnecessary movement

	while(true) //infinite loop
	{
		getJoystickSettings(joystick); //retrieves data from the joystick

		if(abs(joystick.joy1_y1) > threshold)
		{
			motor[motorD] = joystick.joy1_y1; //y1 controller moves motorD
		}
		else
		{
			motor[motorD] = 0;
		}

		if(abs(joystick.joy1_y2) > threshold)
		{
			motor[motorE] = joystick.joy1_y2; //y2 controller moves motorE
		}
		else
		{
			motor[motorE] = 0;
		}
	}
}
