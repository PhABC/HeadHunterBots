#include <Servo.h>

Servo shooter;

//Motor 1
int pinAIN1 = 9; //Direction
int pinAIN2 = 8; //Direction
int pinPWMA = 3; //Speed

//Motor 2
int pinBIN1 = 11; //Direction
int pinBIN2 = 12; //Direction
int pinPWMB = 5; //Speed

//Standby
int pinSTBY = 10;

//Constants to help remember the parameters
static boolean turnCW = 0;  //for motorDrive function
static boolean turnCCW = 1; //for motorDrive function
static boolean motor1 = 0;  //for motorDrive, motorStop, motorBrake functions
static boolean motor2 = 1;  //for motorDrive, motorStop, motorBrake functions

void robotRoaming() {
  
   //Drive both motors CW, full speed
  motorDrive(motor1, turnCCW, 80);
  motorDrive(motor2, turnCCW, 80);

if(Serial.available() > 0) {
    char data = Serial.read();
    char str[2];
    str[0] = data;
    str[1] = '\0';
    Serial.print(str);
          
        if(data=1)
        {
        motorBrake (motor1);
        motorBrake (motor2);
        delay(2000);//Stop everything!
        shooter.write(75);
        delay(160);
        shooter.write(0);
        delay(5000);
        }
  
}


  int ledgeReading = analogRead(A0);
  int obstacleReading = analogRead(A1);
  Serial.println(obstacleReading);
  if (ledgeReading < 150 || obstacleReading < 100)
{
  motorDrive(motor1, turnCW, 125);
  motorDrive(motor2, turnCW, 125);
  
 

  delay(250);

  int RNG = random(-150,150);
  Serial.println("RNG");
  Serial.println(RNG);
  if (RNG < 0)
  {
    RNG = -RNG;
    motorDrive(motor1,turnCCW,RNG);
    motorDrive(motor2,turnCW,RNG);
  }
  else
  {
    motorDrive(motor1,turnCW,RNG);
    motorDrive(motor2,turnCCW,RNG);
  }

  delay(1000);
}

delay(100);
}

void motorDrive(boolean motorNumber, boolean motorDirection, int motorSpeed)
{
  /*
  This Drives a specified motor, in a specific direction, at a specified speed:
    - motorNumber: motor1 or motor2 ---> Motor 1 or Motor 2
    - motorDirection: turnCW or turnCCW ---> clockwise or counter-clockwise
    - motorSpeed: 0 to 255 ---> 0 = stop / 255 = fast
  */

  boolean pinIn1;  //Relates to AIN1 or BIN1 (depending on the motor number specified)

 
//Specify the Direction to turn the motor
  //Clockwise: AIN1/BIN1 = HIGH and AIN2/BIN2 = LOW
  //Counter-Clockwise: AIN1/BIN1 = LOW and AIN2/BIN2 = HIGH
  if (motorDirection == turnCW)
    pinIn1 = HIGH;
  else
    pinIn1 = LOW;

//Select the motor to turn, and set the direction and the speed
  if(motorNumber == motor1)
  {
    digitalWrite(pinAIN1, pinIn1);
    digitalWrite(pinAIN2, !pinIn1);  //This is the opposite of the AIN1
    analogWrite(pinPWMA, motorSpeed);
  }
  else
  {
    digitalWrite(pinBIN1, pinIn1);
    digitalWrite(pinBIN2, !pinIn1);  //This is the opposite of the BIN1
    analogWrite(pinPWMB, motorSpeed);
  }
   
 

//Finally , make sure STBY is disabled - pull it HIGH
  digitalWrite(pinSTBY, HIGH);

}

void motorBrake(boolean motorNumber)
{
/*
This "Short Brake"s the specified motor, by setting speed to zero
*/

  if (motorNumber == motor1)
    analogWrite(pinPWMA, 0);
  else
    analogWrite(pinPWMB, 0);
   
}


void motorStop(boolean motorNumber)
{
  /*
  This stops the specified motor by setting both IN pins to LOW
  */
  if (motorNumber == motor1) {
    digitalWrite(pinAIN1, LOW);
    digitalWrite(pinAIN2, LOW);
  }
  else
  {
    digitalWrite(pinBIN1, LOW);
    digitalWrite(pinBIN2, LOW);
  } 
}


void motorsStandby()
{
  /*
  This puts the motors into Standby Mode
  */
  digitalWrite(pinSTBY, LOW);
}

void setup() {  
  //Set the PIN Modes
  pinMode(pinPWMA, OUTPUT);
  pinMode(pinAIN1, OUTPUT);
  pinMode(pinAIN2, OUTPUT);

  pinMode(pinPWMB, OUTPUT);
  pinMode(pinBIN1, OUTPUT);
  pinMode(pinBIN2, OUTPUT);

  pinMode(2,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(pinSTBY, OUTPUT);
  shooter.attach(6);
  shooter.write(0);
  Serial.begin(9600); // use the same baud-rate as the python side
}

void loop() {
  
        robotRoaming();//Move the Arduino forward as ususal
       
}
