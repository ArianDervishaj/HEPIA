#include <stdio.h>
#include "mystring.h"
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>


int string_cat(size_t dest_size, char *dest, char *src){
    size_t src_size = string_len(src);
    size_t new_size = dest_size + src_size;

    for(size_t i = 0; i < src_size; i += 1){
        dest[dest_size + i] = src[i];

    }
    dest[dest_size + src_size]= '\0';
    printf("%s",dest);

    if(string_len(dest) != new_size){
        return EXIT_FAILURE;
    }else{
        return EXIT_SUCCESS;
    }

}

char *string_chr(char *s, char c){
    size_t s_size = string_len(s);

    for(size_t i = 0; i < s_size; i += 1){
        if(s[i] == c){
            return &s[i];
        }
    }

    return NULL;
}


bool string_cmp(char *s1, char *s2){
    size_t s1_size = string_len(s1);
    size_t s2_size = string_len(s2);

    if(s2_size != s1_size){
        return false;
    }

    for(size_t i = 0; i < s1_size; i += 1){
        if(s1[i] != s2[i]){
            return false;
        }
    }

    return true;
}

int string_cpy(size_t dest_size, char *dest, char *src){
    for(size_t i = 0; i < dest_size; i += 1){
        dest[i] = src[i];
    }

    if(string_len(src) != string_len(dest)){
        return EXIT_FAILURE;
    }else{
        return EXIT_SUCCESS;
    }
}

size_t string_len(char *s){
    int iteration = 0;

    while (s[iteration] != '\0'){
        iteration += 1;
    }

    return iteration;
}

int string_ncat(size_t dest_size, char *dest, char *src, size_t n){
    size_t dest_len = string_len(dest);

    for (size_t i = 0; i < n && src[i] != '\0'; i++) {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + n] = '\0';

    printf("%s", dest);

    if(string_len(dest) != dest_len + n || string_len(dest) < dest_size){
        return EXIT_FAILURE;
    }else{
        return EXIT_SUCCESS;
    }
}


//TODO
bool string_ncmp(char *s1, char *s2, size_t n){
    size_t sizeOfs1 = sizeof(s1);
    size_t sizeOfs2 = sizeof(s2);
    printf("PAS ENCORE FAIS");
    if(sizeOfs1 >= sizeOfs2 - n || sizeOfs1 <= sizeOfs2 + n){
        return EXIT_SUCCESS;
    }else{
        return EXIT_FAILURE;
    }
}


//COMME LA string_cat
int string_ncpy(char *dest, char *src, size_t n){
    printf("PAS ENCORE FAIS");
    return 0;
}

size_t string_cnt_chr(char *s, char c){
    size_t count = 0;

    for(size_t i = 0; i < string_len(s); i += 1){
        if(s[i] == c){
            count += 1;
        }
    }

    return count;
}

void string_fry(char *s){
    size_t len = string_len(s);
    srand(time(NULL));
    char temp = '0';

    for (size_t i = 0; i < len; i++) {
        size_t random_number_1 = rand() % len;
        size_t random_number_2 = rand() % len;

        temp = s[random_number_1];
        s[random_number_1] = s[random_number_2];
        s[random_number_2] = temp;
    }

}
