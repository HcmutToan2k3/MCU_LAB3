/*
 * global.h
 *
 *  Created on: Oct 21, 2023
 *      Author: Phuc Toan
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "software_timer.h"
#include "main.h"
#include "button.h"
#include "display7SEG.h"
#include "hardware.h"

#define INIT          1
#define RED_GREEN     2
#define RED_YELLOW    3
#define GREEN_RED     4
#define YELLOW_RED    5

#define MAN_RED      12
#define MAN_GREEN    13
#define MAN_YELLOW   14

extern int status;
extern int timer_red;
extern int timer_yellow;
extern int timer_green;

extern int led_buffer[4];
extern int timerRoad1;
extern int timerRoad2;

void updateLedbuffer();

#endif /* INC_GLOBAL_H_ */
