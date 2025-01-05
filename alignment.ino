void initial_alignment() {
  starting_alignment=true;
  if (digitalRead(left_sensor)==0 && digitalRead(middle_sensor)==1) {
   move_left();   
  }
  if (digitalRead(right_sensor)==0 && digitalRead(middle_sensor)==1) {
    move_right();
  }
  while (digitalRead(middle_sensor)==1) {
   if (digitalRead(left_sensor) ==1 && digitalRead(right_sensor)==1) {   
   fire=false;
   break;
  }  
  }
  delay (100);
  move_stop();
  starting_alignment=false;
}



void running_alignment(){
  while (fire==true && digitalRead(stop_sensor)==1) {
    
  if (digitalRead(left_sensor)==0 && digitalRead(middle_sensor)==1) {
   move_left();
  }
  if (digitalRead(right_sensor)==0 && digitalRead(middle_sensor)==1) {
    move_right();
  }
  while (digitalRead(middle_sensor)==1) {
   if (digitalRead(left_sensor) ==1 && digitalRead(right_sensor)==1) {   
   fire=false;
   break;
  }  
  }
  move_forward();
  }
  move_stop();
}
