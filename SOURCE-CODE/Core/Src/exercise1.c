#include "exercise1.h"

int timer_counter[3];
int timer_flag[3];
int TIMER_CYCLE = 10;

void setTimer (int number ,int duration ) {
timer_counter[number] = duration / TIMER_CYCLE ;
timer_flag[number] = 0;
}
void timer_run () {
for(int i = 0;i<=2;i++)
{
if( timer_counter[i] > 0) {
timer_counter[i]--;
if( timer_counter[i] == 0) timer_flag[i] = 1;
}
}
}

void init_exercise1(){
	  setTimer(0,10) ;
	  setTimer(1,10) ;
	  setTimer(2,10) ;
}

void exercise1_run(){

}
