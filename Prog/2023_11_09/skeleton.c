#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print(int size, int tab[size]);
void random_tab(int size, int tab[size], int inf, int sup);
void selection_sort(int size, int tab[size]);
void radix_sort(int size, int tab[size]);
void merge_sort(int size, int tab[size]);
void quick_sort(int size, int tab[size], int first, int last);
bool is_sorted(int size, int tab[size]);

int main(int argc, char **argv) {
    if (argc != 4) {
        printf("usage: program <size> <seed> <sorting_algo_number>\n");
        printf("       - size: number of numbers in the table\n");
        printf("       - seed: seed for the random number\n");
        printf(
            "       - sorting_algo_number: 1 radix-sort, 2 merge-sort, 3 selection-sort, 4 "
            "quick-sort\n");
        return EXIT_FAILURE;
    }

    // Add variables for input here: size, seed, sorting_algo_number.
    int size = atoi(argv[1]);
    int seed = atoi(argv[2]);
    int sorting_algo_number = atoi(argv[3]);


    srand(seed);
    int res[size];
    random_tab(size, res, -50, 50);
    print(size, res);
    printf("\n");
    switch (sorting_algo_number) {
    case 1:
        radix_sort(size, res);
        break;
    case 2:
        merge_sort(size, res);
        break;
    case 3:
        selection_sort(size, res);
        break;
    case 4:
        quick_sort(size, res, 0, size);
        break;
    default:
        printf("Choice non available\n");
        break;
    }
    print(size, res);
    printf("\n");
    if (is_sorted(size, res)) {
        printf("The result is sorted\n");
    } else {
        printf("The result is not sorted\n");
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}

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

int countBits(int n) {
    int count = 0;
    while (n) {
        count++;
        n >>= 1;
    }
    return count;
}

// void radix_sort(int size, int tab[size]) {
//     int min = 0;
//     int max = 0;
//     int tab1[size]; 
//     int tab2[size]; 

//     for(int i = 0; i < size ; i++){
//         if(tab[i] < min){
//             min = tab[i];
//         }
//         if(tab[i] > max){
//             max = tab[i];
//         }
//     }
//     if(min < 0){
//         for(int i = 0; i < size; i++){
//             tab[i] += -min;
//             max += -min;
//         }
//     }

//     int indice1 = 0;
//     int indice2 = 0;

//     for(int k = 0; k < countBits(max); k++){
//         for(int i = 0; i < size; i++){
//             if(((tab[i] >> k) & 1) == 1){
//                 tab1[indice1] = tab[i];
//                 indice1 += 1;
//             }
//             else{
//                 tab2[indice2] = tab[i];
//                 indice2 += 1;
//             }
//         }
//     }
//     printf("1. \n");
//     print(10,&tab1[10]);
//     printf("2. \n");
//     print(10,&tab2[10]);

//     printf("\n");

// }

void selection_sort(int size, int tab[size]) {
    // à compléter
}

void merge_sort(int size, int tab[size]) {
    // à compléter
}
// Tri rapide récursif
void quick_sort(int size, int array[size], int first, int last) {
    // à compléter
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
