#include "exercise10.h"

 int s = 0;
 int m = 0;
 int h = 0;

 GPIO_TypeDef* LED_PORT[12] = {LED_1_GPIO_Port, LED_2_GPIO_Port, LED_3_GPIO_Port, LED_4_GPIO_Port, LED_5_GPIO_Port, LED_6_GPIO_Port, LED_7_GPIO_Port, LED_8_GPIO_Port, LED_9_GPIO_Port, LED_10_GPIO_Port,LED_11_GPIO_Port, LED_12_GPIO_Port};
 uint16_t LED_PIN[12] = {LED_1_Pin, LED_2_Pin, LED_3_Pin, LED_4_Pin, LED_5_Pin, LED_6_Pin, LED_7_Pin, LED_8_Pin, LED_9_Pin, LED_10_Pin, LED_11_Pin, LED_12_Pin};

 void clearAllClock () {
 	HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, GPIO_PIN_RESET);
 	HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, GPIO_PIN_RESET);
  }

 void setNumberOnClock(int num)
 {
   HAL_GPIO_WritePin ( LED_PORT[num] , LED_PIN[num] , GPIO_PIN_SET) ;
 }

 void clearNumberOnClock(int num)
 {
   HAL_GPIO_WritePin ( LED_PORT[num] , LED_PIN[num] , GPIO_PIN_RESET) ;
 }

 void displayClock(int hour, int minute, int second)
   {
       // Xác định LED cho giờ, phút, giây
       int hourLED = hour % 12;      // Giờ trong hệ thống 12 giờ
       int minuteLED = minute / 5;   // Mỗi LED đại diện cho 5 phút
       int secondLED = second / 5;   // Mỗi LED đại diện cho 5 giây
       // Reset tất cả LED về trạng thái tắt
            clearAllClock();

           // Bật LED cho giờ
           setNumberOnClock(hourLED);

           // Bật LED cho phút
           setNumberOnClock(minuteLED);

           // Bật LED cho giây
           setNumberOnClock(secondLED);
   }


void init_exercise10(){

}

void exercise10_run(){
	displayClock(h, m, s);
	    s++;
	    if(s>=60)
	    {
	    	s = 0;
	  	    m++;
	    }
	    if(m>=60)
	    {
	    	m = 0;
	    	h++;
	    }
	    if(h>=12)
	    {
	    	h = 0;
	    }

}


