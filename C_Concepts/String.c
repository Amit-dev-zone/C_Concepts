
//Basic practice
#include <stdio.h>

void print_arr(char arr[]);

int main(){
    char name[] = "Amit";

    print_arr(name);
    return 0;
}

void print_arr(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    } printf("\n");
}



//count length

int count_length(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++){
        count++;
    }
    return count-1;
}
int main(){
    char az[] = {"hello world!"};

    int length = count_length(az);
    printf("%d", length);
    return 0;
}

//input and output
int main(){

    char str[100];
    printf("enter a string: ");
    fgets(str, sizeof(str)/sizeof(str[0]), stdin);
    puts(str);
}

Write a program to convert all lowercase vowels to
uppercase in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   for (int i = 0; str[i] != '\0'; i++) {
    switch (str[i]) {
        case 'a': str[i] = 'A'; break;
        case 'e': str[i] = 'E'; break;
        case 'i': str[i] = 'I'; break;
        case 'o': str[i] = 'O'; break;
        case 'u': str[i] = 'U'; break;
        default: break;
    }
}
    printf("Modified string: ");
    puts(str);
    return 0;
}


// Write a program to print the highest frequency character in a string.

#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int freq[256] = {0};
    int max_freq = 0;
    char max_char = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
        if (freq[(unsigned char)str[i]] > max_freq) {
            max_freq = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }

    printf("Highest frequency character: %c\n", max_char);
    return 0;
}



// c. Write a program to remove blank spaces in a string.

void remove_space(char str[]){
    int i, j = 0;
    for(i = 0; str[i] !='\0'; i++){
        if(str[i] != ' '){
            str[j++] = str[i];
        }
    }
    str[j] = '\0';  // Null-terminate the modified string
}
 int main(){

 char str[100];
 printf("enter a string: ");
 fgets(str, sizeof(str)/sizeof(str[0]), stdin);
 puts(str);

   remove_space(str);
   printf("String after removing spaces: ");
   puts(str);
   return 0;
 }


// Write a program to replace lowercase letters with
// uppercase & vice versa in a string.

void replace_case(char str[]){
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 'a' + 'A';
        } else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] - 'A' + 'a';
        }
    }
}
// another method for doing this is using uilt-in function  <ctype.c>