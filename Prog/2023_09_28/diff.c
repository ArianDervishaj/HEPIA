#include <stdio.h>
#include <math.h>

int main(void){
    int input = 0;
    int sumOfSquare = 0;
    int squareOfSum= 0;
    int diffOfsums = 0;

    printf("Entre un nombre : ");
    scanf("%d", &input);

    squareOfSum = input *(input+1)/2;
    squareOfSum = pow(squareOfSum, 2);

    sumOfSquare = input*(input+1)*(2 * input + 1)/6;

    if(squareOfSum > sumOfSquare){

        diffOfsums = squareOfSum - sumOfSquare;
    }else{
        diffOfsums = sumOfSquare - squareOfSum;
    }

    printf("La difference est de %d \n", diffOfsums);
}