#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Trouver le nombre optimal d'essaie
unsigned short optimalNbOfTries(unsigned short nbMax, unsigned short nbToGuess) {
    unsigned short low = 1;
    unsigned short high = nbMax;
    unsigned short nbOfTries = 0;

    while (low <= high) {
        unsigned short computerTry = (low + high) / 2;
        nbOfTries++;

        if (computerTry == nbToGuess) {
            break;
        } else if (computerTry < nbToGuess) {
            low = computerTry + 1;
        } else {
            high = computerTry - 1;
        }
    }

    return nbOfTries;
}

// Ordinateur qui devine
void computerPlay() {
    unsigned short low = 1;
    unsigned short high = 100;
    unsigned short nbOfTries = 0;
    unsigned short computerTry = 0;
    char hint = ' ';

    printf("Penses à un nombre entre 1 et 100.\n");

    while (low <= high) {
        computerTry = (low + high) / 2;
        nbOfTries++;

        printf("%hu\n", computerTry);
        printf("%hu plus grand (>), plus petit (<) ou égal (=) à ton nombre?\n", computerTry);
        scanf(" %c", &hint);

        if (hint == '=') {
            break;
        } else if (hint == '<') {
            low = computerTry + 1;
        } else {
            high = computerTry - 1;
        }
    }

    printf("L'ordinateur a trouvé en %hu essaies.\n", nbOfTries);
}

// Utilisateur qui devine
void userPlay() {
    srand(time(0));
    unsigned short nbOfTries = 0;
    unsigned short nbMax = 0;

    do {
        printf("Entre le nombre max (1 <= nb <= 100):\n");
        scanf("%hu", &nbMax);
    } while (nbMax <= 0 || nbMax > 100);

    unsigned short nbToGuess = (rand() % nbMax) + 1;
    unsigned short nbTried = 0;

    while (nbTried != nbToGuess) {
        nbOfTries++;
        printf("Entre un nombre:\n");
        scanf("%hu", &nbTried);

        if (nbTried > nbToGuess) {
            printf("%hu est plus grand que le nombre secret.\n", nbTried);
        } else if (nbTried < nbToGuess) {
            printf("%hu est plus petit que le nombre secret.\n", nbTried);
        }
    }

    unsigned short optimalNb = optimalNbOfTries(nbMax, nbToGuess);
    printf("Tu as trouvé en %hu essaies.\n", nbOfTries);
    printf("Le nombre optimal d'essaie était de %hu.\n", optimalNb);
}

int main() {
    unsigned short choice = 0;

    do {
        printf("Veux-tu deviner (1) ou guider (2)?\n");
        scanf("%hu", &choice);
    } while (choice != 1 && choice != 2);

    if (choice == 1) {
        userPlay();
    } else if (choice == 2) {
        computerPlay();
    }

    return 0;
}
