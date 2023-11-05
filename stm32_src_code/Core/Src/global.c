/*
 * global.c
 *
 *  Created on: Oct 21, 2023
 *      Author: Phuc Toan
 */
#include "global.h"

int status = 0;
int led_buffer[4] = {0,0,0,0};


int timer_red = 5;
int timer_yellow = 2;
int timer_green = 3;

int timerRoad1 = 0;
int timerRoad2 = 0;

void updateLedbuffer(){
	led_buffer[0] = timerRoad1/10;
	led_buffer[1] = timerRoad1%10;
	led_buffer[2] = timerRoad2/10;
	led_buffer[3] = timerRoad2%10;
}
