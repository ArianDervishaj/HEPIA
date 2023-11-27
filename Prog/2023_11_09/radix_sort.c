int find_max(int size, int tab[size]){
    int max = tab[0];

    for(int i = 1; i < size; i++){
        if(tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}

int find_min(int size, int tab[size]){
    int min = tab[0];

    for(int j = 1; j < size; j++){
        if(tab[j] < min){
            min = tab[j];
        }
    }

    return min;
}

int count_bits(int number){
    int count = 0; 
    while (number) 
    { 
        count++; 
        number >>= 1; 
    } 
    return count; 
}

void radix_sort(int size, int tab[size]) {
    int min = find_min(size, tab);
    
    if(min < 0){
        for (int i = 0; i < size; i ++) {
            tab[i] -= min;
        }
    }

    int max = find_max(size, tab);

    int nb_of_bits = count_bits(max);

    



}