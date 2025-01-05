#include <Servo.h>

// Set Digital Port Names
const int left_sensor = 2 ;   // left sensor
const int right_sensor = 3 ;  // right sensor
const int middle_sensor = 4 ; //Middle sensor
const int stop_sensor = 5;    // Stopping sensor
const int left_motor_direction_1 =6 ;       // left motor direction 1
const int left_motor_direction_2 = 7;       // left motor direction 2
const int right_motor_direction_1=12;       // right motor direction 1
const int right_motor_direction_2=13;       // right motor direction 2
const int water_pump=8; // water pump 

// Set PWM Port Names--------------------------------------------------------
const int left_motor_speed = 9 ; // Left Motor Speed
const int right_motor_speed = 10 ; // Right Motor Speed
const int servo_motor_pos=11;  // Servo Signal 
//----------------------------------------------------------------------
Servo myservo;
int servo_pos_max=130;
int servo_pos_min=50;
int servo_pos_home=90;
int motor_speed_1 = 50;
int motor_speed_2 = 100;
int motor_speed_3 = 150;  
boolean fire = false;
boolean starting_alignment=false;

void setup() {
//-------------------------------------------------------
  pinMode(left_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(middle_sensor, INPUT);
  pinMode(stop_sensor,INPUT);
  pinMode(left_motor_direction_1, OUTPUT);
  pinMode(left_motor_direction_2, OUTPUT);
  pinMode(right_motor_direction_1, OUTPUT);
  pinMode(right_motor_direction_2, OUTPUT);
  pinMode(water_pump, OUTPUT);
//------------------------------------------------------  
  pinMode(left_motor_speed, OUTPUT);
  pinMode(right_motor_speed, OUTPUT);
  pinMode(servo_motor_pos, OUTPUT);
//------Initial Settings------------ 
 myservo.attach(servo_motor_pos);
 move_stop();
 myservo.write(servo_pos_home);
}

void loop() {
  fire_detect();
  if (fire==true) {
  initial_alignment();  
  }
  if (fire==true) {
  move_forward();  
  running_alignment();  
  }
  if (fire==true) {
  put_off_fire();  
  }
}
