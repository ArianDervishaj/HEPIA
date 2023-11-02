#ifndef _FRACTIONS_
#define _FRACTIONS_

struct fraction {
    int32_t num, denom;
};

//Definition du type fraction_t
typedef struct fraction fraction_t;

void fraction_init(fraction_t *f, int32_t num, int32_t denom);

void fract_print(fraction_t *f);

void reduce_frac(fraction_t *f);

void pow_frac(fraction_t *f,int exponent);

void fraction_add_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3);

void fraction_sub_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3);

void fraction_mult_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3);

void fraction_div_inplace(fraction_t *f_1,fraction_t *f_2,fraction_t *f_3);

void fraction_neg_inplace(fraction_t *f_1,fraction_t *f_2);
#endif