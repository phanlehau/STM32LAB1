/*
 * exercise1.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise4.h"

int counter = 0;

void init_exercise4(){

}
void display7SEG(int number)
{
	if(number == 0)
	{
		HAL_GPIO_TogglePin ( LED_7_GPIO_Port , LED_7_Pin ) ;
	}
	if(number == 1)
	{
		HAL_GPIO_TogglePin ( LED_1_GPIO_Port , LED_1_Pin ) ;
		HAL_GPIO_TogglePin ( LED_4_GPIO_Port , LED_4_Pin ) ;
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
		HAL_GPIO_TogglePin ( LED_6_GPIO_Port , LED_6_Pin ) ;
		HAL_GPIO_TogglePin ( LED_7_GPIO_Port , LED_7_Pin ) ;
	}
	if(number == 2)
	{
		HAL_GPIO_TogglePin ( LED_3_GPIO_Port , LED_3_Pin ) ;
		HAL_GPIO_TogglePin ( LED_6_GPIO_Port , LED_6_Pin ) ;
	}
	if(number == 3)
	{
		HAL_GPIO_TogglePin ( LED_6_GPIO_Port , LED_6_Pin ) ;
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
	}
	if(number == 4)
	{
		HAL_GPIO_TogglePin ( LED_1_GPIO_Port , LED_1_Pin ) ;
		HAL_GPIO_TogglePin ( LED_4_GPIO_Port , LED_4_Pin ) ;
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
	}
	if(number == 5)
	{
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
		HAL_GPIO_TogglePin ( LED_2_GPIO_Port , LED_2_Pin ) ;
	}
	if(number == 6)
	{
		HAL_GPIO_TogglePin ( LED_2_GPIO_Port , LED_2_Pin ) ;
	}
	if(number == 7)
	{
		HAL_GPIO_TogglePin ( LED_4_GPIO_Port , LED_4_Pin ) ;
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
		HAL_GPIO_TogglePin ( LED_6_GPIO_Port , LED_6_Pin ) ;
		HAL_GPIO_TogglePin ( LED_7_GPIO_Port , LED_7_Pin ) ;
	}
	if(number == 8)
	{
	}
	if(number == 9)
	{
		HAL_GPIO_TogglePin ( LED_5_GPIO_Port , LED_5_Pin ) ;
	}

}

void exercise4_run(){
	        if(counter >= 10) counter = 0;
	        HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
			display7SEG(counter);
			counter++;


}


