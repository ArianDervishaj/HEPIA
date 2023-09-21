#include <stdio.h> /* printf(), scanf() */
#include <stdbool.h>
#include <stdlib.h> /* srand(), rand() */
#include <time.h> /* time() */
#include <math.h> /* log() */

unsigned short optimalNbOfTries(unsigned short nbMax, unsigned short nbToGuess){

    unsigned short high = nbMax;
    unsigned short low = 1;
    unsigned short nbOfTries = 1;

    while (low <= high) {
        unsigned short computerTry = (low + high) / 2;

        if (computerTry == nbToGuess) {
            break;
        } else if (computerTry < nbToGuess) {
            low = computerTry + 1;
        } else {
            high = computerTry - 1;
        }

        nbOfTries++;
    }

    return nbOfTries;

}

void computerPlay(){
    unsigned short high = 100;
    unsigned short low = 1;
    unsigned short nbOfTries = 1;
    unsigned short computerTry = 0;
    printf("Pensez à un nombre entre 1 et 100. \n");

    while (low <= high) {
        char hint = ' ';
        computerTry = (low + high) / 2;

        printf("%hu \n", computerTry);
        printf("Est ce que %hu est plus grand (>), plus petit (<) ou égal (=) à ton nombre ?\n",computerTry);
        scanf(" %c",&hint);

        if (hint == '=') {
            break;
        } else if (hint == '<') {
            low = computerTry + 1;
        } else {
            high = computerTry - 1;
        }

        nbOfTries++;
    }

    printf("L'ordinateur a trouvé en %hu essaies.\n",nbOfTries);
}

void userPlay(){
    srand(time(0));

    unsigned short nbOfTries = 0;
    unsigned short nbMax = 0;

    do
    {
        printf ("Quel est le nombre maximum (1 <= nb <= 100):\n");
        scanf ("%hu", &nbMax);
    } while (nbMax <= 0 && nbMax > 100);
    
    unsigned short nbToGuess = (rand() % nbMax) + 1;
    unsigned short nbTried = 0;

    while (nbTried != nbToGuess)
    {
        nbOfTries += 1;
        printf ("Entrez un nombre :\n");
        scanf ("%hu", &nbTried);

        if(nbTried > nbToGuess){
            printf("%hu est plus grand que le nombre recherché.\n",nbTried);
        }
        if(nbTried < nbToGuess){
            printf("%hu est plus petit que le nombre a deviné.\n",nbTried);
        }
    }
    unsigned short optimalNb = optimalNbOfTries(nbMax,nbToGuess);
    printf("Vous avez gagné en %hu coups. \n", nbOfTries);
    printf("Le nombre optimal d'essaie était de %hu. \n",optimalNb);
}

void main(){
    unsigned short choice = 0;

    do
    {
        printf("Est ce que vous voulez deviner (1) ou guider (2) ?\n ");
        scanf(" %hu",&choice);
    } while (choice != 1 && choice != 2);
    
    if(choice == 1){
        userPlay();
    }
    if(choice == 2){
        computerPlay();
    }
    
}

