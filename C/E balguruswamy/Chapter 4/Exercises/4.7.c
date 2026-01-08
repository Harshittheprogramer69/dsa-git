/*Question 7
Write a program that prints the value 10.45678 in exponential format with the following specifications:
(a) correct to two decicmal places;
(b) correct to four decimal places; and
(c) correct to eight decimal places.*/

#include <stdio.h>

void main() {
    double number = 10.45678;

    printf("Number = %.2e\n", number);
    printf("Number = %.4e\n", number);
    printf("Number = %.8e\n", number);
}