/*Question 1(a)
Write a program to determine whether a given number is 'odd' or 'even' and print message
NUMBER IS EVEN
or
NUMBER IS ODD
without using else option*/

#include <stdio.h>
#include <string.h>

void main() {
    int num;
    char str1[]="NUMBER IS EVEN";
    char str2[]="NUMBER IS ODD";

    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2!=0) {
        strcpy(str1,str2);
    }

    printf("%s",str1);
}