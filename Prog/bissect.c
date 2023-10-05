#include <math.h>
#include <stdio.h>

double g(double x){ 
    return pow(x, 5) +  2*pow(x, 4) + pow(x, 3) + pow(x, 2) - 1;
}

char sign(double number){
    if(number>0){
        return '+';
    }
    else{
        return '-';
    }
}

int bissect(double a1, double b1, double epsilon, double *zero);

int main(){

    double a1;
    double b1;
    double epsilon;
    double zero;

    printf("Veuillez indiquer les deux bornes et la tolérance : ");
    scanf("%lf %lf %lf", &a1, &b1, &epsilon);

    if(a1>=b1 || epsilon<=0 || (g(a1)<0 && g(b1)<0) || (g(a1)>0 && g(b1)>0)){
        printf("Les arguments ne sont pas cohérents\n");
    }
    
    printf("%d\n", bissect( a1,  b1,  epsilon,  &zero));
    printf("%lf\n", zero);

    return 0;
}

int bissect(double a1, double b1, double epsilon, double *zero){

    int iteration = 0;
    double c = (b1+a1)/2;
    while(fabs(b1-a1)>epsilon){
        c = (b1+a1)/2;
        if(g(c) != 0){
            if(sign(g(c)) == sign(g(b1))){
                b1 = c;
            }
            else if(sign(g(c)) == sign(g(a1))){
                a1 = c;
            }
        }
        else{
            break;
        } 

        iteration += 1;
    }

    *zero = c;
    return iteration;
}