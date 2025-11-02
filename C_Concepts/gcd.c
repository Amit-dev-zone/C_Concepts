#include <stdio.H>

int main(){
    int D, d, r;
    printf("Enter two integer: ");
    scanf("%d %d", &D, &d);

    while(d != 0){
        r = D%d;
        D = d;
        d = r;
    }
     printf("GCD is %d\n", D);
     return 0;
}