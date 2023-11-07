#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <stdbool.h>
#include "mystring.h"
#define MAX_SIZE 100

int main(int argc, char **argv) {
    char *name = argv[1];
    int choix = atoi(argv[2]);
    char string_1[] = "Hello";
    char string_2[] = "HELLO";
    char char_to_find = 'c';
    size_t nombre = 2;
    printf("Concatener : \n");

    printf("Entrez la première chaine de caractère : ");
    scanf("%s",&string_1[0]);
    printf("Entrez la deuxième chaine de caractère : ");
    scanf("%s",&string_2[0]);
    string_cat(MAX_SIZE, &string_1[0], &string_2[0]);



    // if(choix == 1){
    //     

    //     
    // }else if(choix == 2){
    //     printf("Trouver l'addr d'un char : \n ");
    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez le caractère a trouver :\n ");
    //     scanf("%c",char_to_find);

    //     string_chr(&string_1[0], char_to_find);
    // }
    // else if(choix == 3){
    //     printf("Comparer 2 chaines de caractères : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez la deuxième chaine de caractère :\n ");
    //     scanf("%s",string_2);

    //     bool are_same = string_cmp(&string_1[0],&string_2[0]);
    //     if(are_same){
    //         printf("Ce sont les memes chaines");
    //     }else{
    //         printf("Les chinaes sont differentes.");
    //     }
    // }
    // else if(choix == 4){
    //     printf("Copier une chaine dans l'autre : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez la deuxième chaine de caractère :\n ");
    //     scanf("%s",string_2);

    //     string_cpy(MAX_SIZE, &string_1[0], &string_2[0]);
    // }
    // else if(choix == 5){
    //     printf("Trouver la longueuer de la chaine : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);   

    //     string_len(&string_1[0]);
    // }
    // else if(choix == 6){
    //     printf("Ajouter n character dans la premiere chaine : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez la deuxième chaine de caractère :\n ");
    //     scanf("%s",string_2);
    //     printf("Entrez la nb de caractère a copier :\n ");
    //     scanf("%ld",nombre);              

    //     string_ncat(MAX_SIZE, &string_1[0], &string_2[0], nombre);
    // }
    // else if(choix == 7){
    //     printf("Comparer a n bit pres : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez la deuxième chaine de caractère :\n ");
    //     scanf("%s",string_2);
    //     printf("Entrez la nb de caractère a copier :\n ");
    //     scanf("%ld",nombre);  

    //     string_ncmp(&string_1[0], &string_2[0], nombre);
    // }
    // else if(choix == 8){
    //     printf("Copier n character dans la premiere chaine : \n");

    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez la deuxième chaine de caractère :\n ");
    //     scanf("%s",string_2);
    //     printf("Entrez la nb de caractère a copier :\n ");
    //     scanf("%ld",nombre);         

    //     string_ncpy(&string_1[0],&string_2[0], nombre);
    // }
    // else if(choix == 9){
    //     printf("Compter le nombre de c dans la chaine: \n ");
    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     printf("Entrez le caractère a trouver :\n ");
    //     scanf("%c",char_to_find);
    //     string_cnt_chr(&string_1[0], char_to_find);
    // }
    // else if(choix == 10){
    //     printf("Melanger les caracteres de la chaine: \n ");
    //     printf("Entrez la première chaine de caractère :\n ");
    //     scanf("%s",string_1);
    //     string_fry(&string_1[0]);
    // }
    // else{
    //     printf("Le choix que vous avez fait n'est pas valable !");
    // }
    return EXIT_SUCCESS;
}