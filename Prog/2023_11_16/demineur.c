#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct square{
    enum {
        EMPTY = ' ',
        FLAG = 'F',
        BOMB = 'B'
        } type;
    int neighboor_bomb;
    
};

typedef struct square square_t;

void fill_bomb_grid(int nb_bomb, int nb_col,int nb_ligne, square_t grid[nb_ligne][nb_col]){
    srand(time(0));
    int nb_bomb_placed = 0;

    for(int ligne = 0; ligne < nb_ligne; ligne += 1){
        for(int col = 0; col < nb_col; col += 1){
            int random = rand() % 6;

            if(random == 0 && nb_bomb_placed < nb_bomb){
                grid[ligne][col].type = BOMB;
                grid[ligne][col].neighboor_bomb = 0;
                nb_bomb_placed += 1;


            }else{
                grid[ligne][col].type = EMPTY;
            }
        }
    }
}

void print_grid(int nb_col, int nb_ligne,square_t grid_bomb[nb_ligne][nb_col],square_t grid_neighboor[nb_ligne][nb_col]){
    int nb_tiret = nb_col*5;
    for(int i = 0; i < nb_ligne; i += 1){
        for(int j = 0; j < nb_col; j += 1){
                printf("| %c |",grid_bomb[i][j].type);
        }

        printf("\n");
        for(int w = 0; w < nb_tiret; w++){
            printf("-");
        }
        printf("\n");
    }
}

void fill_neighboor_grid(int nb_col, int nb_ligne, square_t grid_bomb[nb_ligne][nb_col],square_t grid_neighboor[nb_ligne][nb_col]){
    for(int ligne = 0; ligne < nb_ligne; ligne++){
        for(int col = 0; col < nb_col; col++){
            printf("HELLOOOOOOOOOOOOOOOOOOOO");
        }
    }
}

int main(int argc, char **argv) {
    int nb_col = atoi(argv[1]);
    int nb_ligne = atoi(argv[2]);
    int nb_bomb = atoi(argv[3]);

    square_t grid_bomb[nb_ligne][nb_col];
    square_t grid_neighboor[nb_ligne][nb_col];

    fill_bomb_grid(nb_bomb, nb_col, nb_ligne, grid_bomb);

    print_grid(nb_col, nb_ligne, grid_bomb,grid_neighboor);

}