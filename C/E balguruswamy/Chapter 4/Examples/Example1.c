/*Example 1
Write a program that reads a character from keyboard and then print the reverse case.*/

#include <stdio.h>
#include <ctype.h>

void main() {
    char alphabet;
    printf("Enter an Alphabet:-");
    
    alphabet=getchar();

    if(islower(alphabet)) {
        putchar(toupper(alphabet));
    } else {
        putchar(tolower(alphabet));
    }
}