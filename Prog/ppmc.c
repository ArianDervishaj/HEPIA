#include <stdio.h>

#include <math.h>
int ppmc(int nb1, int nb2);

int main() {
    int nb1 = 15, nb2 = 12;
    printf("Le ppmc de %d et %d est %d\n",nb1,nb2,ppmc(nb1, nb2));
    return 0;
}

int ppmc(int nb1, int nb2){
    int mult_nb1 = nb1, mult_nb2 =nb2;

    while(mult_nb1 != mult_nb2){
        if(mult_nb1 > mult_nb2){
            mult_nb2 += nb2;
        }
        else{
            mult_nb1 += nb1;
        }
    }
    return mult_nb1;
}