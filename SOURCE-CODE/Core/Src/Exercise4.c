#include "exercise4.h"

int counter = 0;

void init_exercise4(){

}
const uint8_t seven_seg_digits[] = {
  1, // So 0
  2, // So 1
  3, // So 2
  4, // So 3
  5, // So 4
  6, // So 5
  7, // So 6
  8, // So 7
  9, // So 8
  10  // So 9
};
void display7SEG(int number) {
  if(number < 0 || number > 9) return; // Kiem tra so hop le

  uint8_t digit = seven_seg_digits[number]; // Lay trang thai tu bang tra cuu

  HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, (digit & 0x01) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, (digit & 0x02) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, (digit & 0x04) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, (digit & 0x08) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, (digit & 0x10) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, (digit & 0x20) ? GPIO_PIN_RESET : GPIO_PIN_SET);
  HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, (digit & 0x40) ? GPIO_PIN_RESET : GPIO_PIN_SET);
}

void exercise4_run(){
	        if(counter >= 10) counter = 0;
			display7SEG(counter);
			counter++;


}


