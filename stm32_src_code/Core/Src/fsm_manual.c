/*
 * fsm_manual.c
 *
 *  Created on: Oct 17, 2023
 *      Author: Phuc Toan
 */
#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status){
		case MAN_RED:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);

			if(timer1_flag == 1){
				status = AUTO_RED;
				setTimer1(5000);
			}
			if(isButton1Pressed()==1){
				status = MAN_GREEN;
				setTimer1(10000);
			}
			break;
		case MAN_GREEN:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
			if(timer1_flag == 1){
				status = AUTO_GREEN;
				setTimer1(5000);
			}
			if(isButton1Pressed()==1){
				status = MAN_YELLOW;
				setTimer1(10000);
			}
			break;
		case MAN_YELLOW:
			HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
			HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
			if(timer1_flag == 1){
				status = AUTO_YELLOW;
				setTimer1(5000);
			}
			if(isButton1Pressed()==1){
				status = MAN_RED;
				setTimer1(10000);
			}
			break;
		default:
			break;
	}
}

