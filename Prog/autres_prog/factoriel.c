#include <stdio.h>

int main() {
    int nb = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &nb);
    int res = 1;
    for(int i = 2; i <= nb; i++){
        res *= i;
    }
    printf("%d \n", res);
    return 0;
}
