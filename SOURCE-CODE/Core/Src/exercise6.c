/*
 * exercise1.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise6.h"


extern GPIO_TypeDef* LED_PORT[12];
extern uint16_t LED_PIN[12];
int counter = 0;


void init_exercise6(){

}

void exercise6_run(){
	  HAL_GPIO_TogglePin ( LED_PORT[counter] , LED_PIN[counter] ) ;
		  if(counter <= 11) counter ++;

}


