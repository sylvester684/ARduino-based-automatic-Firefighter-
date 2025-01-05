void fire_detect() {
  if (digitalRead(left_sensor) ==0 || digitalRead(right_sensor)==0 || digitalRead(middle_sensor) ==0 || digitalRead(stop_sensor)==0) {   
   fire=true;
  }
  if (digitalRead(stop_sensor)==0) {
    move_back();
  }
}

void put_off_fire() {
  int pos=0,count=0;
  digitalWrite(water_pump, HIGH);
  delay(250);
  while (digitalRead(stop_sensor)==0 || count==3) {
   for (pos = servo_pos_min; pos <= servo_pos_max; pos += 5) {
    myservo.write(pos);
    delay(10);  
  }
  for (pos = servo_pos_max; pos >= servo_pos_min; pos -= 5) {
    myservo.write(pos);
    delay(10);
  }
   if (digitalRead(stop_sensor)==1) {
    count=count+1 ;   
   }
  }
  digitalWrite(water_pump,LOW);
  myservo.write(servo_pos_home);
  fire=false;
} 
