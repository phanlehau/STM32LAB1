#include "exercise5.h"

  int couter = 0;
  int status = 0;
  int couter2 = 0;
  int status2 = 2;
  int check = 0;
  int bienphu1 = 0;
  int bienphu2 = 0;


void init_exercise5(){
	  HAL_GPIO_TogglePin ( RED_LED1_GPIO_Port , RED_LED1_Pin ) ;
	  HAL_GPIO_TogglePin ( GREEN_LED2_GPIO_Port , GREEN_LED2_Pin ) ;

}
void display7SEG1(int number)
{
	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
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
void display7SEG2(int number)
{
	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_22_GPIO_Port, LED_22_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_33_GPIO_Port, LED_33_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_44_GPIO_Port, LED_44_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_55_GPIO_Port, LED_55_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_66_GPIO_Port, LED_66_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LED_77_GPIO_Port, LED_77_Pin, GPIO_PIN_RESET);
	if(number == 0)
	{
		HAL_GPIO_TogglePin ( LED_77_GPIO_Port , LED_77_Pin ) ;
	}
	if(number == 1)
	{
		HAL_GPIO_TogglePin ( LED_11_GPIO_Port , LED_11_Pin ) ;
		HAL_GPIO_TogglePin ( LED_44_GPIO_Port , LED_44_Pin ) ;
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
		HAL_GPIO_TogglePin ( LED_66_GPIO_Port , LED_66_Pin ) ;
		HAL_GPIO_TogglePin ( LED_77_GPIO_Port , LED_77_Pin ) ;
	}
	if(number == 2)
	{
		HAL_GPIO_TogglePin ( LED_33_GPIO_Port , LED_33_Pin ) ;
		HAL_GPIO_TogglePin ( LED_66_GPIO_Port , LED_66_Pin ) ;
	}
	if(number == 3)
	{
		HAL_GPIO_TogglePin ( LED_66_GPIO_Port , LED_66_Pin ) ;
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
	}
	if(number == 4)
	{
		HAL_GPIO_TogglePin ( LED_11_GPIO_Port , LED_11_Pin ) ;
		HAL_GPIO_TogglePin ( LED_44_GPIO_Port , LED_44_Pin ) ;
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
	}
	if(number == 5)
	{
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
		HAL_GPIO_TogglePin ( LED_22_GPIO_Port , LED_22_Pin ) ;
	}
	if(number == 6)
	{
		HAL_GPIO_TogglePin ( LED_22_GPIO_Port , LED_22_Pin ) ;
	}
	if(number == 7)
	{
		HAL_GPIO_TogglePin ( LED_44_GPIO_Port , LED_44_Pin ) ;
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
		HAL_GPIO_TogglePin ( LED_66_GPIO_Port , LED_66_Pin ) ;
		HAL_GPIO_TogglePin ( LED_77_GPIO_Port , LED_77_Pin ) ;
	}
	if(number == 8)
	{
	}
	if(number == 9)
	{
		HAL_GPIO_TogglePin ( LED_55_GPIO_Port , LED_55_Pin ) ;
	}

}
void exercise5_run(){
	// hien thi diem nguoc 2 led 7 doan
	 if(status == 0)
		  {
			  bienphu1 = 5;
		  }
		  else if(status == 1)
		  {
			  bienphu1 = 2;
		  }
		  else if(status == 2)
		  {
			  bienphu1 = 3;
		  }
		  if(status2 == 0)
		  {
			  bienphu2 = 5;
		  }
		  else if(status2 == 1)
		  {
			  bienphu2 = 2;
		  }
		  else if(status2 == 2)
		  {
			  bienphu2 = 3;
		  }
	      display7SEG1 ( bienphu1 - couter - 1) ;
	      display7SEG2 ( bienphu2 - couter2 - 1) ;
	// hien thi 2 den giao thong
	      switch(status) {
	      case 0:
	    	  couter++;
	    	  if(couter>=5)
	    	  {
	    		HAL_GPIO_TogglePin ( RED_LED1_GPIO_Port , RED_LED1_Pin ) ;
	    		HAL_GPIO_TogglePin ( GREEN_LED1_GPIO_Port , GREEN_LED1_Pin ) ;
	    		status = 2;
	    		couter = 0;
	    	  }
	    	  break;
	      case 1:
	    	  couter++;
	    	  if(couter>=2)
	    	  {
	      		HAL_GPIO_TogglePin ( YELLOW_LED1_GPIO_Port , YELLOW_LED1_Pin ) ;
	      		HAL_GPIO_TogglePin ( RED_LED1_GPIO_Port , RED_LED1_Pin ) ;
	      		status = 0;
	      		couter = 0;
	    	  }
	    	  break;
	      case 2:
	    	  couter++;
	    	  if(couter>=3)
	    	  {
	    		  HAL_GPIO_TogglePin ( GREEN_LED1_GPIO_Port , GREEN_LED1_Pin ) ;
	    		  HAL_GPIO_TogglePin ( YELLOW_LED1_GPIO_Port , YELLOW_LED1_Pin )  ;
	      		status = 1;
	      		couter = 0;
	    	  }
	    	  break;
	      default:
	    	  break;
	      }
	      switch(status2) {
	           case 0:
	         	  couter2++;
	         	  if(couter2>=5)
	         	  {
	          		HAL_GPIO_TogglePin ( RED_LED2_GPIO_Port , RED_LED2_Pin ) ;
	          		HAL_GPIO_TogglePin ( GREEN_LED2_GPIO_Port , GREEN_LED2_Pin ) ;
	         		status2 = 2;
	         		couter2 = 0;
	         	  }
	         	  break;
	           case 1:
	         	  couter2++;
	         	  if(couter2>=2)
	         	  {
	            		HAL_GPIO_TogglePin ( YELLOW_LED2_GPIO_Port , YELLOW_LED2_Pin ) ;
	            		HAL_GPIO_TogglePin ( RED_LED2_GPIO_Port , RED_LED2_Pin ) ;
	           		status2 = 0;
	           		couter2 = 0;
	         	  }
	         	  break;
	           case 2:
	         	  couter2++;
	         	  if(couter2>=3)
	         	  {
	        		  HAL_GPIO_TogglePin ( GREEN_LED2_GPIO_Port , GREEN_LED2_Pin ) ;
	        		  HAL_GPIO_TogglePin ( YELLOW_LED2_GPIO_Port , YELLOW_LED2_Pin )  ;
	           		status2 = 1;
	           		couter2 = 0;
	         	  }
	         	  break;
	           default:
	         	  break;
	           }

}


