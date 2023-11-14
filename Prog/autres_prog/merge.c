#include <stdio.h>
#include <stdlib.h>

void merge(int array[], int left, int mid, int right) {
    int i, j, k;
    int left_size = mid - left + 1;
    int right_size = right - mid;

    int left_array[left_size], right_array[right_size];

    for (i = 0; i < left_size; i++)
        left_array[i] = array[left + i];
    for (j = 0; j < right_size; j++)
        right_array[j] = array[mid + 1 + j];

    //Fusionne les array temporaire dans l'array[left..right]
    i = 0; // Index de left
    j = 0; // Index de right
    k = left; // Index de la fusion des deux

    while (i < left_size && j < right_size) {
        if (left_array[i] <= right_array[j]) {
            array[k] = left_array[i];
            i++;
        } else {
            array[k] = right_array[j];
            j++;
        }
        k++;
    }

    while (i < left_size) {
        array[k] = left_array[i];
        i++;
        k++;
    }

    while (j < right_size) {
        array[k] = right_array[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int left, int right) {
    if (left < right) {
        
        int mid = (left + right) / 2;
        
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);
        
        merge(array, left, mid, right);
    }
}

int main() {
    int input_array[] = {12, 11, 13, 5, 6, 7};
    int array_size = sizeof(input_array) / sizeof(input_array[0]);

    printf("Given array is \n");
    for (int i = 0; i < array_size; i++)
        printf("%d ", input_array[i]);
    printf("\n");

    mergeSort(input_array, 0, array_size - 1);

    printf("Sorted array is \n");
    for (int i = 0; i < array_size; i++)
        printf("%d ", input_array[i]);
    printf("\n");

    return 0;
}
