/*
 * labo1.cpp
 *
 *  Created on: 4 octobre 2019
 *      Author: Orphee Antoniadis
 */

#include "mbed.h"

DigitalOut myledR(P0_0);
DigitalOut myledB(P2_13);

void exercice1(void) {
	myledR = 1;
	myledB = 0;
	wait_ms(1000);
	myledR = 0;
	myledB = 1;
	wait_ms(1000);
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
