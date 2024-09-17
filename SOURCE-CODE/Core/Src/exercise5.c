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
	  display7SEG1 (4) ;
	  display7SEG2 (2) ;
	  HAL_Delay(1000);


}
// Bảng tra cứu cho LED 7 đoạn (số từ 0 đến 9)
const uint8_t seven_seg_digits[] = {
  0b00111111, // Số 0
  0b00000110, // Số 1
  0b01011011, // Số 2
  0b01001111, // Số 3
  0b01100110, // Số 4
  0b01101101, // Số 5
  0b01111101, // Số 6
  0b00000111, // Số 7
  0b01111111, // Số 8
  0b01101111  // Số 9
};
void display7SEG1(int number) {
  if(number < 0 || number > 9) return; // Kiểm tra số hợp lệ

  uint8_t digit = seven_seg_digits[number]; // Lấy trạng thái từ bảng tra cứu

  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, (digit & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, (digit & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, (digit & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, (digit & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, (digit & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, (digit & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, (digit & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void display7SEG2(int number) {
  if(number < 0 || number > 9) return; // Kiểm tra số hợp lệ

  uint8_t digit = seven_seg_digits[number]; // Lấy trạng thái từ bảng tra cứu

  HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, (digit & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_22_GPIO_Port, LED_22_Pin, (digit & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_33_GPIO_Port, LED_33_Pin, (digit & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_44_GPIO_Port, LED_44_Pin, (digit & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_55_GPIO_Port, LED_55_Pin, (digit & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_66_GPIO_Port, LED_66_Pin, (digit & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_77_GPIO_Port, LED_77_Pin, (digit & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}
void exercise5_run(){
	// hien thi diem nguoc 2 led 7 doan
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

}


