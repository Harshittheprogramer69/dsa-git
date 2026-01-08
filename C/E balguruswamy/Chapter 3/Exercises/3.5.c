/*Question 5
Give an integer number, write a program that displays the number as follows:
First line : all digits
Second line : all execpt first digit
Third line : all execpt first two digits
.......
Last line : The last digit*/

#include <stdio.h>
#include <string.h>

int main() {
    char array[50];
    int i,j,len;
    printf("Enter the number:- ");
    scanf("%s", array);
    len = strlen(array);
    for(i=0;i<len;i++) {
        for(j=i;j<len;j++) {
            printf("%c", array[j]);
        }
        printf("\n");
    }
    return 0;
}