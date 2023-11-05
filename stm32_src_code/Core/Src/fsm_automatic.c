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
		off_All();

		status = RED_GREEN;
		setTimer1(timer_green*100);
		setTimer2(100);
		break;
	case RED_GREEN:
		//TODO
		onRed1();
		onGreen2();

		// decrease time for two road
		if(timer2_flag == 1){
			setTimer2(100);
			//onRed2();
			timerRoad1--;
			timerRoad2--;
			// road2 -> yellow
			if(timerRoad2 <= 0) timerRoad2 = timer_yellow;
		}

		// update state
		if(timer1_flag == 1){
			setTimer1(timer_yellow * 100);
			status = RED_YELLOW;
		}
		break;
	case RED_YELLOW:
		//TODO
		onRed1();
		onYellow2();

		// decrease time for two road
		if(timer2_flag == 1){
			setTimer2(100);
			timerRoad1--;
			if(timerRoad1 <= 0) timerRoad1 = timer_green;
			timerRoad2--;
			if(timerRoad2 <= 0) timerRoad2 = timer_red;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(timer_green*100);
			setTimer2(100);
			status = GREEN_RED;
		}
		break;
	case GREEN_RED:
		//TODO
		onGreen1();
		onRed2();

		// decrease time for two road
		if(timer2_flag == 1){
			setTimer2(100);
			timerRoad2--;
			timerRoad1--;
			if(timerRoad1 <= 0) timerRoad1 = timer_yellow;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(timer_yellow*100);
			setTimer2(100);
			status = YELLOW_RED;
		}
		break;
	case YELLOW_RED:
		//TODO
		onYellow1();
		onRed2();

		// decrease time for two road
		if(timer2_flag == 1){
			setTimer2(100);
			timerRoad2--;
			if(timerRoad2 <= 0) timerRoad2 = timer_green;
			timerRoad1--;
			if(timerRoad1 <= 0 ) timerRoad1 = timer_red;
		}

		//update state
		if(timer1_flag == 1){
			setTimer1(timer_green*100);
			setTimer2(100);
			status = RED_GREEN;
		}
		break;
	default:
		break;
	}
}
