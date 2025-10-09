#include <stdio.h>

int main(){
    int i, j;
//     int n = 4;
//     for(i = 1; i<=n; i++){
//         for(j= 1; j<=n;j++){
//             printf("%d", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int n = 5;

// for(int i = 0; i<n; i++){
//     char ch = 'A';
//     for(int j = 0; j<n; j++){
//         printf("%c", ch);
//         ch = ch + 1;
//     }
//     printf("\n");
// }
// }


// int num = 1;
// int n = 3;
// for(i = 0; i<n; i++){
//     for(j = 0; j<n; j++){
//         printf("%d", num);
//          num++;
//     }
//     printf("\n");

// }
// return 0;
//}

// int n = 3;
// char ch = 'A';
// for(i = 0; i<n; i++){
//     for(j = 0; j<n; j++){
//         printf("%c", ch);
//         ch++;
//     }
//     printf("\n");
// }
// return 0;
// }




//           Triangle pattern;
// int n = 4;

// for(i = 0; i<n; i++){
//     for(j = 0; j<=i; j++) {
//   printf("*");
// }
// printf("\n");
// }
// return 0;
// }

// int n = 4;

// for(i = 0; i<n; i++){
//       for(j = 0; j<=i; j++) {
//     printf("*");
//     }
//     printf("\n");
// }
// return 0;
// }


// int n = 4;
// for(i = 0; i<n; i++){
//     for(j = 0; j<i; j++){
//         printf(" ");
//     }
//     for(j = 0; j< n-i; j++){
//         printf("%d", i+1);
//     }
//     printf("\n");
// }
// return 0;
// }

int n = 4;

for(i = 0; i<n; i++){
    for( j = 0; j<=n-i-1; j++){
        printf(" ");
    }

    for(j = 0; j<i+1; j++){
        printf("%d", j+1);
        printf(" ");
    }
    for(j = 0; j<i; j++){
        printf("%d", j+1);
        printf(" ");
    }
    printf("\n");
}
return 0;
}