/*
 * global.c
 *
 *  Created on: Oct 15, 2023
 *      Author: Phuc Toan
 */

#include "global.h"

int status=0;

int led_buffer[4]={0,0,0,0};
int index_led = 0;

int red_val=5;
int yellow_val=2;
int green_val=3;

int timerRoad1=0;
int timerRoad2=0;

int red_inc=0;
int green_inc=0;
int yellow_inc=0;

int toogleFlag=0;

void updateLedBuffer(){
	led_buffer[0] = timerRoad1 / 10;
	led_buffer[1] = timerRoad1 % 10;
	led_buffer[2] = timerRoad2 / 10;
	led_buffer[3] = timerRoad2 % 10;
}

