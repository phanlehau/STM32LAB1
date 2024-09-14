/*
 * exercise1.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise4.h"


void init_exercise4(){

}
void exercise4_run(){
	switch(led_status){
		case LED_ON:
			led_on();
			if(1){
				led_status = LED_OFF;
			}
			break;
		case LED_OFF:
			led_off();
			if(1){
				led_status = LED_ON;
			}
			break;
		default:
			break;
	}
}


