#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTServo,  none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorD,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorE,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorF,        tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorG,        tmotorTetrix, openLoop)
#pragma config(Servo,  srvo_S1_C3_1,    servo1,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_2,    servo2,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_3,    servo3,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_4,    servo4,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_5,    servo5,               tServoNone)
#pragma config(Servo,  srvo_S1_C3_6,    servo6,               tServoNone)
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
     if(abs(joystick.joy1_y2) > threshold)
    {
      motor[motorF] = joystick.joy1_; // controller moves motorF
    }
    else
    {
      motor[motorF] = 0;
    }
	}
}
