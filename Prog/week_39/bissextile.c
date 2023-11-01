#include <stdio.h>
int main(){
    int year = 0;
    printf("Entre une année : \n");
    scanf("%d", &year);

    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        printf("Bissextile");
    }else{
        printf("Pas bissextile");
    }
}