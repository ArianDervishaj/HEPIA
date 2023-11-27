void insert_sort(int size, int tab[size]){
    for(int i = 1; i < size; i++){
        int key = tab[i];
        int j = i - 1;
        while(j >= 0 && tab[j] > key){
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = key;
    }
}