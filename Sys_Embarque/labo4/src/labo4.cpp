/*
 * labo2.cpp
 *
 *  Created on:
 *      Author:
 */

#include "mbed.h"
DigitalOut myledRed(P0_1);
DigitalOut myledBlue(P2_13);

bool clignotant = false;

void exercice1(void) {

	myledRed = 1;
	myledBlue = 1;

}

int nombre = 0;

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
