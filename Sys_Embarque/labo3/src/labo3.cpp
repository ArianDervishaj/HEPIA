/*
 * labo4.cpp
 *
 *  Created on:
 *      Author:
 */

#include "mbed.h"
InterruptIn btn1(P2_0);
InterruptIn btn2(P2_1);
DigitalOut led(P2_2);
Ticker ticker;

void flip(void){
	led = !led;
}

void allume(void) {
	led = 1;
	ticker.attach(&flip, 0.5);

}

void eteint(void) {
	led = 0;
	ticker.detach();
}

int main(void) {
	btn1.rise(&allume);
	btn2.fall(&eteint);
	while(1) {
		}
	}

