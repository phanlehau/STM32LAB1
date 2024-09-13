/*
 * exercise2.c
 *
 *  Created on: Aug 31, 2024
 *      Author: KAI
 */
#include "exercise2.h"

  int couter = 0;
  int status = 0;


void init_exercise2(){
	  HAL_GPIO_TogglePin ( YELLOW_LED_GPIO_Port , YELLOW_LED_Pin ) ;
	  HAL_GPIO_TogglePin ( GREEN_LED_GPIO_Port , GREEN_LED_Pin ) ;

}
void exercise2_run(){
    switch(status) {
    case 0:
  	  couter++;
  	  if(couter>=5)
  	  {
  		HAL_GPIO_TogglePin ( RED_LED_GPIO_Port , RED_LED_Pin ) ;
  		HAL_GPIO_TogglePin ( GREEN_LED_GPIO_Port , GREEN_LED_Pin ) ;
  		status = 2;
  		couter = 0;
  	  }
  	  break;
    case 1:
  	  couter++;
  	  if(couter>=2)
  	  {
    		HAL_GPIO_TogglePin ( YELLOW_LED_GPIO_Port , YELLOW_LED_Pin ) ;
    		HAL_GPIO_TogglePin ( RED_LED_GPIO_Port , RED_LED_Pin ) ;
    		status = 0;
    		couter = 0;
  	  }
    case 2:
  	  couter++;
  	  if(couter>=3)
  	  {
  		  HAL_GPIO_TogglePin ( GREEN_LED_GPIO_Port , GREEN_LED_Pin ) ;
  		HAL_GPIO_TogglePin ( YELLOW_LED_GPIO_Port , YELLOW_LED_Pin ) ;
    		status = 1;
    		couter = 0;
  	  }
  	  break;
    default:
  	  break;
    }

}


