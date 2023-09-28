#include <stdio.h>
#include <math.h>
int lengthOfNumber(int nb){
    int length = 0;
    while (nb > 0){
        nb /=10;
        length += 1;
    }
    return length;
}
int main(void){
    int input = 0;
    int length = 0;
    int res = 0;

    printf("Entre un nombre : ");
    scanf("%d", &input);
    int inputOG = input;
    length = lengthOfNumber(input);


    while(input){
        int n = input % 10;
        input /= 10;
        res += pow(n, length);
    }
    
    if(res == inputOG){
        printf("%d est un nombre d'Armstrong", inputOG);
    }else {
        printf("%d n'est pas un nombre d'Armstrong", inputOG);
    }

}