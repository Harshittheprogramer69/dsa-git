#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];

    strcpy(str1, "TAT");
    strcpy(str2, str1);   // copy original to str2

    printf("%s",strrev(str1));         // reverse str1

    printf("\n\n");
    if(strcmp(str1, str2) == 0) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
}
