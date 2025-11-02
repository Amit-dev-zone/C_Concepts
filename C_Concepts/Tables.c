#include <stdio.h>

void store_tables(int tables[][10], int n, int m, int num);

int main (){
    int tables[2][10];

    store_tables(tables, 0, 10, 2);
    store_tables(tables, 1, 10, 3);

    for(int i = 0; i<10; i++){
        printf("%d  %d\n", tables[0][i], tables[1][i]);
    }
    return 0;
}

void store_tables(int tables[][10], int n, int m, int num){
    for(int i = 0; i < m; i++){
        tables[n][i] = num * (i + 1);
    }
}