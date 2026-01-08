/*Question 7
Write a program that will read a real number from the keyboard and print the following output in one line
smallest integer       The given            Largest integer 
not less than           number              not greater then
the number                                  the number
*/

#include <stdio.h>

int main() {
    float number;
    int small, large;
    printf("Enter the number:- ");
    scanf("%f", &number);
    small = number;
    large = (number/1);
    printf("%d %f %d", small, number, large);
    return 0;
}