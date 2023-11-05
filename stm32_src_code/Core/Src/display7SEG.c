/*
 * display7SEG.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Phuc Toan
 */

#include "display7SEG.h"
#include "main.h"

void displaySEG(int seg, int num){
	switch(seg){
	case 1:
		if (num==0){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==1){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==2){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==3){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==4){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==5){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==6){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==7){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, RESET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, RESET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, SET);
		}
		else if (num==8){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, SET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		}
		else if (num==9){
			HAL_GPIO_WritePin(A0_GPIO_Port, A0_Pin, RESET);
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, SET);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, SET);
			HAL_GPIO_WritePin(A3_GPIO_Port, A3_Pin, RESET);
		}
	case 2:
		if (num==0){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==1){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==2){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==3){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==4){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==5){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==6){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==7){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, RESET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, RESET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, SET);
		}
		else if (num==8){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, SET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		}
		else if (num==9){
			HAL_GPIO_WritePin(B0_GPIO_Port, B0_Pin, RESET);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, SET);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, SET);
			HAL_GPIO_WritePin(B3_GPIO_Port, B3_Pin, RESET);
		}
	case 3:
		if (num==0){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==1){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==2){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==3){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==4){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==5){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==6){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==7){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, RESET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, RESET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, SET);
		}
		else if (num==8){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, SET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		}
		else if (num==9){
			HAL_GPIO_WritePin(C0_GPIO_Port, C0_Pin, RESET);
			HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, SET);
			HAL_GPIO_WritePin(C2_GPIO_Port, C2_Pin, SET);
			HAL_GPIO_WritePin(C3_GPIO_Port, C3_Pin, RESET);
		}
	case 4:
		if (num==0){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==1){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==2){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==3){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==4){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==5){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==6){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==7){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, RESET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, RESET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, SET);
		}
		else if (num==8){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, SET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		}
		else if (num==9){
			HAL_GPIO_WritePin(D0_GPIO_Port, D0_Pin, RESET);
			HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, SET);
			HAL_GPIO_WritePin(D2_GPIO_Port, D2_Pin, SET);
			HAL_GPIO_WritePin(D3_GPIO_Port, D3_Pin, RESET);
		}
	}
}

//void display7SEG(int num){
//	if (num==0){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);
//	}
//	else if (num==1){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,SET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);
//	}
//	else if (num==2){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,SET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==3){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==4){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,SET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==5){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,SET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==6){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,SET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==7){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,SET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,SET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,SET);
//
//	}
//	else if (num==8){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,RESET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//	else if (num==9){
//		HAL_GPIO_WritePin(SEG0_GPIO_Port,SEG0_Pin,RESET);
//		HAL_GPIO_WritePin(SEG1_GPIO_Port,SEG1_Pin,RESET);
//		HAL_GPIO_WritePin(SEG2_GPIO_Port,SEG2_Pin,RESET);
//		HAL_GPIO_WritePin(SEG3_GPIO_Port,SEG3_Pin,RESET);
//		HAL_GPIO_WritePin(SEG4_GPIO_Port,SEG4_Pin,SET);
//		HAL_GPIO_WritePin(SEG5_GPIO_Port,SEG5_Pin,RESET);
//		HAL_GPIO_WritePin(SEG6_GPIO_Port,SEG6_Pin,RESET);
//	}
//}


//void clearSignal(){
//	HAL_GPIO_WritePin(EN0_GPIO_Port,EN0_Pin,SET);
//	HAL_GPIO_WritePin(EN1_GPIO_Port,EN1_Pin,SET);
//	HAL_GPIO_WritePin(EN2_GPIO_Port,EN2_Pin,SET);
//	HAL_GPIO_WritePin(EN3_GPIO_Port,EN3_Pin,SET);
//}

//void updateSignal(int index){
//  	  clearSignal();
//  	  display7SEG(led_buffer[index]);
//  	  switch (index){
//  	  case 0:
//  		  HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin, RESET);
//  		  break;
//  	  case 1:
//  		  HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin, RESET);
//  		  break;
//  	  case 2:
//  		  HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin, RESET);
//  		  break;
//  	  case 3:
//  		  HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin, RESET);
//  		  break;
//  	  default:
//  		  break;
//  	  }
//}

void updataSignal(){
	for(int i=0;i<4;i++){
		displaySEG(i, led_buffer[i]);
	}
}





