/*Question 5
Write an interactive program to demonstrate the process of multiplication. The program should ask the user to enter 2 two digit integers and print the product of integers as shown below
                45
            X   37
          ---------------
7 X 45 is      315
3 X 45 is     135
          ---------------
add them      1665
          --------------- */

#include <stdio.h>

void main() {
    int num1, num2, ones, tens, prod1, prod2, total;

    printf("Enter first 2 digit integer: ");
    scanf("%d", &num1);
    printf("Enter second 2 digit integer: ");
    scanf("%d", &num2);

    printf("\n\t\t\t\t%d\n", num1);
    printf("\t\t\t   X\t%d\n", num2);
    printf("\t\t\t  ---------------\n");

    ones = num2 % 10;
    tens = num2 / 10;

    prod1 = ones * num1;
    prod2 = tens * num1 * 10;

    printf("%d X %d is\t \t\t %d\n", ones, num1, prod1);
    printf("%d X %d is\t\t\t%d\n", tens, num1, prod2);
    printf("\t\t\t  ---------------\n");
    printf("add them\t\t\t%d\n", prod1 + prod2);
    printf("\t\t\t  ---------------\n");
}