#include <stdio.h>
#include <ctype.h>

int main() {
 char text[] = "change me";

 printf("Before function call: %s\n", text); // Output: change me
 for(int i = 0; text[i] != '\0'; i++){
      text[i] = toupper(text[i]);  // Similarly tolower() 
 }
 printf("After function call: %s\n", text); // Output: CHANGE ME
 return 0;
}