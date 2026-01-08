/*Question 18
Write a program to compute the values of square roots and squares of the numbers 0 to 100 in steps 10 and print the output in a tabular form*/

#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Number\t\t\tSquare-root\t\tSquare\n");
    for (num = 0.0; num <= 100.0; num += 10.0) {
        printf("%.0f\t\t\t%.3f\t\t\t%.0f\n", num, sqrt(num), pow(num, 2));
    }
    return 0;
}