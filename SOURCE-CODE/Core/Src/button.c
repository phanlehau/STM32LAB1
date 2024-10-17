#include "button.h"
int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg00 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;
int KeyReg22 = NORMAL_STATE;
int KeyReg33 = NORMAL_STATE;

int button1_pressed = 0;
int button1_flag = 0;

int button2_pressed = 0;
int button2_flag = 0;

void getKeyInputB(){
	// duyet nut nhan B
	KeyReg2 = KeyReg1;
	  KeyReg1 = KeyReg0;
	  // Add your key
	  KeyReg0 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_7);

	  if ((KeyReg1 == KeyReg0) && (KeyReg1 == KeyReg2)){
	    if (KeyReg2 != KeyReg3){
	      KeyReg3 = KeyReg2;

	      if (KeyReg3 == PRESSED_STATE){
	        button1_flag = 0;
	      }
	      else {
	    	  button1_flag = 1;
	      }
	    }
	  }
}
void getKeyInputA(){
	// duyet nut nhan A
	  KeyReg22 = KeyReg11;
	  KeyReg11 = KeyReg00;
	  // Add your key
	  KeyReg00 = HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_8);

	  if ((KeyReg11 == KeyReg00) && (KeyReg11 == KeyReg22)){
	    if (KeyReg22 != KeyReg33){
	      KeyReg33 = KeyReg22;

	      if (KeyReg33 == PRESSED_STATE){
	        button2_flag = 0;
	      }
	      else {
	    	  button2_flag = 1;
	      }
	    }
	  }
}

