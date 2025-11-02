#include <stdio.h>

int toh(int b, int a, int e, int n){//no of disk)
    if(n==1){
        printf("Move disk 1 from rod %d to rod %d\n", b, e);
        return 0;
    }
    toh(b, e, a, n-1);
    printf("Move disk %d from rod %d to rod %d\n", n, b, e);
    toh(a, b, e, n-1);
}

int main(){
    int n;
    printf("Enter No of Disks: ");
    scanf("%d", &n);

    toh(1, 2, 3, n);
    return 0;
}