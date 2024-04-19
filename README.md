Light chasing robot car.

Kaiyrkanov Yerassyl, Askarov Zhalgas, Kassenov Temirlan
Lab Section 8, Yerassyl.kaiyrkanov@nu.edu.kz
Lab Section 8, zhalgas.askarov@nu.edu.kz
Lab Section 8, temirlan.kassenov@nu.edu.kz

1.	Introduction
The aim of the project is to build a robot capable of following a light source using light-dependent resistors (LDRs) for sensor feedback and collision detecton using bumper switch. The robot will consist of a chassis with wheels and motors, onto which the VEX ARM Cortex, sensors and bumper switch will be mounted. The LDRs and bumper switch will be positioned on the front of the robot to detect the direction of the light source and to detect collision. The robot will then use this information to adjust its movement and follow the light source as well as stop the robot when collides with objects.
2.	Materials and Methods
1)	VEX ARM Cortex
2)	Two 2-wire vex motor 269
3)	Two wheels
4)	Free Spinning  wheel
5)	Two VEX LDRs 
6)	Vex battery holder
7)	Six AA battery
8)	VEX Bumper switch
9)	Steel plates and angles (chassis)
3.	Results

Link for video footage of robot
https://youtube.com/shorts/kQtfdpwLRE0?feature=share

3.1	Description of work
The robot was constructed in a way that there is a minimal amount of visible cables. It works by comparing the sensor values from both LDRs for 3 cases: 1) There is a small difference between sensor values, which means the robot will go straight; 2) left side LDR’s value is greater than the right side, which means there is a brighter light source on the left, so robot turns to the left by left side wheel going in reverse and right side wheel going forward; 3) right side LDR’s value is greater than the left side, which means there is a brighter light source on the right, so robot turns to the right by right side wheel going in reverse and left side wheel going forward. The robot stops when the bumper switch is pushed (robot meets the obstacle)




5.	Discussion and Conclusions
The goal of this project was to create a light following robot, we used VEX ARM Cortex using motor pin 1 and 10 for 2-wire motors, analog pin 1 and 2 for LDRs, digital pin 6 for bumper switch that works in limit switch behavior. We had several problems while working on the project. One problem is that we wanted to use more than 2 motors for our robot, however VEX ARM Cortex supports only 2 2-wire motors, which made us use additional free spinning wheel for back support of the car. The solution for that could be the use of VEX servo module or another 3-wire motor.
	With this project, we wanted to create a light following robot, which is capable of emergency stop, in case of collision with the obstacle or wall. 
6.	Student Contributions
Yerassyl Kaiyrkanov was responsible for coding, and testing
Temirlan Kassenov was responsible for contructing the robot and debugging.
Zhalgas Askarov was responsible for report writing, reconstruction, time management and project management. 
