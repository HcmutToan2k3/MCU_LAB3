/*
 * global.h
 *
 *  Created on: Oct 15, 2023
 *      Author: Phuc Toan
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "hardware.h"
#include "main.h"
#include "software_timer.h"
#include "display7SEG.h"
#include "button.h"

//fsm
#define INIT 0
#define RED_GREEN 1
#define RED_YELLOW 2
#define GREEN_RED 3
#define YELLOW_RED 4

#define RED_MAN 12
#define GREEN_MAN 13
#define YELLOW_MAN 14

extern int status;
extern int red_val;
extern int green_val;
extern int yellow_val;

extern int red_inc;
extern int green_inc;
extern int yellow_inc;

extern int toogleFlag;
//7seg
extern int led_buffer[4];
extern int index_led;
extern int timerRoad1;
extern int timerRoad2;

void updateLedBuffer();

#endif /* INC_GLOBAL_H_ */
