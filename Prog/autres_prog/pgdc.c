#include <stdio.h>

#include <math.h>
int pgdc(int nb1, int nb2);

int main() {
    int nb1 = 0, nb2 = 0;
    printf("Entrez un permier nombre \n");
    scanf("%d", &nb1);

    printf("Entrez un deuxième nombre \n");
    scanf("%d", &nb2);
    printf("Le pgdc de %d et %d est %d\n",nb1,nb2,pgdc(nb1, nb2));
    return 0;
}

int pgdc(int nb1, int nb2){
    int temp_1 = nb1, temp_2 = nb2;
    while(temp_1 % temp_2 != 0){
        int temp = temp_1;
        temp_1 = temp_2;
        temp_2 = temp % temp_2;
    }
    return temp_2;
}