// In an array of numbers, find how many times does
// a number 'x' occurs

#include <stdio.h>

int main(){
    int arr[7] = {2, 6, 8, 4, 3, 4, 4};
    int s, n;
    n = sizeof(arr)/sizeof(arr[0]);
    printf("enter num to search: ");
    scanf("%d", &s);

    int count = 0;
    for (int i = 0; i<n; i++){
        if(arr[i] == s){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}