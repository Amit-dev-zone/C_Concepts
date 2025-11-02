#include <stdio.h>

int print_unique(int arr[], int n){
    int ans = 0;
    for(int i =0; i<n; i++){
       ans ^= arr[i];
       }
   return ans;
}

int main(){
    int arr[7] = {2, 9, 7, 3, 7, 3, 9};
    int n = 7;
    int unique = print_unique(arr, n);
    printf("Unique element is: %d\n", unique);
    return 0;
}
  

// Intersection of 2 Array