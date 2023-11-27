#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print(int size, int tab[size]) {
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

void random_tab(int size, int tab[size], int inf, int sup) {
    for (int i = 0; i < size; i++) {
        tab[i] = inf + rand() % (sup - inf + 1);
    }
}

// Déterminer si le tableau est trié ou non
bool is_sorted(int size, int tab[size]) {
    bool sorted = true;
    for (int i = 0; i < size - 1; i++){
        if(tab[i] > tab[i+1]){
            sorted = false;
            break;
        }
    }

    return sorted;
}