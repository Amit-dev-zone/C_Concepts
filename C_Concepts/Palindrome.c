#include <stdio.h>

int is_palindrome(char str[]) {
 int length = 0;
 while (str[length] != '\0') {
 length++;
 }
 int start = 0;
 int end = length - 1;
 while (start < end) {
 if (str[start] != str[end]) {
 return 0; 
 }
 start++;
 end--;
 }
 return 1; 
}
int main() {
 char word1[] = "madam";
 char word2[] = "hello";
 if (is_palindrome(word1)) {
 printf("\"%s\" is a palindrome.\n", word1);
 } else {
 printf("\"%s\" is NOT a palindrome.\n", word1);
 }
 if (is_palindrome(word2)) {
 printf("\"%s\" is a palindrome.\n", word2);
 } else {
 printf("\"%s\" is NOT a palindrome.\n", word2);
 }
 return 0;
}
