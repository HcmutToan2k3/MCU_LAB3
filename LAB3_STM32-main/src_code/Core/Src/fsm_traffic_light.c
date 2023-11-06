/*
 * fsm_traffic_light.c
 *
 *  Created on: Oct 15, 2023
 *      Author: Phuc Toan
 */

#include "fsm_traffic_light.h"


void fsm_traffic_light(){
	switch(status){
	case INIT:
		//TODO
		offALL();

		//INIT state
		status = RED_GREEN;
		setTimer1(green_val*100);
		setTimer2(100);
		break;
	case RED_GREEN:
		//TODO
		onRED1();
		onGREEN2();

		//decrement of counter of each road
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = yellow_val;
		}

		//update state
		if (timer1_flag == 1){
			setTimer1(yellow_val*100);
			status = RED_YELLOW;
		}
		break;
	case RED_YELLOW:
		//TODO
		onRED1();
		onYELLOW2();

		//decrement of counter of each road
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = green_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = red_val;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(green_val*100);
			status = GREEN_RED;
		}
		break;
	case GREEN_RED:
		onGREEN1();
		onRED2();

		//decrement of counter of each road
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = yellow_val;
			timerRoad2--;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(yellow_val*100);
			status = YELLOW_RED;
		}
		break;
	case YELLOW_RED:
		onYELLOW1();
		onRED2();

		//decrement of counter of each road
		if (timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if (timerRoad1 <= 0) timerRoad1 = red_val;
			timerRoad2--;
			if (timerRoad2 <= 0) timerRoad2 = green_val;
		}

		//update state
		if (timer1_flag == 1){
			setTimer1(green_val*100);
			status = RED_GREEN;
		}
		break;
	default:
		break;
	}
	//check mode (timer5 for toogle LED)
	if (isButtonPressed(0) == 1 && (status == RED_GREEN || status == RED_YELLOW || status == GREEN_RED || status == YELLOW_RED)){
		offALL();
		status = RED_MAN;
		red_inc = red_val;
		yellow_inc = yellow_val;
		green_inc = green_val;
		setTimer5(1);

		timerRoad1 = red_val;
		timerRoad2 = 2;
	}
}
