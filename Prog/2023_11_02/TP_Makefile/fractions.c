#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "fractions.h"

void fraction_init(fraction_t *f, int32_t num, int32_t denom){
    f->num = num;
    f->denom = denom;
}

void fract_print(fraction_t *f){
    int32_t num = f->num;
    int32_t denom = f->denom;

    printf("%d / %d \n",num,denom);
}

int32_t pgdc(int32_t nb1, int32_t nb2){
    int temp_1 = nb1, temp_2 = nb2;
    while(temp_1 % temp_2 != 0){
        int temp = temp_1;
        temp_1 = temp_2;
        temp_2 = temp % temp_2;
    }
    return temp_2;
}

//Reduit une fraction en fraction irreductible
void reduce_frac(fraction_t *f){

    int32_t num = f->num;
    int32_t denom = f->denom;
    int32_t diviseur = pgdc(num,denom);

    if(diviseur != 1){
        f->num = num/diviseur;
        f->denom = denom/diviseur;
    }

}

void pow_frac(fraction_t *f,int exponent){
    int32_t num = f->num;
    int32_t denom = f->denom;

    num = pow(num,exponent);
    denom = pow(denom,exponent);

    int32_t diviseur = pgdc(num,denom);

    if(diviseur != 1){
        f->num = num/diviseur;
        f->denom = denom/diviseur;
    }else{
        f->num = num;
        f->denom = denom;
    }
}


void fraction_add_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3){
    int32_t new_num = (f_1->num * f_2->denom) + (f_2->num * f_1->denom);
    int32_t new_denom = f_1->denom * f_2->denom;

    fraction_init(f_3,new_num,new_denom);
}


void fraction_sub_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3){
    int32_t new_num = (f_1->num * f_2->denom) - (f_2->num * f_1->denom);
    int32_t new_denom = f_1->denom * f_2->denom;

    fraction_init(f_3,new_num,new_denom);
}

void fraction_mult_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3){
    int32_t new_num = f_1->num * f_2->num;
    int32_t new_denom = f_1->denom * f_2->denom;

    fraction_init(f_3,new_num,new_denom);
}

void fraction_div_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3){
    int32_t new_num = f_1->num * f_2->denom;
    int32_t new_denom = f_1->denom * f_2->num;

    fraction_init(f_3,new_num,new_denom);
}

void fraction_neg_inplace(fraction_t *f_1,fraction_t *f_2){
    int32_t new_num = f_1->num * (-1);
    
    fraction_init(f_2,new_num,f_1->denom);
}