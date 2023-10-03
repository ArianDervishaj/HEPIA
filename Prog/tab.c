#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

double findMin(double tab[], int size);
double* initTab(int size);
double* sortTab(double tab[], int size);

int main() {
    int size = 10;
    double* myList = initTab(size);
    for(int i = 0; i< 10; i++){
        printf("%f, ", myList[i]);
    }
    printf("\n");

    double min = findMin(myList,size);
    printf("min = %f",min);
    printf("\n");

    double* mySortedList = sortTab(myList, size);

    for(int i = 0; i<size; i++){
        printf("%f, ",mySortedList[i]);
    }
    printf("\n");
}

double findMin(double tab[],int size){
    int index = 0;
    double min = tab[0];
    for (int i = 1; i < size; ++i) {
        if (min > tab[i]) {
            min = tab[i];
            index = i;
        }
    }
    return min;
}

double* initTab(int size){

    double* tab = (double*)malloc(size * sizeof(double)); // Dynamically allocate memory
    if (tab == NULL) {
        exit(1);
    }
    for (int i = 0; i < size; ++i) {
        tab[i] = rand() / (double) RAND_MAX * 10.0 - 5.0;
    }
    return tab;
}

double* sortTab(double tab[], int size){
    
    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j=i+1; j<size; j++) {
            if (tab[j] < tab[min]) {
                min = j;
            }
        }
        if (min != i) {
            double tmp = tab[i];
            tab[i] = tab[min];
            tab[min] = tmp;
        }
    }

    return tab;
}