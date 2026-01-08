/*Question 11
Write a program to read a four digit integer and print the sum of its digits.*/

#include <stdio.h>

int main() {
    int num, sum, digit;
  
    printf("Enter the four digit integer:- ");
    scanf("%d", &num);
    
    if (num < 1000 || num > 9999) {
        printf("invalid 4 digit number.");
        return 1;
    }

    sum = 0;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }

    printf("Sum of integer:- %d", sum);
    return 0;
}