#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    int nb = 0;
    bool estPremier = true;
    int div = 2;
    printf("Entrez un nombre : \n");
    scanf("%d", &nb);

    while (div <= sqrt(nb))
    {
        if(nb % div == 0){
            estPremier = false;
            break;
        }
        div += 1;
    }

    if(estPremier){
        printf("%d est premier \n", nb);
    }
    else{
        printf("%d est pas premier \n", nb);
    }
    return 0;
}
