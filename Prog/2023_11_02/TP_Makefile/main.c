#include <stdint.h>
#include "fractions.h"

int main(void){
    fraction_t frac_1;
    fraction_init(&frac_1, 2,3);
    fraction_t frac_2;
    fraction_init(&frac_2, 3,5);
    
    fraction_t frac_3;
    fraction_neg_inplace(&frac_1, &frac_3);

    fract_print(&frac_3);
    return 0;
}