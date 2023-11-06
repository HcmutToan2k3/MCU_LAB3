/*
 * fsm_manual.c
 *
 *  Created on: Oct 15, 2023
 *      Author: Phuc Toan
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch(status){
	case RED_MAN:
		if (timer5_flag == 1){
			setTimer5(50);
			if (toogleFlag == 0){
				toogleFlag = 1;
				onRED1();
				onRED2();
			}
			else {
				offALL();
				toogleFlag = 0;
			}
		}
		if (isButtonPressed(1) == 1){
			red_inc++;
			timerRoad1++;
			if (red_inc >= 100) red_inc=2;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			status = YELLOW_MAN;

			timerRoad1 = yellow_val;
			timerRoad2 = 3;
		}
		if (isButtonPressed(2) == 1){
			red_val=red_inc;
		}
		break;

	case YELLOW_MAN:
		if (timer5_flag == 1){
			setTimer5(50);
			if (toogleFlag == 0){
				toogleFlag = 1;
				onYELLOW1();
				onYELLOW2();
			}
			else {
				offALL();
				toogleFlag = 0;
			}
		}
		if (isButtonPressed(1) == 1){
			yellow_inc++;
			timerRoad1++;
			if (yellow_inc >= red_val) yellow_inc=1;
		}
		if (isButtonPressed(0) == 1){
			setTimer5(1);
			status = GREEN_MAN;

			timerRoad1 = green_val;
			timerRoad2 = 4;
		}
		if (isButtonPressed(2) == 1){
			yellow_val=yellow_inc;
		}
		break;

	case GREEN_MAN:
		if (timer5_flag == 1){
			setTimer5(50);
			if (toogleFlag == 0){
				toogleFlag = 1;
				onGREEN1();
				onGREEN2();
			}
			else {
				offALL();
				toogleFlag = 0;
			}
		}
		if (isButtonPressed(1) == 1){
			green_inc++;
			timerRoad1++;
			if (green_inc >= red_val) green_inc=1;
		}
		if (isButtonPressed(0) == 1){
			status = RED_GREEN;
			green_val = red_val-yellow_val;
			timerRoad1 = red_val;
			timerRoad2 = green_val;
			updateLedBuffer();
			setTimer1(green_val*100);
			setTimer2(100);

			//to display new value of 7SEG
			setTimer4(1);
			index_led=0;
			//
			clearSignal();

		}
		if (isButtonPressed(2) == 1){
			green_val=green_inc;
			yellow_val=red_val-green_val;
		}
		break;

	default:
		break;
	}
	if (isButtonPressed(2) == 1){
		timerRoad1 = red_val;
	}
}
