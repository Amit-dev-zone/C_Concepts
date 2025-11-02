#include <stdio.h>
#include <string.h>

void slice(int n, int m, char str[]);


void slice(int n, int m, char str[]){
    char sliced[10];
    int i, j = 0;
    for(i = n,j = 0; i < m; i++,j++){
        sliced[j] = str[i];
    }
    sliced[j] = '\0';
    printf("Sliced string: %s\n", sliced);
}

int main(){ 
    char str[] = "Hello, World!";
    int n = 3, m = 9;

    slice(n, m, str);
    return 0;
}