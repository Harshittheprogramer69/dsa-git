/*Question 2
Write a program that reads a floating point number and then displays the right most digit of the integral part of the number.*/

#include <stdio.h>

int main() {
    float number;
    int new_number, right_most_digit;
    printf("Enter vaule for number:- ");
    scanf("%f", &number);
    new_number = (int)number; // Float to integer
    right_most_digit = new_number % 10; 
    printf("Right most part = %d", right_most_digit);
    return 0;
}