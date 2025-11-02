// c. Write a program to insert an element at the end of
// an array

#include <stdio.h>
int main(){

    int arr[100] = {2, 6, 8, 4, 3, 4, 4};
    int n = 7; int new; 

    printf("Enter the element to add at the end: ");
    scanf("%d", &new);
    arr[n] = new;
    n++; // increment the size of the array
    
    printf("Updated array:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
