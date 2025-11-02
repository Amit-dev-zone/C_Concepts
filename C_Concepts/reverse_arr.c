#include <stdio.h>

void rev_arr(int arr[], int n){

    for (int i = 0; i<n/2; i++){
        int key = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = key;
    }
    for(int i = 0; i<n; i++){
        printf("%d ", arr[i]);
    }
    
}

int main(){
    int arr[] = {2, 4, 67, 54, 83, 8, 3, 9, 2};
    
    rev_arr(arr, 9);
    return 0;
}