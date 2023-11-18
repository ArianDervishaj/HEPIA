/*
 * labo2.cpp
 *
 *  Created on:
 *      Author:
 */

#include "mbed.h"
DigitalOut myledRed(P0_0);
DigitalOut myledBlue(P2_13);
DigitalIn btn(P2_0);
DigitalIn btn2(P2_1);

bool clignotant = false;

void exercice1(void) {

	myledRed = 1;
	myledBlue = 0;
	wait_ms(1000);
	myledRed = 0;
	myledBlue = 1;
	wait_ms(1000);

}

void exercice2(void) {
	if(!btn){
		myledRed = 1;
		myledBlue = 1;
	}else{
		myledRed = 0;
		myledBlue = 0;
	}
}

void exercice3(void) {
    while (1) {
        if (!btn) {
            clignotant = true;
        }
        if (!btn2) {
            clignotant = false;
        }
        if (clignotant) {
            myledRed = 1;
            myledBlue = 0;
            wait_ms(500);
            myledRed = 0;
            myledBlue = 1;
            wait_ms(500);
        } else {
            myledRed = 0;
            myledBlue = 0;
        }
    }
}

int nombre = 0;
void exercice4(void) {
	PinName led8(P0_9);
	PinName led4(P0_8);
	PinName led2(P0_7);
	PinName led1(P0_6);
	DigitalIn btnAdd(P2_0);
	DigitalIn btnSub(P2_1);
	BusOut ledBinaire(led1, led2, led4, led8);

	if(!btnAdd){
		nombre += 1;
	}
	if(!btnSub){
		nombre -= 1;
	}

	ledBinaire = nombre;
	wait_ms(200);

}

int main(void) {
	// Choisir le numero de l'exercice en changeant la valeur de 'exo'.
	uint8_t exo = 4;

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
