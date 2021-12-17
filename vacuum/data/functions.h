#ifndef FUNCTIONS_H_
#define FUNCTIONS_H_

#include <iostream>

int pos=1;

bool action_say_position()
{
  printf("My position: %d\n", pos);
  return true;
}


bool update_pos1(bool var){
   if(pos==1) return true; else return false;
   
}

bool update_pos2(bool var){
   if(pos==2) return true; else return false;
   
}

bool update_pos3(bool var){
   if(pos==3) return true; else return false;   
}

bool update_pos4(bool var){
   if(pos==4) return true; else return false;   
}



bool action_move(){    
   if(pos==4) pos=1; else pos++;
   update_pos1(true);
   update_pos2(true);
   update_pos3(true); 
   update_pos4(true);
   return true;
}


#endif /* FUNCTIONS_H_ */
