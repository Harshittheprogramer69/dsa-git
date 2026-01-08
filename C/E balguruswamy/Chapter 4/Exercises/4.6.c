/*Question 6
write a program to read three integers from the keyboard using one scanf statement and output them on one line using:
(a) three printf statements,
(b) only one printf with conversion specifiers, and
(c) only one printf without conversion specifers.*/

#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("Enter first integer:- ");
    scanf("%d", &a);
    printf("Enter second integer:- ");
    scanf("%d", &b);
    printf("Enter third integer:- ");
    scanf("%d", &c);

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    printf("a = b = c = \n");
    
    return 0;
}