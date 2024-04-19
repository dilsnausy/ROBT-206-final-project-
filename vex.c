#pragma config(Sensor, in1,    left,           sensorAnalog)
#pragma config(Sensor, in2,    right,          sensorAnalog)
#pragma config(Sensor, dgtl6,  buttonoff,      sensorDigitalIn)
#pragma config(Motor,  port1,           rightmotor,    tmotorVex269_HBridge, openLoop, reversed)
#pragma config(Motor,  port10,          leftmotor,     tmotorVex269_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

bool robot = true;
task main()
{

	while(robot){

		if(abs(SensorValue(left)- SensorValue(right))<=20){
		motor[leftmotor] = 60;
		motor[rightmotor]= 60;

		}
		else if((SensorValue(left)-SensorValue(right))<0 ){
			motor[leftmotor] = -60;
		motor[rightmotor]= 60;
		}
		else if((SensorValue(left)-SensorValue(right))>0){
			motor[leftmotor] = 60;
		motor[rightmotor]= -60;
		}
		if(SensorValue(buttonoff)==0){
			robot = false;

				}
	}
}