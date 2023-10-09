/*
 * labo2.cpp
 *
 *  Created on:
 *      Author:
 */

#include "mbed.h"

void exercice1(void) {

}

void exercice2(void) {

}

void exercice3(void) {

}

void exercice4(void) {

}

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 1;

	while(1) {
		// Choix de l'exercice. Rajouter des exercices si besoin, en gardant la même
		// syntaxe et en ecrivant la fonction correspondante avant le 'main'.
		switch(exo) {
			case 1: exercice1(); break;
			case 2: exercice2(); break;
			case 3: exercice3(); break;
			case 4: exercice4(); break;
			default: printf("Bad exercice number !\n");
		}
	}
}
