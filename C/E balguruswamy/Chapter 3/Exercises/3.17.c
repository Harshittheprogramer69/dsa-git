/*Question 17
Write a program to print a table of sin and cos functions for the interval from 0 to 180 degrees in increment of 15 in tabular form.*/

#include <stdio.h>
#include <math.h>

#define PIE 3.141592

int main() {
    float x, radian;

    printf("x{degrees}\t\tsin(x)\t\tcos(x)\n");
    for (x=0.0; x <= 180.0; x+=15.0) {
        radian = x*PIE/180.0;
        printf("%.2f\t\t\t%.4f\t\t%.4f\n", x, sin(radian), cos(radian));
    }
    return 0;
}