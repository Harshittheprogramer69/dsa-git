/*Question 3
Write a program to read the following numbers, round them off to the nearest integers and print out the results in integer form:
35.7    50.21   -23.73  -46.45 */

#include <stdio.h>
#include <math.h>

void main() {
    float a=35.7, b=50.21, c=-23.73, d=-46.45;

    printf("%d\n",(int)round(a));
    printf("%d\n",(int)round(b));
    printf("%d\n",(int)round(c));
    printf("%d\n",(int)round(d));
}