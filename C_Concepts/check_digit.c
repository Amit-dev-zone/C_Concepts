#include <stdio.h>

int main (){
    char c;

    printf("Enter a char : ");
    scanf("%c", &c);

    if(c >='0' && c<= '9'){printf("yes");
    } else {
        printf("No!");
    }
    return 0;
}