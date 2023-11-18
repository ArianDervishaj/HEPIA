/*
 * labo1.cpp
 *
 *  Created on: 4 octobre 2019
 *      Author: Orphee Antoniadis
 */

#include "mbed.h"

DigitalOut myled(P0_0);
DigitalOut myled2(P2_13);
DigitalIn btn(P2_0);

void exercice1(void) {
//	myled = 1;
//	myled2 = 0;
//	wait_ms(1000);
//	myled = 0;
//	myled2 = 1;
//	wait_ms(1000);
	if(btn){
		myled = 1;
	}
}

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 1;

	while(1) {
		// Choix de l'exercice. Rajouter des exercices si besoin, en gardant la même
		// syntaxe et en ecrivant la fonction correspondante avant le 'main'.
		switch(exo) {
			case 1: exercice1(); break;
			default: printf("Bad exercice number !\n");
		}
	}
}
