void move_forward() {
  wheels_forward_alignment();
  analogWrite(left_motor_speed, motor_speed_2);
  analogWrite(right_motor_speed, motor_speed_2);
}

void move_left() {
  wheels_forward_alignment();
  if (starting_alignment==true) {
  analogWrite(left_motor_speed, 0);
  analogWrite(right_motor_speed, motor_speed_1);  
  }
  else {
  analogWrite(left_motor_speed, motor_speed_1);
  analogWrite(right_motor_speed, motor_speed_2);
  }
}

void move_right() {
  wheels_forward_alignment();
  if (starting_alignment==true) {
  analogWrite(left_motor_speed, motor_speed_1);
  analogWrite(right_motor_speed, 0);  
  }
  else {
  analogWrite(left_motor_speed, motor_speed_2);
  analogWrite(right_motor_speed, motor_speed_1);
  }
}

void move_back() {
  wheels_reverse_alignment();
  analogWrite(left_motor_speed, motor_speed_3);
  analogWrite(right_motor_speed, motor_speed_3);
  while (digitalRead(stop_sensor)==0) {
  }
  delay(100);
  move_stop();
}

void move_stop() {
 analogWrite(left_motor_speed, 0);
 analogWrite(right_motor_speed, 0);
 digitalWrite(left_motor_direction_1, LOW);
 digitalWrite(left_motor_direction_2, LOW);
 digitalWrite(right_motor_direction_1, LOW);
 digitalWrite(right_motor_direction_2, LOW);  
}

void wheels_forward_alignment() {
  digitalWrite(left_motor_direction_1, HIGH);
  digitalWrite(left_motor_direction_2, LOW);
  digitalWrite(right_motor_direction_1, HIGH);
  digitalWrite(right_motor_direction_2, LOW); 
}

void wheels_reverse_alignment() {
  digitalWrite(left_motor_direction_1, LOW);
  digitalWrite(left_motor_direction_2, HIGH);
  digitalWrite(right_motor_direction_1, LOW);
  digitalWrite(right_motor_direction_2, HIGH); 
}
