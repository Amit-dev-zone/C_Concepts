#include <stdio.h>

int main (){
    int n, rev = 0; 

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n>0){
        int r = n%10;
        rev = rev * 10 + r;
        n /= 10;
    }
    printf("Reverse is : %d", rev);
}