#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int size = 10;
    int tab[] = {4,2,6,10,30,11,23,21,65,39};

    for(int i = 0; i < size - 1; i++){
        if(tab[i+1] < tab[i]){
            int tmp = tab[i];
            tab[i] = tab[i+1];
            tab[i + 1] = tmp;
            }
    }

    for(int i = 0; i< size; i++){
        printf("%d, ", tab[i]);
    }
    return 0;
}
