/*Question 8
Write a program to print the balue 345.6789 in fixed point format with the following specifications:-
(a) correct to two decimal places;
(b) correct to four decimal places; and
(c) correct to zero decimal places;*/

#include <stdio.h>

int main() {
    float number = 345.6789;

    printf("Number = %.2f\n", number);
    printf("Number = %.4f\n", number);
    printf("Number = %.0f\n", number);

    return 0;
}