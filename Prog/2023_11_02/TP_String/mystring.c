#include <stdio.h>
#include "mystring.h"
#include <stdbool.h>

int string_cat(size_t dest_size, char *dest, char *src){
    size_t src_size = string_len(src);
    size_t new_size = dest_size + src_size;

    for(size_t i = 0; i < src_size; i += 1){
        dest[dest_size + i] = src[i];

    }
    dest[new_size + 1 ]= '\0';

    if(string_len(dest) != new_size){
        return 1;
    }else{
        return 0;
    }

}

char *string_chr(char *s, char c);

bool string_cmp(char *s1, char *s2);

int string_cpy(size_t dest_size, char *dest, char *src);

size_t string_len(char *s){
    int iteration = 0;

    while (s[iteration] != '\0'){
        iteration += 1;
    }

    return iteration;
}

int string_ncat(size_t dest_size, char *dest, char *src, size_t n);

bool string_ncmp(char *s1, char *s2, size_t n);

int string_ncpy(char *dest, char *src, size_t n);

size_t string_cnt_chr(char *s, char c);

void string_fry(char *s);

int main(){
    char test[1000] = "Hello";
    size_t size_test = 5;
    char test2[] = "Voila!";

    string_cat(size_test,&test[0],&test2[0]);

    return 0;
}