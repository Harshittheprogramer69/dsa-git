/*Question 20
Write a program to illustrate the use of cast operator in a real life situation.*/

#include <stdio.h>

int main() {
    int total = 275, subjects = 4;
    float average = total / (float)subjects;

    printf("Average = %.2f", average);
    return 0;
}