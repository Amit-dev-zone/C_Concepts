#include <stdio.h>

int main(){
    FILE *fptr;
    // fptr = fopen("t.txt", "r");
    // int n;
    // fscanf(fptr, "%d", &n);
    // printf("number1 = %d\n", n);
    //  fscanf(fptr, "%d", &n);
    // printf("number2 = %d\n", n);

    fptr = fopen("t.txt", "r");
    // fprintf(fptr, "Hello, world!");

    int n;
   fscanf(fptr, "%d", &n);
   printf("number1 = %d\n", n);
   fscanf(fptr, "%d", &n);
   printf("number2 = %d\n", n);

    char ch[20];
    fscanf(fptr, "%s", ch);
    printf("str = %s\n", ch);

    fclose(fptr);
    return 0;

}