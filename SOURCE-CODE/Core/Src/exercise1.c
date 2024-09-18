#include "exercise1.h"

int led_status = LED_OFF;

void init_exercise1(){
}
void exercise1_run(){
	switch(led_status){
		case LED_ON:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_SET);
			if(1){
				led_status = LED_OFF;
			}
			break;
		case LED_OFF:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, GPIO_PIN_SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);
			if(1){
				led_status = LED_ON;
			}
			break;
		default:
			break;
	}
}


