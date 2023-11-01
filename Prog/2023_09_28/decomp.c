#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int estPremier(int nb){
    bool estPremier = true;
    int div = 2;
    while (div <= sqrt(nb))
    {
        if(nb % div == 0){
            estPremier = false;
            break;
        }
        div += 1;
    }
    return estPremier;
}
int main() {

    int nb = 0;
    printf("Entrez un nombre : \n ");
    scanf("%d", &nb);

    if (nb <= 1) {
        printf("Le nombre doit être supérieur à 1.\n");
        return 1;
    }

    printf("Les facteurs premiers de %d sont :\n", nb);

    for (int i = 2; i <= nb; i++) {
        while (nb % i == 0 && estPremier(i)) {
            printf("%d ", i);
            nb /= i;
        }
    }

    printf("\n");

    return 0;
}
