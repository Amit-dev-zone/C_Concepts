#include <stdio.h>

int check_temp(int n){
    if(n<20){
        printf("Cold\n");
    }
    else if(n <=70 && n>=20){
        printf("Hot\n");
    }
}
int main(){
    int n;
 
    printf("Enter a char : ");
    scanf("%d", &n);

    check_temp(n);
    return 0;
}