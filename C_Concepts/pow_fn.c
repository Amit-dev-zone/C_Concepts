# include <stdio.h>

int pow(int base, int exp){
    int ans = 1;

    for(int i = 0; i<exp; i++){
        ans = ans * base;
    }
    return ans;
}