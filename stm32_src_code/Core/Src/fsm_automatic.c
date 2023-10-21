/*
 * fsm_automatic.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Phuc Toan
 */

#include "fsm_automatic.h"


void fsm_automatic_run(){
	switch(status){
	case INIT:
		//TODO
		HAL_GPIO_WritePin(RED1_GPIO_Port, RED1_Pin, SET);
		HAL_GPIO_WritePin(AMBER1_GPIO_Port, AMBER1_Pin, SET);
		HAL_GPIO_WritePin(GREEN1_GPIO_Port, GREEN1_Pin, SET);
		HAL_GPIO_WritePin(RED2_GPIO_Port, RED2_Pin, SET);
		HAL_GPIO_WritePin(AMBER2_GPIO_Port, AMBER2_Pin, SET);
		HAL_GPIO_WritePin(GREEN2_GPIO_Port, GREEN2_Pin, SET);

		status = RED_GREEN;
		setTimer1(100);
	}
}
