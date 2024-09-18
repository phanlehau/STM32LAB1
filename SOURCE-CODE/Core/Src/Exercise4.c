#include "exercise4.h"

int counter = 0;

void init_exercise4(){

}
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
void display7SEG(int number) {
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

void exercise4_run(){
	        if(counter >= 10) counter = 0;
			display7SEG(counter);
			counter++;


}


