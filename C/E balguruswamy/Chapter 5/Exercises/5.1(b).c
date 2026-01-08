/*Question 1(b)
Write a program to determine whether a given number is 'odd' or 'even' and print message
NUMBER IS EVEN
or
NUMBER IS ODD
with using else option*/

#include <stdio.h>

void main() {
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2==0) {
        printf("NUMBER IS EVEN");
    } else {
        printf("NUMBER IS ODD");
    }
}