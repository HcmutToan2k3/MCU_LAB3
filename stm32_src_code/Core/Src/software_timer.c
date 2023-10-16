/*
 * software_timer.c
 *
 *  Created on: Oct 16, 2023
 *      Author: Phuc Toan
 */

int timer1_counter = 0;
int timer1_flag = 0;

int timer2_counter = 0;
int timer2_flag = 0;

void setTimer1(int duration){
	timer1_counter = duration;
	timer1_flag = 0;
}

void timerRun(){
	if(timer1_counter>0){
		timer1_counter--;
		if(timer1_counter<=0){
			timer1_flag = 1;
		}
	}
}
